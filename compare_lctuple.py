import ROOT
from ROOT import RDataFrame
from ROOT import TChain, TSelector, TTree

import numpy as np
import pickle

import psutil
import time

from utils import *
 
# Enable multi-threading
ROOT.ROOT.EnableImplicitMT()

# Batch mode
ROOT.gROOT.SetBatch(ROOT.kTRUE)

if __name__ == "__main__":

   #start = time.time()

   #input files 
   file1 = "lctuple_PiGun.root"
   file2 = "lctuple_PiGunMod.root"

   #we assume the two trees have same entries, adding as "friend"
   ch1 = TChain("MyLCTuple");
   ch1.Add(file1);
   ch2 = TChain("MyLCTuple");
   ch2.Add(file2);
   ch2.BuildIndex("evevt")
   ch1.AddFriend(ch2, "mod") #2nd TTree branches renamed mod.branch

   #from TTree to RDataFrame
   df = RDataFrame(ch1)

   #selections
   #df.Filter("myselections")

   #entries after selection
   #entries = df.Count()
   #print("total ",entries.GetValue())
   #print(df.GetColumnNames())

   #compute difference between some variables
   df = df.Define("ncah_diff", "ncah - mod.ncah")
   df = df.Define("nclu_diff", "nclu - mod.nclu")
   df = df.Define("nsch_diff", "nsch - mod.nsch")

   c1 = ROOT.TCanvas("c1", "c1", 600, 800)
   histo_list = []
   #plot differences
   for var in ["ncah_diff", "nclu_diff", "nsch_diff"]:
     h1 = df.Histo1D((var, var, 50, var_dict[var][0], var_dict[var][1]), var) 
     histo_list.append(h1)

   histo_pairs = []
   var_list = ["ncah", "nclu", "nsch"]
   #plot superimposed th1 features
   for var in var_list:
       h1 = df.Histo1D((var, var, 50, var_dict[var][0], var_dict[var][1]), var) 
       h2 = df.Histo1D(("mod."+var, "mod."+var, 50, var_dict[var][0], var_dict[var][1]), "mod."+var) 
       histo_pairs.append([h1, h2])

   #drawing at the very end saves time (i.e. loops)
   for h in histo_list:
     h.Draw("hist")
     c1.SaveAs("plots/"+var+".png")

   for index, histo_pair in enumerate(histo_pairs):
     draw_th1(histo_pair[0], histo_pair[1], var_list[index], "baseline", "modified", c1, "100entries")

   print("performed ",df.GetNRuns()," loops")
