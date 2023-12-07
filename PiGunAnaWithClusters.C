#define PiGunAnaWithClusters_cxx
#include "PiGunAnaWithClusters.h"
#include <TH2.h>
#include <TStyle.h>
#include <TCanvas.h>

void PiGunAnaWithClusters::Loop()
{

    TH1F* h_mc_pdg;
    TH1F* h_mc_pdg_notStable;
    TH1F* h_reco_pdg;
    TH1F* h_jet_n;
    TH1F* h_dijet_m;
    
    TH1F*  hSimPion;
    TH1F*  hSimEle;
    TH1F*  hSimGamma;
    TH1F*  hSimProt;
    
    TH1F*  hCHitPosZ;
    TH1F*  hCHitPosR;
    TH1F*  hCHitPosX;
    
    h_mc_pdg = new TH1F("h_mc_pdg","Stable MC particles; PDG code", 4500, -2250., 2250.);
    h_mc_pdg_notStable = new TH1F("h_mc_pdg","Unstable MC particles; PDG code", 4500, -2250., 2250.);
    h_reco_pdg = new TH1F("h_reco_pdg","Reconstructed particles; PDG code", 4500, -2250., 2250.);
    h_jet_n = new TH1F("h_jet_n","Reconstructed jets; N_{jet}",10, 0., 10.);
    h_dijet_m = new TH1F("h_dijet_m","Dijet mass; m_{12} [GeV]",100, 110., 140.);
    
    hSimPion  = new TH1F("hSimPion","energy; [GeV]",50, 0, 50);
    TH1F *hSimPionPt  = new TH1F("hSimPionPt","p_{T}; [GeV]",100, 0, 100);
    TH1F *hSimPionTheta  = new TH1F("hSimTheta","Theta; deg",100, 0, 200);
    hSimEle  = new TH1F("hSimEle","energy; [GeV]",200, 0, 100);
    hSimGamma  = new TH1F("hSimGamma","energy; [GeV]",200, 0, 100);
    hSimProt  = new TH1F("hSimProt","energy; [GeV]",200, 0, 100);
    
    hCHitPosZ = new TH1F("hCHitPosZ","hCHitPosZ; [cm]",2000, -1000, 1000);
    hCHitPosR = new TH1F("hCHitPosR","hCHitPosR; [cm]",1500, 1500, 3500);
    hCHitPosX = new TH1F("hCHitPosX","hCHitPosX; [cm]",1600, -800, 800);
    
    TH2F *h_layout_calo = new TH2F("h_layout_calo","HCAL calorimeters;Z [mm];#rho [mm]",11200,-5600.,5600.,6500,0.,6500.);
    TH2F *h_occupancy_hcalB = new TH2F("h_occupancy_hcalB",";#theta [rad];#phi [rad]",100,0.66,2.47,100,-3.15,3.15);
    //TH2F *h_occupancy_hcalE = new TH2F("h10_occupancy_hcalE",";X [mm];Y [mm]",100,-3000.,3000.,100,-3000.,3000.);
    TH2F *h_depth_hcalB = new TH2F("h_depth_hcalB",";#theta [rad];#rho [mm]",50,0.6,2.55,60,1700.,3500.);
    //TH2F *h12_depth_hcalE = new TH2F("h12_depth_hcalE",";Z [mm];Y [mm]",60,2500.,4180.,50,-3100,3100.);
    
    //TH1F *h_time_ecalB   = new TH1F("h13_time_ecalB","Hit ToA (ECAL Barrel);T_{reco hit} - T_{0} [ns]",100,-1.,10.);
    TH1F *h_time_hcalB   = new TH1F("h_time_hcalB","Hit ToA (HCAL Barrel);T_{reco hit} - T_{0} [ns]",100,-1.,10.);
    
    //TH1F *h15_energy_ecalB = new TH1F("h15_energy_ecalB","Hit energy (ECAL Barrel);E_{reco hit} [GeV]",100.,0.,1.);
    TH1F *h_energy_hcalB = new TH1F("h_energy_hcalB","Hit energy (HCAL Barrel);E_{reco hit} [GeV]",100.,0.,1.);
    TH1F *h_NHit_Layer_hcalB = new TH1F("h_NHit_Layer_hcalB","Number of hit per layer (HCAL Barrel); Layer ID",100.,1,100);
    TH1F *h_NHit_Layer_hcalE = new TH1F("h_NHit_Layer_hcalE","Number of hit per layer (HCAL Endcap); Layer ID",100.,1,100);
    TH1F *hRecoMatched_Energy = new TH1F("hRecoMatched_Energy","Energy of reconstructed particle matched with the generated",100.,1,100);
    TH1F *hRecoNotMatched_Energy = new TH1F("hRecoNotMatched_Energy","Energy of reconstructed particle not matched with the generated",100.,1,5000);
    TH1F *hEnergyRes = new TH1F("hEnergyRes","E_mc - E_rec / E_rec",100,-2,2);
    if (fChain == 0) return;
    
    Long64_t nentries = fChain->GetEntriesFast();
    
    Long64_t nbytes = 0, nb = 0;
    for (Long64_t jentry=0; jentry<nentries;jentry++) {
        //for (Long64_t jentry=98; jentry<99;jentry++) {
        Long64_t ientry = LoadTree(jentry);
        if (ientry < 0) break;
        nb = fChain->GetEntry(jentry);   nbytes += nb;
        // if (Cut(ientry) < 0) continue;
        
        cout<<"*******************evt="<<jentry<<" number of MC part="<<nmcp<<endl;
        
        // --- loop over the Monte Carlo particles
        cout<<"n rec calo hit="<<ncah<<endl;
        cout<<"n pfa rec clu ="<<nclu<<endl;
        cout<<"n sim calo hit="<<nsch<<endl;
        
        for (int icl=0; icl<nclu; ++icl){
            cout<<"cluster energy="<<clene[icl]<<endl;
        }
        
        for (int imc=0; imc<nmcp; ++imc){
            
            // --- keep only the stable particles
            if ( mcgst[imc] == 1 ) h_mc_pdg->Fill(mcpdg[imc]);
            if ( mcgst[imc] != 1 ) h_mc_pdg_notStable->Fill(mcpdg[imc]);
            //cout<<imc<<" Sim ID: "<<mcpdg[imc]<<endl;
            TLorentzVector simpart;
            simpart.SetPxPyPzE(mcmox[imc],mcmoy[imc],mcmoz[imc], mcene[imc]);
            if (fabs((mcpdg[imc]))==11)  hSimEle->Fill(mcene[imc]);
            if (fabs((mcpdg[imc]))==22)  hSimGamma->Fill(mcene[imc]);
            if (fabs((mcpdg[imc]))==2212) hSimProt->Fill(mcene[imc]);
            
            if (fabs((mcpdg[imc]))==211 && mcgst[imc] == 1) {
                hSimPion->Fill(mcene[imc]);
                hSimPionPt->Fill(simpart.Pt());
                hSimPionTheta->Fill(simpart.Eta());
                //cout<< "pion pt="<<simpart.Pt()<<" pdgID="<<mcpdg[imc]<<endl;
                
            
                
                double dR =1000;
                TLorentzVector RecoPionAss;
                
                cout<<"isim ="<<imc<<" pdgid="<<mcpdg[imc]<<" sim pt="<<simpart.Pt()<<" sim ene="<<simpart.E()<<endl;
                for (int ireco=0; ireco<nrec; ++ireco){
                    TLorentzVector rcpart;
                    rcpart.SetPxPyPzE(rcmox[ireco],rcmoy[ireco],rcmoz[ireco], rcene[ireco]);
                    cout<<" ireco"<<ireco<< " dr_tmp="<<dR<<" pt="<<rcpart.Pt()<<" energia="<<rcpart.E()<<endl;
                    double this_dR = rcpart.DrEtaPhi(simpart);
                    cout<<" dR="<<this_dR<<endl;
                    if (this_dR < dR) {
                        dR = this_dR;
                        RecoPionAss.SetPxPyPzE(rcmox[ireco],rcmoy[ireco],rcmoz[ireco], rcene[ireco]);
                        
                    }
                } // ireco loop
                if(dR<0.01){
                    // cout<<" sim is reco! simPDG="<<mcpdg[imc]<<" reco pdg="<<rctyp[ireco]<<" DR="<<dR<<endl;
                    cout<<" sim is reco! simPDG="<<mcpdg[imc]<<" DR="<<dR<<" reco Pt="<<RecoPionAss.Pt()<<endl;
                    
                    hRecoMatched_Energy->Fill(RecoPionAss.E());
                    hEnergyRes->Fill((RecoPionAss.E()-mcene[imc])/mcene[imc]);
                }
                
                else {
                    hRecoNotMatched_Energy->Fill(RecoPionAss.E());
                    
                }
                
                
            }
            
        } // imc loop
        
        for (int ireco=0; ireco<nrec; ++ireco){
            h_reco_pdg->Fill(rctyp[ireco]);
            //cout<<ireco<<" Reco ID: "<<rctyp[ireco]<<endl;
        }
        
        for (int CHit=0; CHit<ncah; ++CHit){
            //cout<<" CHit pos x="<<capox[CHit]<<"  CHit pos y="<<capoy[CHit]<<" posz="<<capoz[CHit]<<endl;
            double R=TMath::Sqrt(capoy[CHit]*capoy[CHit] + capox[CHit]*capox[CHit]);
            hCHitPosZ->Fill(capoz[CHit]);
            hCHitPosR->Fill(R);
            hCHitPosX->Fill(capox[CHit]);
            //cout<<"   CHit pos R="<<R<<" posz="<<capoz[CHit]<<endl;
            //cout<<"   Hit cell ID 0 ="<<caci0[CHit]<<" cell ID 1="<<caci1[CHit]<<endl;
            const unsigned int system = (unsigned) ( caci0[CHit] & 0x1f );
            const int side = (int) ( (caci0[CHit] >> 5) & 0x3 );
            int layer= caci0[CHit]>>19 & 511;
            
            
            //cout<<" system="<<system<<" side="<<side<<" layer="<<layer<<endl;
            h_layout_calo->Fill(capoz[CHit],R);
            
            float phi   = TMath::ATan2(capoy[CHit], capox[CHit]);
            float theta = TMath::ATan2(R, capoz[CHit]);
            
            
            // --- HCAL barrel
            if ( system==10 ){
                
                h_occupancy_hcalB->Fill(theta,phi);
                h_depth_hcalB->Fill(theta,R);
                h_time_hcalB->Fill(catim[CHit]);
                h_energy_hcalB->Fill(caene[CHit]);
                h_NHit_Layer_hcalB->Fill(layer);
                
            }
            
            
            // --- HCAL endcap
            if ( system==11  && side==1 ){
                
                //h_occupancy_hcalE->Fill(capoy[CHit], capox[CHit]);
                // h_depth_hcalE->Fill(capoz[CHit],capoy[CHit]);
                h_NHit_Layer_hcalE->Fill(layer);
                
            }
            
        }
    }
    TCanvas *c1 = new TCanvas("c1","c1", 600, 800);
    c1->Divide(3,1);
    c1->cd(1);
    h_mc_pdg->Draw();
    c1->cd(2);
    h_mc_pdg_notStable->Draw();
    h_mc_pdg_notStable->SetLineColor(2);
    c1->cd(3);
    h_reco_pdg->Draw();
    
    
    TCanvas *c2 = new TCanvas("c2","c2", 600, 800);
    c2->Divide(3,3);
    c2->cd(1);
    hSimPion->Draw();
    hSimPion->SetMaximum(5000);
    hSimEle->Draw("same");
    hSimGamma->Draw("same");
    hSimProt->Draw("same");
    
    hSimPion->SetLineColor(1);
    hSimEle->SetLineColor(2);
    hSimGamma->SetLineColor(3);
    hSimProt->SetLineColor(4);
    
    c2->cd(2);
    hSimPionPt->Draw();
    c2->cd(3);
    hSimPionTheta->Draw();
    c2->cd(4);
    hRecoMatched_Energy->Draw();
    c2->cd(5);
    hEnergyRes->Draw();
    c2->cd(6);
    hRecoNotMatched_Energy->Draw();
    //  hSimPion->GetYaxis()->SetRangeUser(0., std::max(hSimPion->GetXmax(), hSimEle->GetXmax(), hSimGamma->GetXmax(), hSimProt->GetXmax()));
    
    
    TCanvas *c3 = new TCanvas("c3","c3", 600, 800);
    c3->Divide(3,1);
    c3->cd(1);
    hCHitPosZ->Draw();
    c3->cd(2);
    hCHitPosR->Draw();
    c3->cd(3);
    //hCHitPosX->Draw();
    
    TCanvas *c4 = new TCanvas("c3","c3", 1200, 1200);
    c4->Divide(3,3);
    c4->cd(1);
    h_layout_calo->Draw();
    c4->cd(2);
    h_occupancy_hcalB->Draw();
    c4->cd(3);
    h_depth_hcalB->Draw();
    c4->cd(4);
    h_time_hcalB->Draw();
    c4->cd(5);
    h_energy_hcalB->Draw();
    c4->cd(6);
    h_NHit_Layer_hcalB->Draw();
    c4->cd(7);
    h_NHit_Layer_hcalE->Draw();
    
    
    
    
}
