import ROOT

def list_rootfiles(path):
   #generating the list of all .root files in given directory and subdirectories
   file_list = []
   for r, d, f in os.walk(path): # r=root, d=directories, f = files
       for file in f:
           if '.root' in file:
               file_list.append(os.path.join(r, file))

   return file_list

def call_th1(df1, df2, f, w):
       print("plotting feature ",f)
       #binning from dictionary
       x1 = var_dict[f][0]
       x2 = var_dict[f][1]
       h1 = df1.Histo1D((f, f, 50, x1, x2), f, w)
       h2 = df2.Histo1D((f, f, 50, x1, x2), f, w)
       return h1, h2

def draw_th1(h1, h2, f, label1, label2, c, name):
       h1.Scale(1.0/h1.Integral())
       h2.Scale(1.0/h2.Integral())

       h1.SetLineColor(2)
       h1.Draw("hist")
       h2.Draw("hist same")

       leg = ROOT.TLegend(.73,.32,.97,.53)
       leg.SetBorderSize(0)
       leg.SetFillColor(0)
       leg.SetFillStyle(0)
       leg.SetTextFont(42)
       leg.SetTextSize(0.035)
       leg.AddEntry(h1.GetPtr(),label1,"L")
       leg.AddEntry(h2.GetPtr(),label2,"L")
       leg.Draw()

       c.SaveAs("plots/"+f+"_"+name+".png")

def nano_to_DF(path,treename):
   frame = RDataFrame(treename, path+"/*.root")
   return frame

#dictionary containing feature names and ranges for binning
var_dict = {
       "ncah": [0, 300], #n rec calo hit 
       "nclu": [0, 5], #n pfa rec clu
       "nsch": [0, 5],  #n sim calo hit
       "ncah_diff": [0, 300], #n rec calo hit 
       "nclu_diff": [0, 5], #n pfa rec clu
       "nsch_diff": [0, 5]  #n sim calo hit
}

