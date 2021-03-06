#define Test_cxx
#include "Test.h"
#include <TH2.h>
#include <TStyle.h>
#include <TCanvas.h>

void Test::Loop()
{
//   In a ROOT session, you can do:
//      root> .L Test.C
//      root> Test t
//      root> t.GetEntry(12); // Fill t data members with entry number 12
//      root> t.Show();       // Show values of entry 12
//      root> t.Show(16);     // Read and show values of entry 16
//      root> t.Loop();       // Loop on all entries
//

//     This is the loop skeleton where:
//    jentry is the global entry number in the chain
//    ientry is the entry number in the current Tree
//  Note that the argument to GetEntry must be:
//    jentry for TChain::GetEntry
//    ientry for TTree::GetEntry and TBranch::GetEntry
//
//       To read only selected branches, Insert statements like:
// METHOD1:
//    fChain->SetBranchStatus("*",0);  // disable all branches
//    fChain->SetBranchStatus("branchname",1);  // activate branchname
// METHOD2: replace line
//    fChain->GetEntry(jentry);       //read all branches
//by  b_branchname->GetEntry(ientry); //read only this branch
   if (fChain == 0) return;
   Long64_t nbytes = 0, nb = 0;
//   vector<double> vector_max=vector<double>();
//   vector<double> vector_min=vector<double>();
   vector<double> vector_max,vector_min;
   vector<double> vector_max_neutralino,vector_min_neutralino;
   double dRmax,dRmin,dRtmp; 
   Long64_t nentries = fChain->GetEntriesFast();

   fChain->SetBranchStatus("*",0);
   fChain->SetBranchStatus("truth_ParticleFromGluino_eta",1);
   fChain->SetBranchStatus("truth_ParticleFromGluino_phi",1);
   
   fChain->SetBranchStatus("truth_QuarkFromNeutralino_eta",1);
   fChain->SetBranchStatus("truth_QuarkFromNeutralino_phi",1);
   
   for (Long64_t jentry=0; jentry<nentries;jentry++) {
      Long64_t ientry = LoadTree(jentry);
      if (ientry < 0) break;
      nb = fChain->GetEntry(jentry);   nbytes += nb;

     //0-2
      dRmax=sqrt( pow((*truth_ParticleFromGluino_eta)[0]- (*truth_ParticleFromGluino_eta)[1],2) + pow((*truth_ParticleFromGluino_phi)[0]- (*truth_ParticleFromGluino_phi)[1],2) );
      dRmin=sqrt( pow((*truth_ParticleFromGluino_eta)[0]- (*truth_ParticleFromGluino_eta)[1],2) + pow((*truth_ParticleFromGluino_phi)[0]- (*truth_ParticleFromGluino_phi)[1],2) );
      
     
      dRtmp= sqrt( pow((*truth_ParticleFromGluino_eta)[1]- (*truth_ParticleFromGluino_eta)[2],2) + pow((*truth_ParticleFromGluino_phi)[1]- (*truth_ParticleFromGluino_phi)[2],2) );
      
      if(dRtmp >dRmax) dRmax=dRtmp;
      if(dRtmp <dRmin) dRmin=dRtmp;
      
      dRtmp= sqrt( pow((*truth_ParticleFromGluino_eta)[0]- (*truth_ParticleFromGluino_eta)[2],2) + pow((*truth_ParticleFromGluino_phi)[0]- (*truth_ParticleFromGluino_phi)[2],2) );
      
      if(dRtmp >dRmax) dRmax=dRtmp;
      if(dRtmp <dRmin) dRmin=dRtmp;
      
      vector_max.push_back(dRmax);
      vector_min.push_back(dRmin);
       //3-5
      dRmax=sqrt( pow((*truth_ParticleFromGluino_eta)[3]- (*truth_ParticleFromGluino_eta)[4],2) + pow((*truth_ParticleFromGluino_phi)[3]- (*truth_ParticleFromGluino_phi)[4],2) );
      dRmin=sqrt( pow((*truth_ParticleFromGluino_eta)[3]- (*truth_ParticleFromGluino_eta)[4],2) + pow((*truth_ParticleFromGluino_phi)[3]- (*truth_ParticleFromGluino_phi)[4],2) );

      dRtmp= sqrt( pow((*truth_ParticleFromGluino_eta)[4]- (*truth_ParticleFromGluino_eta)[5],2) + pow((*truth_ParticleFromGluino_phi)[4]- (*truth_ParticleFromGluino_phi)[5],2) );
      
      if(dRtmp >dRmax) dRmax=dRtmp;
      if(dRtmp <dRmin) dRmin=dRtmp;
      
      dRtmp= sqrt( pow((*truth_ParticleFromGluino_eta)[3]- (*truth_ParticleFromGluino_eta)[5],2) + pow((*truth_ParticleFromGluino_phi)[3]- (*truth_ParticleFromGluino_phi)[5],2) );
      
      if(dRtmp >dRmax) dRmax=dRtmp;
      if(dRtmp <dRmin) dRmin=dRtmp;
      
      vector_max.push_back(dRmax);
      vector_min.push_back(dRmin);


/*********************************************************************************************************/
      dRmax=sqrt( pow((*truth_QuarkFromNeutralino_eta)[0]- (*truth_QuarkFromNeutralino_eta)[1],2) + pow((*truth_QuarkFromNeutralino_phi)[0]- (*truth_QuarkFromNeutralino_phi)[1],2) );
      dRmin=sqrt( pow((*truth_QuarkFromNeutralino_eta)[0]- (*truth_QuarkFromNeutralino_eta)[1],2) + pow((*truth_QuarkFromNeutralino_phi)[0]- (*truth_QuarkFromNeutralino_phi)[1],2) );
      
     
      dRtmp= sqrt( pow((*truth_QuarkFromNeutralino_eta)[1]- (*truth_QuarkFromNeutralino_eta)[2],2) + pow((*truth_QuarkFromNeutralino_phi)[1]- (*truth_QuarkFromNeutralino_phi)[2],2) );
      
      if(dRtmp >dRmax) dRmax=dRtmp;
      if(dRtmp <dRmin) dRmin=dRtmp;
      
      dRtmp= sqrt( pow((*truth_QuarkFromNeutralino_eta)[0]- (*truth_QuarkFromNeutralino_eta)[2],2) + pow((*truth_QuarkFromNeutralino_phi)[0]- (*truth_QuarkFromNeutralino_phi)[2],2) );
      
      if(dRtmp >dRmax) dRmax=dRtmp;
      if(dRtmp <dRmin) dRmin=dRtmp;
      
      vector_max_neutralino.push_back(dRmax);
      vector_min_neutralino.push_back(dRmin);
       //3-5
      dRmax=sqrt( pow((*truth_QuarkFromNeutralino_eta)[3]- (*truth_QuarkFromNeutralino_eta)[4],2) + pow((*truth_QuarkFromNeutralino_phi)[3]- (*truth_QuarkFromNeutralino_phi)[4],2) );
      dRmin=sqrt( pow((*truth_QuarkFromNeutralino_eta)[3]- (*truth_QuarkFromNeutralino_eta)[4],2) + pow((*truth_QuarkFromNeutralino_phi)[3]- (*truth_QuarkFromNeutralino_phi)[4],2) );

      dRtmp= sqrt( pow((*truth_QuarkFromNeutralino_eta)[4]- (*truth_QuarkFromNeutralino_eta)[5],2) + pow((*truth_QuarkFromNeutralino_phi)[4]- (*truth_QuarkFromNeutralino_phi)[5],2) );
      
      if(dRtmp >dRmax) dRmax=dRtmp;
      if(dRtmp <dRmin) dRmin=dRtmp;
      
      dRtmp= sqrt( pow((*truth_QuarkFromNeutralino_eta)[3]- (*truth_QuarkFromNeutralino_eta)[5],2) + pow((*truth_QuarkFromNeutralino_phi)[3]- (*truth_QuarkFromNeutralino_phi)[5],2) );
      
      if(dRtmp >dRmax) dRmax=dRtmp;
      if(dRtmp <dRmin) dRmin=dRtmp;
      
      vector_max_neutralino.push_back(dRmax);
      vector_min_neutralino.push_back(dRmin);

   }
   //for(int i=0;i<vector_max.size();i++)
   //   cout<< i<< "-th dRmin="<<vector_min[i] << " dRmax=" << vector_max[i]<<endl; 

   auto cnt_r_h=new TH1F("Max G",
                "Max;dRmax;",
                60, // Number of Bins
                0, // Lower X Boundary
                6); // Upper X Boundary
   cnt_r_h->SetMarkerStyle(8);

   for (int i=0;i<vector_max.size();i++)
        cnt_r_h->Fill(vector_max[i] );  //POPUNIIII
   auto c_norm= new TCanvas();
   c_norm->Divide(1,2);
   c_norm->cd(1);  
   cnt_r_h-> DrawNormalized();

   cnt_r_h=new TH1F("Min G",
                "Min;dRmin;",
                30, // Number of Bins
                0, // Lower X Boundary
                3); // Upper X Boundary
   cnt_r_h->SetMarkerStyle(8);
   for(int i=0;i< vector_min.size();i++){
        cnt_r_h->Fill(vector_min[i]); //POPUNIIIII
   }
  
   c_norm->cd(2);  
   cnt_r_h->DrawNormalized();
   c_norm->Print("QQN.pdf");



//   for(int i=0;i<vector_max.size();i++)
//      cout<< i<< "-th dRmin="<<vector_min_neutralino[i] << " dRmax=" << vector_max_neutralino[i]<<endl; 

   auto cnt_r_h_N=new TH1F("Max N",
                "Max;dRmax;",
                60, // Number of Bins
                0, // Lower X Boundary
                6); // Upper X Boundary
   cnt_r_h_N->SetMarkerStyle(8);

   for (int i=0;i<vector_max.size();i++)
        cnt_r_h_N->Fill(vector_max_neutralino[i] );  //POPUNIIII
   auto c_norm_N= new TCanvas();
   c_norm_N->Divide(1,2);
   c_norm_N->cd(1);  
   cnt_r_h_N-> DrawNormalized();

   cnt_r_h_N=new TH1F("Min N",
                "Min;dRmin;",
                30, // Number of Bins
                0, // Lower X Boundary
                3); // Upper X Boundary

   for(int i=0;i< vector_min.size();i++){
        cnt_r_h_N->Fill(vector_min_neutralino[i]); //POPUNIIIII
   }
  
   c_norm_N->cd(2);  
   cnt_r_h_N->DrawNormalized();
   c_norm_N->Print("QQQ.pdf");










}
