//////////////////////////////////////////////////////////
// This class has been automatically generated on
// Mon Nov 20 18:46:20 2023 by ROOT version 6.18/04
// from TTree MyLCTuple/columnwise ntuple with LCIO data
// found on file: lctuple_example.root
//////////////////////////////////////////////////////////

#ifndef PiGunAnaWithClusters_h
#define PiGunAnaWithClusters_h

#include <TROOT.h>
#include <TChain.h>
#include <TFile.h>

// Header file for the classes stored in the TTree if any.
#include "vector"

class PiGunAnaWithClusters {
public :
   TTree          *fChain;   //!pointer to the analyzed TTree or TChain
   Int_t           fCurrent; //!current Tree number in a TChain

// Fixed size dimensions of array or collections stored in the TTree if any.

   // Declaration of leaf types
   Int_t           evevt;
   Int_t           evrun;
   Float_t         evwgt;
   Long64_t        evtim;
   Float_t         evsig;
   Float_t         evene;
   Float_t         evpoe;
   Float_t         evpop;
   Int_t           evnch;
   Char_t          evpro[1];   //[evnch]
   Int_t           nmcp;
   Int_t           mcori[326364];   //[nmcp]
   Int_t           mcpdg[326364];   //[nmcp]
   Int_t           mcgst[326364];   //[nmcp]
   Int_t           mcsst[326364];   //[nmcp]
   Float_t         mcvtx[326364];   //[nmcp]
   Float_t         mcvty[326364];   //[nmcp]
   Float_t         mcvtz[326364];   //[nmcp]
   Float_t         mcepx[326364];   //[nmcp]
   Float_t         mcepy[326364];   //[nmcp]
   Float_t         mcepz[326364];   //[nmcp]
   Float_t         mcmox[326364];   //[nmcp]
   Float_t         mcmoy[326364];   //[nmcp]
   Float_t         mcmoz[326364];   //[nmcp]
   Float_t         mcmas[326364];   //[nmcp]
   Float_t         mcene[326364];   //[nmcp]
   Float_t         mccha[326364];   //[nmcp]
   Float_t         mctim[326364];   //[nmcp]
   Float_t         mcspx[326364];   //[nmcp]
   Float_t         mcspy[326364];   //[nmcp]
   Float_t         mcspz[326364];   //[nmcp]
   Int_t           mccf0[326364];   //[nmcp]
   Int_t           mccf1[326364];   //[nmcp]
   Int_t           mcpa0[326364];   //[nmcp]
   Int_t           mcpa1[326364];   //[nmcp]
   Int_t           mcda0[326364];   //[nmcp]
   Int_t           mcda1[326364];   //[nmcp]
   Int_t           mcda2[326364];   //[nmcp]
   Int_t           mcda3[326364];   //[nmcp]
   Int_t           mcda4[326364];   //[nmcp]
   Int_t           nrec;
   Int_t           rcori[7];   //[nrec]
   Int_t           rccid[7];   //[nrec]
   Int_t           rctyp[7];   //[nrec]
   Float_t         rccov[7][10];   //[nrec]
   Float_t         rcrpx[7];   //[nrec]
   Float_t         rcrpy[7];   //[nrec]
   Float_t         rcrpz[7];   //[nrec]
   Float_t         rcgpi[7];   //[nrec]
   Int_t           rcpiu[7];   //[nrec]
   Int_t           rcnpi[7];   //[nrec]
   Int_t           rcfpi[7];   //[nrec]
   Float_t         rcmox[7];   //[nrec]
   Float_t         rcmoy[7];   //[nrec]
   Float_t         rcmoz[7];   //[nrec]
   Float_t         rcmas[7];   //[nrec]
   Float_t         rcene[7];   //[nrec]
   Float_t         rccha[7];   //[nrec]
   Int_t           rcntr[7];   //[nrec]
   Int_t           rcncl[7];   //[nrec]
   Int_t           rcnrp[7];   //[nrec]
   Int_t           rcftr[7];   //[nrec]
   Int_t           rcvts[7];   //[nrec]
   Int_t           rcvte[7];   //[nrec]
   Int_t           rccom[7];   //[nrec]
   Int_t           npid;
   Int_t           pityp[1];   //[npid]
   Int_t           pipdg[1];   //[npid]
   Float_t         pillh[1];   //[npid]
   Int_t           pialg[1];   //[npid]
   Int_t           njet;
   Float_t         jmox[1];   //[njet]
   Float_t         jmoy[1];   //[njet]
   Float_t         jmoz[1];   //[njet]
   Float_t         jmas[1];   //[njet]
   Float_t         jene[1];   //[njet]
   Float_t         jcha[1];   //[njet]
   Float_t         jcov0[1];   //[njet]
   Float_t         jcov1[1];   //[njet]
   Float_t         jcov2[1];   //[njet]
   Float_t         jcov3[1];   //[njet]
   Float_t         jcov4[1];   //[njet]
   Float_t         jcov5[1];   //[njet]
   Float_t         jcov6[1];   //[njet]
   Float_t         jcov7[1];   //[njet]
   Float_t         jcov8[1];   //[njet]
   Float_t         jcov9[1];   //[njet]
   Float_t         jevis;
   Float_t         jPxvis;
   Float_t         jPyvis;
   Float_t         jPzvis;
   Float_t         jmom[1];   //[njet]
   Float_t         jcost[1];   //[njet]
   Float_t         jcosTheta;
   Float_t         jTheta;
   Float_t         jPtvis;
   Float_t         jmvis;
   Float_t         jmmax;
   Float_t         jEmiss;
   Float_t         jMmissq;
   Float_t         jMmiss;
   Int_t           ntrk;
   Int_t           trori[1];   //[ntrk]
   Int_t           trtyp[1];   //[ntrk]
   Float_t         trch2[1];   //[ntrk]
   Int_t           trndf[1];   //[ntrk]
   Float_t         tredx[1];   //[ntrk]
   Float_t         trede[1];   //[ntrk]
   Float_t         trrih[1];   //[ntrk]
   Int_t           trthn[1];   //[ntrk]
   Int_t           trthi[1][50];   //[ntrk]
   Int_t           trshn[1][12];   //[ntrk]
   Int_t           trthd[1][50];   //[ntrk]
   Int_t           trnts[1];   //[ntrk]
   Int_t           trfts[1];   //[ntrk]
   Int_t           trsip[1];   //[ntrk]
   Int_t           trsfh[1];   //[ntrk]
   Int_t           trslh[1];   //[ntrk]
   Int_t           trsca[1];   //[ntrk]
   Int_t           ntrst;
   Int_t           tsloc[4];   //[ntrst]
   Float_t         tsdze[4];   //[ntrst]
   Float_t         tsphi[4];   //[ntrst]
   Float_t         tsome[4];   //[ntrst]
   Float_t         tszze[4];   //[ntrst]
   Float_t         tstnl[4];   //[ntrst]
   Float_t         tscov[4][15];   //[ntrst]
   Float_t         tsrpx[4];   //[ntrst]
   Float_t         tsrpy[4];   //[ntrst]
   Float_t         tsrpz[4];   //[ntrst]
   Int_t           clnpar;
   vector<string>  *clpana;
   vector<string>  *clpaor;
   Int_t           clpaod[1];   //[clnpar]
   Int_t           clpain[1];   //[clnpar]
   Int_t           clpaiv[1][50];   //[clnpar]
   Int_t           clpafn[1];   //[clnpar]
   Float_t         clpafv[1][50];   //[clnpar]
   Int_t           clpasn[1];   //[clnpar]
   Int_t           nclu;
   Int_t           nsd;
   Int_t           clori[6];   //[nclu]
   Int_t           cltyp[6];   //[nclu]
   Float_t         clene[6];   //[nclu]
   Float_t         cleer[6];   //[nclu]
   Float_t         clpox[6];   //[nclu]
   Float_t         clpoy[6];   //[nclu]
   Float_t         clpoz[6];   //[nclu]
   Float_t         clper[6][6];   //[nclu]
   Float_t         clthe[6];   //[nclu]
   Float_t         clphi[6];   //[nclu]
   Float_t         clder[6][3];   //[nclu]
   Float_t         clsha[6][6];   //[nclu]
   Float_t         clsde[6][12];   //[nclu]
   Int_t           nsch;
   Int_t           scori[1];   //[nsch]
   Int_t           scci0[1];   //[nsch]
   Int_t           scci1[1];   //[nsch]
   Float_t         scpox[1];   //[nsch]
   Float_t         scpoy[1];   //[nsch]
   Float_t         scpoz[1];   //[nsch]
   Float_t         scene[1];   //[nsch]
   Int_t           scmcc[1];   //[nsch]
   Float_t         sctim[1][50];   //[nsch]
   Int_t           ncah;
   Int_t           caori[408];   //[ncah]
   Int_t           caci0[408];   //[ncah]
   Int_t           caci1[408];   //[ncah]
   Float_t         capox[408];   //[ncah]
   Float_t         capoy[408];   //[ncah]
   Float_t         capoz[408];   //[ncah]
   Float_t         caene[408];   //[ncah]
   Float_t         catim[408];   //[ncah]
   Int_t           nvt;
   Int_t           vtori[1];   //[nvt]
   Int_t           vtpri[1];   //[nvt]
   Int_t           vtrpl[1];   //[nvt]
   Char_t          vttyp[1];   //[nvt]
   Float_t         vtxxx[1];   //[nvt]
   Float_t         vtyyy[1];   //[nvt]
   Float_t         vtzzz[1];   //[nvt]
   Float_t         vtchi[1];   //[nvt]
   Float_t         vtprb[1];   //[nvt]
   Float_t         vtcov[1][6];   //[nvt]
   Float_t         vtpar[1][6];   //[nvt]
   Int_t           r2mnrel;
   Int_t           r2mf[1];   //[r2mnrel]
   Int_t           r2mt[1];   //[r2mnrel]
   Float_t         r2mw[1];   //[r2mnrel]

   // List of branches
   TBranch        *b_evevt;   //!
   TBranch        *b_evrun;   //!
   TBranch        *b_evwgt;   //!
   TBranch        *b_evtim;   //!
   TBranch        *b_evsig;   //!
   TBranch        *b_evene;   //!
   TBranch        *b_evpoe;   //!
   TBranch        *b_evpop;   //!
   TBranch        *b_evnch;   //!
   TBranch        *b_evpro;   //!
   TBranch        *b_nmcp;   //!
   TBranch        *b_mcori;   //!
   TBranch        *b_mcpdg;   //!
   TBranch        *b_mcgst;   //!
   TBranch        *b_mcsst;   //!
   TBranch        *b_mcvtx;   //!
   TBranch        *b_mcvty;   //!
   TBranch        *b_mcvtz;   //!
   TBranch        *b_mcepx;   //!
   TBranch        *b_mcepy;   //!
   TBranch        *b_mcepz;   //!
   TBranch        *b_mcmox;   //!
   TBranch        *b_mcmoy;   //!
   TBranch        *b_mcmoz;   //!
   TBranch        *b_mcmas;   //!
   TBranch        *b_mcene;   //!
   TBranch        *b_mccha;   //!
   TBranch        *b_mctim;   //!
   TBranch        *b_mcspx;   //!
   TBranch        *b_mcspy;   //!
   TBranch        *b_mcspz;   //!
   TBranch        *b_mccf0;   //!
   TBranch        *b_mccf1;   //!
   TBranch        *b_mcpa0;   //!
   TBranch        *b_mcpa1;   //!
   TBranch        *b_mcda0;   //!
   TBranch        *b_mcda1;   //!
   TBranch        *b_mcda2;   //!
   TBranch        *b_mcda3;   //!
   TBranch        *b_mcda4;   //!
   TBranch        *b_nrec;   //!
   TBranch        *b_rcori;   //!
   TBranch        *b_rccid;   //!
   TBranch        *b_rctyp;   //!
   TBranch        *b_rccov;   //!
   TBranch        *b_rcrpx;   //!
   TBranch        *b_rcrpy;   //!
   TBranch        *b_rcrpz;   //!
   TBranch        *b_rcgpi;   //!
   TBranch        *b_rcpiu;   //!
   TBranch        *b_rcnpi;   //!
   TBranch        *b_rcfpi;   //!
   TBranch        *b_rcmox;   //!
   TBranch        *b_rcmoy;   //!
   TBranch        *b_rcmoz;   //!
   TBranch        *b_rcmas;   //!
   TBranch        *b_rcene;   //!
   TBranch        *b_rccha;   //!
   TBranch        *b_rcntr;   //!
   TBranch        *b_rcncl;   //!
   TBranch        *b_rcnrp;   //!
   TBranch        *b_rcftr;   //!
   TBranch        *b_rcvts;   //!
   TBranch        *b_rcvte;   //!
   TBranch        *b_rccom;   //!
   TBranch        *b_npid;   //!
   TBranch        *b_pityp;   //!
   TBranch        *b_pipdg;   //!
   TBranch        *b_pillh;   //!
   TBranch        *b_pialg;   //!
   TBranch        *b_njet;   //!
   TBranch        *b_jmox;   //!
   TBranch        *b_jmoy;   //!
   TBranch        *b_jmoz;   //!
   TBranch        *b_jmas;   //!
   TBranch        *b_jene;   //!
   TBranch        *b_jcha;   //!
   TBranch        *b_jcov0;   //!
   TBranch        *b_jcov1;   //!
   TBranch        *b_jcov2;   //!
   TBranch        *b_jcov3;   //!
   TBranch        *b_jcov4;   //!
   TBranch        *b_jcov5;   //!
   TBranch        *b_jcov6;   //!
   TBranch        *b_jcov7;   //!
   TBranch        *b_jcov8;   //!
   TBranch        *b_jcov9;   //!
   TBranch        *b_jevis;   //!
   TBranch        *b_jPxvis;   //!
   TBranch        *b_jPyvis;   //!
   TBranch        *b_jPzvis;   //!
   TBranch        *b_jmom;   //!
   TBranch        *b_jcost;   //!
   TBranch        *b_jcosTheta;   //!
   TBranch        *b_jTheta;   //!
   TBranch        *b_jPtvis;   //!
   TBranch        *b_jmvis;   //!
   TBranch        *b_jmmax;   //!
   TBranch        *b_jEmiss;   //!
   TBranch        *b_jMmissq;   //!
   TBranch        *b_jMmiss;   //!
   TBranch        *b_ntrk;   //!
   TBranch        *b_trori;   //!
   TBranch        *b_trtyp;   //!
   TBranch        *b_trch2;   //!
   TBranch        *b_trndf;   //!
   TBranch        *b_tredx;   //!
   TBranch        *b_trede;   //!
   TBranch        *b_trrih;   //!
   TBranch        *b_trthn;   //!
   TBranch        *b_trthi;   //!
   TBranch        *b_trshn;   //!
   TBranch        *b_trthd;   //!
   TBranch        *b_trnts;   //!
   TBranch        *b_trfts;   //!
   TBranch        *b_trsip;   //!
   TBranch        *b_trsfh;   //!
   TBranch        *b_trslh;   //!
   TBranch        *b_trsca;   //!
   TBranch        *b_ntrst;   //!
   TBranch        *b_tsloc;   //!
   TBranch        *b_tsdze;   //!
   TBranch        *b_tsphi;   //!
   TBranch        *b_tsome;   //!
   TBranch        *b_tszze;   //!
   TBranch        *b_tstnl;   //!
   TBranch        *b_tscov;   //!
   TBranch        *b_tsrpx;   //!
   TBranch        *b_tsrpy;   //!
   TBranch        *b_tsrpz;   //!
   TBranch        *b_clnpar;   //!
   TBranch        *b_clpana;   //!
   TBranch        *b_clpaor;   //!
   TBranch        *b_clpaod;   //!
   TBranch        *b_clpain;   //!
   TBranch        *b_clpaiv;   //!
   TBranch        *b_clpafn;   //!
   TBranch        *b_clpafv;   //!
   TBranch        *b_clpasn;   //!
   TBranch        *b_nclu;   //!
   TBranch        *b_nsd;   //!
   TBranch        *b_clori;   //!
   TBranch        *b_cltyp;   //!
   TBranch        *b_clene;   //!
   TBranch        *b_cleer;   //!
   TBranch        *b_clpox;   //!
   TBranch        *b_clpoy;   //!
   TBranch        *b_clpoz;   //!
   TBranch        *b_clper;   //!
   TBranch        *b_clthe;   //!
   TBranch        *b_clphi;   //!
   TBranch        *b_clder;   //!
   TBranch        *b_clsha;   //!
   TBranch        *b_clsde;   //!
   TBranch        *b_nsch;   //!
   TBranch        *b_scori;   //!
   TBranch        *b_scci0;   //!
   TBranch        *b_scci1;   //!
   TBranch        *b_scpox;   //!
   TBranch        *b_scpoy;   //!
   TBranch        *b_scpoz;   //!
   TBranch        *b_scene;   //!
   TBranch        *b_scmcc;   //!
   TBranch        *b_sctim;   //!
   TBranch        *b_ncah;   //!
   TBranch        *b_caori;   //!
   TBranch        *b_caci0;   //!
   TBranch        *b_caci1;   //!
   TBranch        *b_capox;   //!
   TBranch        *b_capoy;   //!
   TBranch        *b_capoz;   //!
   TBranch        *b_caene;   //!
   TBranch        *b_catim;   //!
   TBranch        *b_nvt;   //!
   TBranch        *b_vtori;   //!
   TBranch        *b_vtpri;   //!
   TBranch        *b_vtrpl;   //!
   TBranch        *b_vttyp;   //!
   TBranch        *b_vtxxx;   //!
   TBranch        *b_vtyyy;   //!
   TBranch        *b_vtzzz;   //!
   TBranch        *b_vtchi;   //!
   TBranch        *b_vtprb;   //!
   TBranch        *b_vtcov;   //!
   TBranch        *b_vtpar;   //!
   TBranch        *b_r2mnrel;   //!
   TBranch        *b_r2mf;   //!
   TBranch        *b_r2mt;   //!
   TBranch        *b_r2mw;   //!

   PiGunAnaWithClusters(TTree *tree=0);
   virtual ~PiGunAnaWithClusters();
   virtual Int_t    Cut(Long64_t entry);
   virtual Int_t    GetEntry(Long64_t entry);
   virtual Long64_t LoadTree(Long64_t entry);
   virtual void     Init(TTree *tree);
   virtual void     Loop();
   virtual Bool_t   Notify();
   virtual void     Show(Long64_t entry = -1);
};

#endif

#ifdef PiGunAnaWithClusters_cxx
PiGunAnaWithClusters::PiGunAnaWithClusters(TTree *tree) : fChain(0) 
{
// if parameter tree is not specified (or zero), connect the file
// used to generate this class and read the Tree.
   if (tree == 0) {
      //TFile *f = (TFile*)gROOT->GetListOfFiles()->FindObject("lctuple_PiGun.root");
      TFile *f = (TFile*)gROOT->GetListOfFiles()->FindObject("lctuple_PiGun.root");
      if (!f || !f->IsOpen()) {
         f = new TFile("lctuple_PiGun.root");
      }
      f->GetObject("MyLCTuple",tree);

   }
   Init(tree);
}



PiGunAnaWithClusters::~PiGunAnaWithClusters()
{
   if (!fChain) return;
   delete fChain->GetCurrentFile();
}

Int_t PiGunAnaWithClusters::GetEntry(Long64_t entry)
{
// Read contents of entry.
   if (!fChain) return 0;
   return fChain->GetEntry(entry);
}
Long64_t PiGunAnaWithClusters::LoadTree(Long64_t entry)
{
// Set the environment to read one entry
   if (!fChain) return -5;
   Long64_t centry = fChain->LoadTree(entry);
   if (centry < 0) return centry;
   if (fChain->GetTreeNumber() != fCurrent) {
      fCurrent = fChain->GetTreeNumber();
      Notify();
   }
   return centry;
}

void PiGunAnaWithClusters::Init(TTree *tree)
{
   // The Init() function is called when the selector needs to initialize
   // a new tree or chain. Typically here the branch addresses and branch
   // pointers of the tree will be set.
   // It is normally not necessary to make changes to the generated
   // code, but the routine can be extended by the user if needed.
   // Init() will be called many times when running on PROOF
   // (once per file to be processed).

   // Set object pointer
   clpana = 0;
   clpaor = 0;
   // Set branch addresses and branch pointers
   if (!tree) return;
   fChain = tree;
   fCurrent = -1;
   fChain->SetMakeClass(1);

   fChain->SetBranchAddress("evevt", &evevt, &b_evevt);
   fChain->SetBranchAddress("evrun", &evrun, &b_evrun);
   fChain->SetBranchAddress("evwgt", &evwgt, &b_evwgt);
   fChain->SetBranchAddress("evtim", &evtim, &b_evtim);
   fChain->SetBranchAddress("evsig", &evsig, &b_evsig);
   fChain->SetBranchAddress("evene", &evene, &b_evene);
   fChain->SetBranchAddress("evpoe", &evpoe, &b_evpoe);
   fChain->SetBranchAddress("evpop", &evpop, &b_evpop);
   fChain->SetBranchAddress("evnch", &evnch, &b_evnch);
   fChain->SetBranchAddress("evpro", &evpro, &b_evpro);
   fChain->SetBranchAddress("nmcp", &nmcp, &b_nmcp);
   fChain->SetBranchAddress("mcori", mcori, &b_mcori);
   fChain->SetBranchAddress("mcpdg", mcpdg, &b_mcpdg);
   fChain->SetBranchAddress("mcgst", mcgst, &b_mcgst);
   fChain->SetBranchAddress("mcsst", mcsst, &b_mcsst);
   fChain->SetBranchAddress("mcvtx", mcvtx, &b_mcvtx);
   fChain->SetBranchAddress("mcvty", mcvty, &b_mcvty);
   fChain->SetBranchAddress("mcvtz", mcvtz, &b_mcvtz);
   fChain->SetBranchAddress("mcepx", mcepx, &b_mcepx);
   fChain->SetBranchAddress("mcepy", mcepy, &b_mcepy);
   fChain->SetBranchAddress("mcepz", mcepz, &b_mcepz);
   fChain->SetBranchAddress("mcmox", mcmox, &b_mcmox);
   fChain->SetBranchAddress("mcmoy", mcmoy, &b_mcmoy);
   fChain->SetBranchAddress("mcmoz", mcmoz, &b_mcmoz);
   fChain->SetBranchAddress("mcmas", mcmas, &b_mcmas);
   fChain->SetBranchAddress("mcene", mcene, &b_mcene);
   fChain->SetBranchAddress("mccha", mccha, &b_mccha);
   fChain->SetBranchAddress("mctim", mctim, &b_mctim);
   fChain->SetBranchAddress("mcspx", mcspx, &b_mcspx);
   fChain->SetBranchAddress("mcspy", mcspy, &b_mcspy);
   fChain->SetBranchAddress("mcspz", mcspz, &b_mcspz);
   fChain->SetBranchAddress("mccf0", mccf0, &b_mccf0);
   fChain->SetBranchAddress("mccf1", mccf1, &b_mccf1);
   fChain->SetBranchAddress("mcpa0", mcpa0, &b_mcpa0);
   fChain->SetBranchAddress("mcpa1", mcpa1, &b_mcpa1);
   fChain->SetBranchAddress("mcda0", mcda0, &b_mcda0);
   fChain->SetBranchAddress("mcda1", mcda1, &b_mcda1);
   fChain->SetBranchAddress("mcda2", mcda2, &b_mcda2);
   fChain->SetBranchAddress("mcda3", mcda3, &b_mcda3);
   fChain->SetBranchAddress("mcda4", mcda4, &b_mcda4);
   fChain->SetBranchAddress("nrec", &nrec, &b_nrec);
   fChain->SetBranchAddress("rcori", rcori, &b_rcori);
   fChain->SetBranchAddress("rccid", rccid, &b_rccid);
   fChain->SetBranchAddress("rctyp", rctyp, &b_rctyp);
   fChain->SetBranchAddress("rccov", rccov, &b_rccov);
   fChain->SetBranchAddress("rcrpx", rcrpx, &b_rcrpx);
   fChain->SetBranchAddress("rcrpy", rcrpy, &b_rcrpy);
   fChain->SetBranchAddress("rcrpz", rcrpz, &b_rcrpz);
   fChain->SetBranchAddress("rcgpi", rcgpi, &b_rcgpi);
   fChain->SetBranchAddress("rcpiu", rcpiu, &b_rcpiu);
   fChain->SetBranchAddress("rcnpi", rcnpi, &b_rcnpi);
   fChain->SetBranchAddress("rcfpi", rcfpi, &b_rcfpi);
   fChain->SetBranchAddress("rcmox", rcmox, &b_rcmox);
   fChain->SetBranchAddress("rcmoy", rcmoy, &b_rcmoy);
   fChain->SetBranchAddress("rcmoz", rcmoz, &b_rcmoz);
   fChain->SetBranchAddress("rcmas", rcmas, &b_rcmas);
   fChain->SetBranchAddress("rcene", rcene, &b_rcene);
   fChain->SetBranchAddress("rccha", rccha, &b_rccha);
   fChain->SetBranchAddress("rcntr", rcntr, &b_rcntr);
   fChain->SetBranchAddress("rcncl", rcncl, &b_rcncl);
   fChain->SetBranchAddress("rcnrp", rcnrp, &b_rcnrp);
   fChain->SetBranchAddress("rcftr", rcftr, &b_rcftr);
   fChain->SetBranchAddress("rcvts", rcvts, &b_rcvts);
   fChain->SetBranchAddress("rcvte", rcvte, &b_rcvte);
   fChain->SetBranchAddress("rccom", rccom, &b_rccom);
   fChain->SetBranchAddress("npid", &npid, &b_npid);
   fChain->SetBranchAddress("pityp", &pityp, &b_pityp);
   fChain->SetBranchAddress("pipdg", &pipdg, &b_pipdg);
   fChain->SetBranchAddress("pillh", &pillh, &b_pillh);
   fChain->SetBranchAddress("pialg", &pialg, &b_pialg);
   fChain->SetBranchAddress("njet", &njet, &b_njet);
   fChain->SetBranchAddress("jmox", &jmox, &b_jmox);
   fChain->SetBranchAddress("jmoy", &jmoy, &b_jmoy);
   fChain->SetBranchAddress("jmoz", &jmoz, &b_jmoz);
   fChain->SetBranchAddress("jmas", &jmas, &b_jmas);
   fChain->SetBranchAddress("jene", &jene, &b_jene);
   fChain->SetBranchAddress("jcha", &jcha, &b_jcha);
   fChain->SetBranchAddress("jcov0", &jcov0, &b_jcov0);
   fChain->SetBranchAddress("jcov1", &jcov1, &b_jcov1);
   fChain->SetBranchAddress("jcov2", &jcov2, &b_jcov2);
   fChain->SetBranchAddress("jcov3", &jcov3, &b_jcov3);
   fChain->SetBranchAddress("jcov4", &jcov4, &b_jcov4);
   fChain->SetBranchAddress("jcov5", &jcov5, &b_jcov5);
   fChain->SetBranchAddress("jcov6", &jcov6, &b_jcov6);
   fChain->SetBranchAddress("jcov7", &jcov7, &b_jcov7);
   fChain->SetBranchAddress("jcov8", &jcov8, &b_jcov8);
   fChain->SetBranchAddress("jcov9", &jcov9, &b_jcov9);
   fChain->SetBranchAddress("jevis", &jevis, &b_jevis);
   fChain->SetBranchAddress("jPxvis", &jPxvis, &b_jPxvis);
   fChain->SetBranchAddress("jPyvis", &jPyvis, &b_jPyvis);
   fChain->SetBranchAddress("jPzvis", &jPzvis, &b_jPzvis);
   fChain->SetBranchAddress("jmom", &jmom, &b_jmom);
   fChain->SetBranchAddress("jcost", &jcost, &b_jcost);
   fChain->SetBranchAddress("jcosTheta", &jcosTheta, &b_jcosTheta);
   fChain->SetBranchAddress("jTheta", &jTheta, &b_jTheta);
   fChain->SetBranchAddress("jPtvis", &jPtvis, &b_jPtvis);
   fChain->SetBranchAddress("jmvis", &jmvis, &b_jmvis);
   fChain->SetBranchAddress("jmmax", &jmmax, &b_jmmax);
   fChain->SetBranchAddress("jEmiss", &jEmiss, &b_jEmiss);
   fChain->SetBranchAddress("jMmissq", &jMmissq, &b_jMmissq);
   fChain->SetBranchAddress("jMmiss", &jMmiss, &b_jMmiss);
   fChain->SetBranchAddress("ntrk", &ntrk, &b_ntrk);
   fChain->SetBranchAddress("trori", trori, &b_trori);
   fChain->SetBranchAddress("trtyp", trtyp, &b_trtyp);
   fChain->SetBranchAddress("trch2", trch2, &b_trch2);
   fChain->SetBranchAddress("trndf", trndf, &b_trndf);
   fChain->SetBranchAddress("tredx", tredx, &b_tredx);
   fChain->SetBranchAddress("trede", trede, &b_trede);
   fChain->SetBranchAddress("trrih", trrih, &b_trrih);
   fChain->SetBranchAddress("trthn", trthn, &b_trthn);
   fChain->SetBranchAddress("trthi", trthi, &b_trthi);
   fChain->SetBranchAddress("trshn", trshn, &b_trshn);
   fChain->SetBranchAddress("trthd", trthd, &b_trthd);
   fChain->SetBranchAddress("trnts", trnts, &b_trnts);
   fChain->SetBranchAddress("trfts", trfts, &b_trfts);
   fChain->SetBranchAddress("trsip", trsip, &b_trsip);
   fChain->SetBranchAddress("trsfh", trsfh, &b_trsfh);
   fChain->SetBranchAddress("trslh", trslh, &b_trslh);
   fChain->SetBranchAddress("trsca", trsca, &b_trsca);
   fChain->SetBranchAddress("ntrst", &ntrst, &b_ntrst);
   fChain->SetBranchAddress("tsloc", tsloc, &b_tsloc);
   fChain->SetBranchAddress("tsdze", tsdze, &b_tsdze);
   fChain->SetBranchAddress("tsphi", tsphi, &b_tsphi);
   fChain->SetBranchAddress("tsome", tsome, &b_tsome);
   fChain->SetBranchAddress("tszze", tszze, &b_tszze);
   fChain->SetBranchAddress("tstnl", tstnl, &b_tstnl);
   fChain->SetBranchAddress("tscov", tscov, &b_tscov);
   fChain->SetBranchAddress("tsrpx", tsrpx, &b_tsrpx);
   fChain->SetBranchAddress("tsrpy", tsrpy, &b_tsrpy);
   fChain->SetBranchAddress("tsrpz", tsrpz, &b_tsrpz);
   fChain->SetBranchAddress("clnpar", &clnpar, &b_clnpar);
   fChain->SetBranchAddress("clpana", &clpana, &b_clpana);
   fChain->SetBranchAddress("clpaor", &clpaor, &b_clpaor);
   fChain->SetBranchAddress("clpaod", clpaod, &b_clpaod);
   fChain->SetBranchAddress("clpain", clpain, &b_clpain);
   fChain->SetBranchAddress("clpaiv", clpaiv, &b_clpaiv);
   fChain->SetBranchAddress("clpafn", clpafn, &b_clpafn);
   fChain->SetBranchAddress("clpafv", clpafv, &b_clpafv);
   fChain->SetBranchAddress("clpasn", clpasn, &b_clpasn);
   fChain->SetBranchAddress("nclu", &nclu, &b_nclu);
   fChain->SetBranchAddress("nsd", &nsd, &b_nsd);
   fChain->SetBranchAddress("clori", clori, &b_clori);
   fChain->SetBranchAddress("cltyp", cltyp, &b_cltyp);
   fChain->SetBranchAddress("clene", clene, &b_clene);
   fChain->SetBranchAddress("cleer", cleer, &b_cleer);
   fChain->SetBranchAddress("clpox", clpox, &b_clpox);
   fChain->SetBranchAddress("clpoy", clpoy, &b_clpoy);
   fChain->SetBranchAddress("clpoz", clpoz, &b_clpoz);
   fChain->SetBranchAddress("clper", clper, &b_clper);
   fChain->SetBranchAddress("clthe", clthe, &b_clthe);
   fChain->SetBranchAddress("clphi", clphi, &b_clphi);
   fChain->SetBranchAddress("clder", clder, &b_clder);
   fChain->SetBranchAddress("clsha", clsha, &b_clsha);
   fChain->SetBranchAddress("clsde", clsde, &b_clsde);
   fChain->SetBranchAddress("nsch", &nsch, &b_nsch);
   fChain->SetBranchAddress("scori", &scori, &b_scori);
   fChain->SetBranchAddress("scci0", &scci0, &b_scci0);
   fChain->SetBranchAddress("scci1", &scci1, &b_scci1);
   fChain->SetBranchAddress("scpox", &scpox, &b_scpox);
   fChain->SetBranchAddress("scpoy", &scpoy, &b_scpoy);
   fChain->SetBranchAddress("scpoz", &scpoz, &b_scpoz);
   fChain->SetBranchAddress("scene", &scene, &b_scene);
   fChain->SetBranchAddress("scmcc", &scmcc, &b_scmcc);
   fChain->SetBranchAddress("sctim", &sctim, &b_sctim);
   fChain->SetBranchAddress("ncah", &ncah, &b_ncah);
   fChain->SetBranchAddress("caori", caori, &b_caori);
   fChain->SetBranchAddress("caci0", caci0, &b_caci0);
   fChain->SetBranchAddress("caci1", caci1, &b_caci1);
   fChain->SetBranchAddress("capox", capox, &b_capox);
   fChain->SetBranchAddress("capoy", capoy, &b_capoy);
   fChain->SetBranchAddress("capoz", capoz, &b_capoz);
   fChain->SetBranchAddress("caene", caene, &b_caene);
   fChain->SetBranchAddress("catim", catim, &b_catim);
   fChain->SetBranchAddress("nvt", &nvt, &b_nvt);
   fChain->SetBranchAddress("vtori", &vtori, &b_vtori);
   fChain->SetBranchAddress("vtpri", &vtpri, &b_vtpri);
   fChain->SetBranchAddress("vtrpl", &vtrpl, &b_vtrpl);
   fChain->SetBranchAddress("vttyp", &vttyp, &b_vttyp);
   fChain->SetBranchAddress("vtxxx", &vtxxx, &b_vtxxx);
   fChain->SetBranchAddress("vtyyy", &vtyyy, &b_vtyyy);
   fChain->SetBranchAddress("vtzzz", &vtzzz, &b_vtzzz);
   fChain->SetBranchAddress("vtchi", &vtchi, &b_vtchi);
   fChain->SetBranchAddress("vtprb", &vtprb, &b_vtprb);
   fChain->SetBranchAddress("vtcov", &vtcov, &b_vtcov);
   fChain->SetBranchAddress("vtpar", &vtpar, &b_vtpar);
   fChain->SetBranchAddress("r2mnrel", &r2mnrel, &b_r2mnrel);
   fChain->SetBranchAddress("r2mf", &r2mf, &b_r2mf);
   fChain->SetBranchAddress("r2mt", &r2mt, &b_r2mt);
   fChain->SetBranchAddress("r2mw", &r2mw, &b_r2mw);
   Notify();
}

Bool_t PiGunAnaWithClusters::Notify()
{
   // The Notify() function is called when a new file is opened. This
   // can be either for a new TTree in a TChain or when when a new TTree
   // is started when using PROOF. It is normally not necessary to make changes
   // to the generated code, but the routine can be extended by the
   // user if needed. The return value is currently not used.

   return kTRUE;
}

void PiGunAnaWithClusters::Show(Long64_t entry)
{
// Print contents of entry.
// If entry is not specified, print current entry
   if (!fChain) return;
   fChain->Show(entry);
}
Int_t PiGunAnaWithClusters::Cut(Long64_t entry)
{
// This function may be called from Loop.
// returns  1 if entry is accepted.
// returns -1 otherwise.
   return 1;
}
#endif // #ifdef PiGunAnaWithClusters_cxx
