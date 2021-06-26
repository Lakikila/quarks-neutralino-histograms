//////////////////////////////////////////////////////////
// This class has been automatically generated on
// Tue Jun 22 17:44:14 2021 by ROOT version 6.22/08
// from TTree trees_SRRPV_/trees_SRRPV_
// found on file: 403615.root
//////////////////////////////////////////////////////////

#ifndef Test_h
#define Test_h

#include <TROOT.h>
#include <TChain.h>
#include <TFile.h>

// Header file for the classes stored in the TTree if any.
#include "vector"
#include "vector"
#include "vector"
#include "vector"
#include "vector"

class Test {
public :
   TTree          *fChain;   //!pointer to the analyzed TTree or TChain
   Int_t           fCurrent; //!current Tree number in a TChain

// Fixed size dimensions of array or collections stored in the TTree if any.

   // Declaration of leaf types
   Int_t           NPV;
   vector<int>     *TriggerDecisions;
   Float_t         actualInteractionsPerCrossing;
   Float_t         averageInteractionsPerCrossing;
   UInt_t          bcid;
   vector<int>     *el_baseline;
   vector<float>   *el_charge;
   vector<float>   *el_d0;
   vector<double>  *el_e;
   vector<double>  *el_eta;
   vector<int>     *el_passOR;
   vector<double>  *el_phi;
   vector<double>  *el_pt;
   vector<int>     *el_signal;
   ULong64_t       eventNumber;
   vector<double>  *fatjet_e;
   vector<double>  *fatjet_eta;
   vector<double>  *fatjet_phi;
   vector<double>  *fatjet_pt;
   vector<vector<int> > *jet_NumTrkPt1000;
   vector<vector<int> > *jet_NumTrkPt500;
   vector<int>     *jet_PartonTruthLabelID;
   vector<vector<float> > *jet_SumPtTrkPt1000;
   vector<vector<float> > *jet_SumPtTrkPt500;
   vector<vector<float> > *jet_TrackWidthPt1000;
   vector<vector<float> > *jet_TrackWidthPt500;
   vector<char>    *jet_bTag;
   vector<double>  *jet_deltaR0_20_matched_truth_particle_barcode;
   vector<double>  *jet_e;
   vector<double>  *jet_eta;
   vector<char>    *jet_isSig;
   vector<int>     *jet_passOR;
   vector<double>  *jet_phi;
   vector<double>  *jet_pt;
   UInt_t          lumiBlock;
   UInt_t          mcChannelNumber;
   Float_t         mcEventWeight;
   Int_t           pass_HLT_10j40_L14J15;
   Int_t           pass_HLT_3j175;
   Int_t           pass_HLT_3j200;
   Int_t           pass_HLT_4j100;
   Int_t           pass_HLT_4j120;
   Int_t           pass_HLT_4j60_gsc115_boffperf_split;
   Int_t           pass_HLT_4j85;
   Int_t           pass_HLT_4j85_gsc115_boffperf_split;
   Int_t           pass_HLT_6j45_gsc55_boffperf_split_0eta240_L14J15;
   Int_t           pass_HLT_6j45_gsc60_boffperf_split;
   Int_t           pass_HLT_6j45_gsc60_boffperf_split_L14J150ETA25;
   Int_t           pass_HLT_6j50_gsc70_boffperf_split;
   Int_t           pass_HLT_6j50_gsc70_boffperf_split_L14J15;
   Int_t           pass_HLT_6j50_gsc70_boffperf_split_L14J150ETA25;
   Int_t           pass_HLT_6j55_0eta240_L14J15;
   Int_t           pass_HLT_7j25_gsc45_boffperf_split_L14J150ETA25;
   Int_t           pass_HLT_7j25_gsc45_boffperf_split_L14J20;
   Int_t           pass_HLT_7j35_gsc45_boffperf_split_L14J15;
   Int_t           pass_HLT_7j45_L14J15;
   Int_t           pass_HLT_ht1000_L1J100;
   Int_t           pass_HLT_ht700_L1J75;
   Int_t           pass_HLT_j225_gsc420_boffperf_split;
   Int_t           pass_HLT_j225_gsc440_boffperf_split;
   Int_t           pass_HLT_j260_320eta490;
   Int_t           pass_HLT_j360;
   Int_t           pass_HLT_j380;
   Int_t           pass_HLT_j420;
   Int_t           pass_HLT_j420_a10_lcw_L1J100;
   Int_t           pass_HLT_j420_a10r_L1J100;
   Int_t           pass_HLT_j440_a10r_L1J100;
   Int_t           pass_HLT_j440_a10t_lcw_jes_L1J100;
   Int_t           pass_HLT_j460_a10_lcw_subjes_L1J100;
   Int_t           pass_HLT_j460_a10_lcw_subjes_L1SC111;
   Int_t           pass_HLT_j460_a10r_L1J100;
   Int_t           pass_HLT_j460_a10r_L1SC111;
   Int_t           pass_HLT_j460_a10t_lcw_jes_L1J100;
   Int_t           pass_HLT_j460_a10t_lcw_jes_L1SC111;
   Int_t           pass_HLT_mu60_0eta105_msonly;
   Int_t           pass_HLT_xe100_mht_L1XE50;
   Int_t           pass_HLT_xe110_mht_L1XE50;
   Int_t           pass_HLT_xe110_mht_L1XE50_AND_xe70_L1XE50;
   Int_t           pass_HLT_xe110_pufit_L1XE60;
   Long64_t        pileupReweightHash;
   Float_t         pileupWeight;
   UInt_t          runNumber;
   vector<int>     *truth_NeutralinoFromGluino_ParentBarcode;
   vector<int>     *truth_NeutralinoFromGluino_barcode;
   vector<double>  *truth_NeutralinoFromGluino_charge;
   vector<double>  *truth_NeutralinoFromGluino_e;
   vector<double>  *truth_NeutralinoFromGluino_eta;
   vector<int>     *truth_NeutralinoFromGluino_pdgID;
   vector<double>  *truth_NeutralinoFromGluino_phi;
   vector<double>  *truth_NeutralinoFromGluino_pt;
   vector<int>     *truth_ParticleFromGluino_ParentBarcode;
   vector<int>     *truth_ParticleFromGluino_barcode;
   vector<double>  *truth_ParticleFromGluino_charge;
   vector<double>  *truth_ParticleFromGluino_e;
   vector<double>  *truth_ParticleFromGluino_eta;
   vector<int>     *truth_ParticleFromGluino_pdgID;
   vector<double>  *truth_ParticleFromGluino_phi;
   vector<double>  *truth_ParticleFromGluino_pt;
   vector<int>     *truth_QuarkFromGluino_ParentBarcode;
   vector<int>     *truth_QuarkFromGluino_barcode;
   vector<double>  *truth_QuarkFromGluino_charge;
   vector<double>  *truth_QuarkFromGluino_e;
   vector<double>  *truth_QuarkFromGluino_eta;
   vector<int>     *truth_QuarkFromGluino_pdgID;
   vector<double>  *truth_QuarkFromGluino_phi;
   vector<double>  *truth_QuarkFromGluino_pt;
   vector<int>     *truth_QuarkFromNeutralino_ParentBarcode;
   vector<int>     *truth_QuarkFromNeutralino_barcode;
   vector<double>  *truth_QuarkFromNeutralino_charge;
   vector<double>  *truth_QuarkFromNeutralino_e;
   vector<double>  *truth_QuarkFromNeutralino_eta;
   vector<int>     *truth_QuarkFromNeutralino_pdgID;
   vector<double>  *truth_QuarkFromNeutralino_phi;
   vector<double>  *truth_QuarkFromNeutralino_pt;
   vector<double>  *truth_jet_e;
   vector<double>  *truth_jet_eta;
   vector<double>  *truth_jet_phi;
   vector<double>  *truth_jet_pt;
   vector<double>  *truth_parent__charge;
   vector<int>     *truth_parent_barcode;
   vector<double>  *truth_parent_e;
   vector<double>  *truth_parent_eta;
   vector<double>  *truth_parent_m;
   vector<int>     *truth_parent_pdgId;
   vector<double>  *truth_parent_phi;
   vector<double>  *truth_parent_pt;
   vector<float>   *muon_charge;
   vector<double>  *muon_e;
   vector<double>  *muon_eta;
   vector<unsigned long> *muon_index;
   vector<double>  *muon_phi;
   vector<double>  *muon_pt;
   Float_t         normweight;

   // List of branches
   TBranch        *b_NPV;   //!
   TBranch        *b_TriggerDecisions;   //!
   TBranch        *b_actualInteractionsPerCrossing;   //!
   TBranch        *b_averageInteractionsPerCrossing;   //!
   TBranch        *b_bcid;   //!
   TBranch        *b_el_baseline;   //!
   TBranch        *b_el_charge;   //!
   TBranch        *b_el_d0;   //!
   TBranch        *b_el_e;   //!
   TBranch        *b_el_eta;   //!
   TBranch        *b_el_passOR;   //!
   TBranch        *b_el_phi;   //!
   TBranch        *b_el_pt;   //!
   TBranch        *b_el_signal;   //!
   TBranch        *b_eventNumber;   //!
   TBranch        *b_fatjet_e;   //!
   TBranch        *b_fatjet_eta;   //!
   TBranch        *b_fatjet_phi;   //!
   TBranch        *b_fatjet_pt;   //!
   TBranch        *b_jet_NumTrkPt1000;   //!
   TBranch        *b_jet_NumTrkPt500;   //!
   TBranch        *b_jet_PartonTruthLabelID;   //!
   TBranch        *b_jet_SumPtTrkPt1000;   //!
   TBranch        *b_jet_SumPtTrkPt500;   //!
   TBranch        *b_jet_TrackWidthPt1000;   //!
   TBranch        *b_jet_TrackWidthPt500;   //!
   TBranch        *b_jet_bTag;   //!
   TBranch        *b_jet_deltaR0_20_matched_truth_particle_barcode;   //!
   TBranch        *b_jet_e;   //!
   TBranch        *b_jet_eta;   //!
   TBranch        *b_jet_isSig;   //!
   TBranch        *b_jet_passOR;   //!
   TBranch        *b_jet_phi;   //!
   TBranch        *b_jet_pt;   //!
   TBranch        *b_lumiBlock;   //!
   TBranch        *b_mcChannelNumber;   //!
   TBranch        *b_mcEventWeight;   //!
   TBranch        *b_pass_HLT_10j40_L14J15;   //!
   TBranch        *b_pass_HLT_3j175;   //!
   TBranch        *b_pass_HLT_3j200;   //!
   TBranch        *b_pass_HLT_4j100;   //!
   TBranch        *b_pass_HLT_4j120;   //!
   TBranch        *b_pass_HLT_4j60_gsc115_boffperf_split;   //!
   TBranch        *b_pass_HLT_4j85;   //!
   TBranch        *b_pass_HLT_4j85_gsc115_boffperf_split;   //!
   TBranch        *b_pass_HLT_6j45_gsc55_boffperf_split_0eta240_L14J15;   //!
   TBranch        *b_pass_HLT_6j45_gsc60_boffperf_split;   //!
   TBranch        *b_pass_HLT_6j45_gsc60_boffperf_split_L14J150ETA25;   //!
   TBranch        *b_pass_HLT_6j50_gsc70_boffperf_split;   //!
   TBranch        *b_pass_HLT_6j50_gsc70_boffperf_split_L14J15;   //!
   TBranch        *b_pass_HLT_6j50_gsc70_boffperf_split_L14J150ETA25;   //!
   TBranch        *b_pass_HLT_6j55_0eta240_L14J15;   //!
   TBranch        *b_pass_HLT_7j25_gsc45_boffperf_split_L14J150ETA25;   //!
   TBranch        *b_pass_HLT_7j25_gsc45_boffperf_split_L14J20;   //!
   TBranch        *b_pass_HLT_7j35_gsc45_boffperf_split_L14J15;   //!
   TBranch        *b_pass_HLT_7j45_L14J15;   //!
   TBranch        *b_pass_HLT_ht1000_L1J100;   //!
   TBranch        *b_pass_HLT_ht700_L1J75;   //!
   TBranch        *b_pass_HLT_j225_gsc420_boffperf_split;   //!
   TBranch        *b_pass_HLT_j225_gsc440_boffperf_split;   //!
   TBranch        *b_pass_HLT_j260_320eta490;   //!
   TBranch        *b_pass_HLT_j360;   //!
   TBranch        *b_pass_HLT_j380;   //!
   TBranch        *b_pass_HLT_j420;   //!
   TBranch        *b_pass_HLT_j420_a10_lcw_L1J100;   //!
   TBranch        *b_pass_HLT_j420_a10r_L1J100;   //!
   TBranch        *b_pass_HLT_j440_a10r_L1J100;   //!
   TBranch        *b_pass_HLT_j440_a10t_lcw_jes_L1J100;   //!
   TBranch        *b_pass_HLT_j460_a10_lcw_subjes_L1J100;   //!
   TBranch        *b_pass_HLT_j460_a10_lcw_subjes_L1SC111;   //!
   TBranch        *b_pass_HLT_j460_a10r_L1J100;   //!
   TBranch        *b_pass_HLT_j460_a10r_L1SC111;   //!
   TBranch        *b_pass_HLT_j460_a10t_lcw_jes_L1J100;   //!
   TBranch        *b_pass_HLT_j460_a10t_lcw_jes_L1SC111;   //!
   TBranch        *b_pass_HLT_mu60_0eta105_msonly;   //!
   TBranch        *b_pass_HLT_xe100_mht_L1XE50;   //!
   TBranch        *b_pass_HLT_xe110_mht_L1XE50;   //!
   TBranch        *b_pass_HLT_xe110_mht_L1XE50_AND_xe70_L1XE50;   //!
   TBranch        *b_pass_HLT_xe110_pufit_L1XE60;   //!
   TBranch        *b_pileupReweightHash;   //!
   TBranch        *b_pileupWeight;   //!
   TBranch        *b_runNumber;   //!
   TBranch        *b_truth_NeutralinoFromGluino_ParentBarcode;   //!
   TBranch        *b_truth_NeutralinoFromGluino_barcode;   //!
   TBranch        *b_truth_NeutralinoFromGluino_charge;   //!
   TBranch        *b_truth_NeutralinoFromGluino_e;   //!
   TBranch        *b_truth_NeutralinoFromGluino_eta;   //!
   TBranch        *b_truth_NeutralinoFromGluino_pdgID;   //!
   TBranch        *b_truth_NeutralinoFromGluino_phi;   //!
   TBranch        *b_truth_NeutralinoFromGluino_pt;   //!
   TBranch        *b_truth_ParticleFromGluino_ParentBarcode;   //!
   TBranch        *b_truth_ParticleFromGluino_barcode;   //!
   TBranch        *b_truth_ParticleFromGluino_charge;   //!
   TBranch        *b_truth_ParticleFromGluino_e;   //!
   TBranch        *b_truth_ParticleFromGluino_eta;   //!
   TBranch        *b_truth_ParticleFromGluino_pdgID;   //!
   TBranch        *b_truth_ParticleFromGluino_phi;   //!
   TBranch        *b_truth_ParticleFromGluino_pt;   //!
   TBranch        *b_truth_QuarkFromGluino_ParentBarcode;   //!
   TBranch        *b_truth_QuarkFromGluino_barcode;   //!
   TBranch        *b_truth_QuarkFromGluino_charge;   //!
   TBranch        *b_truth_QuarkFromGluino_e;   //!
   TBranch        *b_truth_QuarkFromGluino_eta;   //!
   TBranch        *b_truth_QuarkFromGluino_pdgID;   //!
   TBranch        *b_truth_QuarkFromGluino_phi;   //!
   TBranch        *b_truth_QuarkFromGluino_pt;   //!
   TBranch        *b_truth_QuarkFromNeutralino_ParentBarcode;   //!
   TBranch        *b_truth_QuarkFromNeutralino_barcode;   //!
   TBranch        *b_truth_QuarkFromNeutralino_charge;   //!
   TBranch        *b_truth_QuarkFromNeutralino_e;   //!
   TBranch        *b_truth_QuarkFromNeutralino_eta;   //!
   TBranch        *b_truth_QuarkFromNeutralino_pdgID;   //!
   TBranch        *b_truth_QuarkFromNeutralino_phi;   //!
   TBranch        *b_truth_QuarkFromNeutralino_pt;   //!
   TBranch        *b_truth_jet_e;   //!
   TBranch        *b_truth_jet_eta;   //!
   TBranch        *b_truth_jet_phi;   //!
   TBranch        *b_truth_jet_pt;   //!
   TBranch        *b_truth_parent__charge;   //!
   TBranch        *b_truth_parent_barcode;   //!
   TBranch        *b_truth_parent_e;   //!
   TBranch        *b_truth_parent_eta;   //!
   TBranch        *b_truth_parent_m;   //!
   TBranch        *b_truth_parent_pdgId;   //!
   TBranch        *b_truth_parent_phi;   //!
   TBranch        *b_truth_parent_pt;   //!
   TBranch        *b_muon_charge;   //!
   TBranch        *b_muon_e;   //!
   TBranch        *b_muon_eta;   //!
   TBranch        *b_muon_index;   //!
   TBranch        *b_muon_phi;   //!
   TBranch        *b_muon_pt;   //!
   TBranch        *b_normweight;   //!

   Test(TTree *tree=0);
   virtual ~Test();
   virtual Int_t    Cut(Long64_t entry);
   virtual Int_t    GetEntry(Long64_t entry);
   virtual Long64_t LoadTree(Long64_t entry);
   virtual void     Init(TTree *tree);
   virtual void     Loop();
   virtual Bool_t   Notify();
   virtual void     Show(Long64_t entry = -1);
};

#endif

#ifdef Test_cxx
Test::Test(TTree *tree) : fChain(0) 
{
// if parameter tree is not specified (or zero), connect the file
// used to generate this class and read the Tree.
   if (tree == 0) {
      TFile *f = (TFile*)gROOT->GetListOfFiles()->FindObject("403615.root");
      if (!f || !f->IsOpen()) {
         f = new TFile("403615.root");
      }
      f->GetObject("trees_SRRPV_",tree);

   }
   Init(tree);
}

Test::~Test()
{
   if (!fChain) return;
   delete fChain->GetCurrentFile();
}

Int_t Test::GetEntry(Long64_t entry)
{
// Read contents of entry.
   if (!fChain) return 0;
   return fChain->GetEntry(entry);
}
Long64_t Test::LoadTree(Long64_t entry)
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

void Test::Init(TTree *tree)
{
   // The Init() function is called when the selector needs to initialize
   // a new tree or chain. Typically here the branch addresses and branch
   // pointers of the tree will be set.
   // It is normally not necessary to make changes to the generated
   // code, but the routine can be extended by the user if needed.
   // Init() will be called many times when running on PROOF
   // (once per file to be processed).

   // Set object pointer
   TriggerDecisions = 0;
   el_baseline = 0;
   el_charge = 0;
   el_d0 = 0;
   el_e = 0;
   el_eta = 0;
   el_passOR = 0;
   el_phi = 0;
   el_pt = 0;
   el_signal = 0;
   fatjet_e = 0;
   fatjet_eta = 0;
   fatjet_phi = 0;
   fatjet_pt = 0;
   jet_NumTrkPt1000 = 0;
   jet_NumTrkPt500 = 0;
   jet_PartonTruthLabelID = 0;
   jet_SumPtTrkPt1000 = 0;
   jet_SumPtTrkPt500 = 0;
   jet_TrackWidthPt1000 = 0;
   jet_TrackWidthPt500 = 0;
   jet_bTag = 0;
   jet_deltaR0_20_matched_truth_particle_barcode = 0;
   jet_e = 0;
   jet_eta = 0;
   jet_isSig = 0;
   jet_passOR = 0;
   jet_phi = 0;
   jet_pt = 0;
   truth_NeutralinoFromGluino_ParentBarcode = 0;
   truth_NeutralinoFromGluino_barcode = 0;
   truth_NeutralinoFromGluino_charge = 0;
   truth_NeutralinoFromGluino_e = 0;
   truth_NeutralinoFromGluino_eta = 0;
   truth_NeutralinoFromGluino_pdgID = 0;
   truth_NeutralinoFromGluino_phi = 0;
   truth_NeutralinoFromGluino_pt = 0;
   truth_ParticleFromGluino_ParentBarcode = 0;
   truth_ParticleFromGluino_barcode = 0;
   truth_ParticleFromGluino_charge = 0;
   truth_ParticleFromGluino_e = 0;
   truth_ParticleFromGluino_eta = 0;
   truth_ParticleFromGluino_pdgID = 0;
   truth_ParticleFromGluino_phi = 0;
   truth_ParticleFromGluino_pt = 0;
   truth_QuarkFromGluino_ParentBarcode = 0;
   truth_QuarkFromGluino_barcode = 0;
   truth_QuarkFromGluino_charge = 0;
   truth_QuarkFromGluino_e = 0;
   truth_QuarkFromGluino_eta = 0;
   truth_QuarkFromGluino_pdgID = 0;
   truth_QuarkFromGluino_phi = 0;
   truth_QuarkFromGluino_pt = 0;
   truth_QuarkFromNeutralino_ParentBarcode = 0;
   truth_QuarkFromNeutralino_barcode = 0;
   truth_QuarkFromNeutralino_charge = 0;
   truth_QuarkFromNeutralino_e = 0;
   truth_QuarkFromNeutralino_eta = 0;
   truth_QuarkFromNeutralino_pdgID = 0;
   truth_QuarkFromNeutralino_phi = 0;
   truth_QuarkFromNeutralino_pt = 0;
   truth_jet_e = 0;
   truth_jet_eta = 0;
   truth_jet_phi = 0;
   truth_jet_pt = 0;
   truth_parent__charge = 0;
   truth_parent_barcode = 0;
   truth_parent_e = 0;
   truth_parent_eta = 0;
   truth_parent_m = 0;
   truth_parent_pdgId = 0;
   truth_parent_phi = 0;
   truth_parent_pt = 0;
   muon_charge = 0;
   muon_e = 0;
   muon_eta = 0;
   muon_index = 0;
   muon_phi = 0;
   muon_pt = 0;
   // Set branch addresses and branch pointers
   if (!tree) return;
   fChain = tree;
   fCurrent = -1;
   fChain->SetMakeClass(1);

   fChain->SetBranchAddress("NPV", &NPV, &b_NPV);
   fChain->SetBranchAddress("TriggerDecisions", &TriggerDecisions, &b_TriggerDecisions);
   fChain->SetBranchAddress("actualInteractionsPerCrossing", &actualInteractionsPerCrossing, &b_actualInteractionsPerCrossing);
   fChain->SetBranchAddress("averageInteractionsPerCrossing", &averageInteractionsPerCrossing, &b_averageInteractionsPerCrossing);
   fChain->SetBranchAddress("bcid", &bcid, &b_bcid);
   fChain->SetBranchAddress("el_baseline", &el_baseline, &b_el_baseline);
   fChain->SetBranchAddress("el_charge", &el_charge, &b_el_charge);
   fChain->SetBranchAddress("el_d0", &el_d0, &b_el_d0);
   fChain->SetBranchAddress("el_e", &el_e, &b_el_e);
   fChain->SetBranchAddress("el_eta", &el_eta, &b_el_eta);
   fChain->SetBranchAddress("el_passOR", &el_passOR, &b_el_passOR);
   fChain->SetBranchAddress("el_phi", &el_phi, &b_el_phi);
   fChain->SetBranchAddress("el_pt", &el_pt, &b_el_pt);
   fChain->SetBranchAddress("el_signal", &el_signal, &b_el_signal);
   fChain->SetBranchAddress("eventNumber", &eventNumber, &b_eventNumber);
   fChain->SetBranchAddress("fatjet_e", &fatjet_e, &b_fatjet_e);
   fChain->SetBranchAddress("fatjet_eta", &fatjet_eta, &b_fatjet_eta);
   fChain->SetBranchAddress("fatjet_phi", &fatjet_phi, &b_fatjet_phi);
   fChain->SetBranchAddress("fatjet_pt", &fatjet_pt, &b_fatjet_pt);
   fChain->SetBranchAddress("jet_NumTrkPt1000", &jet_NumTrkPt1000, &b_jet_NumTrkPt1000);
   fChain->SetBranchAddress("jet_NumTrkPt500", &jet_NumTrkPt500, &b_jet_NumTrkPt500);
   fChain->SetBranchAddress("jet_PartonTruthLabelID", &jet_PartonTruthLabelID, &b_jet_PartonTruthLabelID);
   fChain->SetBranchAddress("jet_SumPtTrkPt1000", &jet_SumPtTrkPt1000, &b_jet_SumPtTrkPt1000);
   fChain->SetBranchAddress("jet_SumPtTrkPt500", &jet_SumPtTrkPt500, &b_jet_SumPtTrkPt500);
   fChain->SetBranchAddress("jet_TrackWidthPt1000", &jet_TrackWidthPt1000, &b_jet_TrackWidthPt1000);
   fChain->SetBranchAddress("jet_TrackWidthPt500", &jet_TrackWidthPt500, &b_jet_TrackWidthPt500);
   fChain->SetBranchAddress("jet_bTag", &jet_bTag, &b_jet_bTag);
   fChain->SetBranchAddress("jet_deltaR0.20_matched_truth_particle_barcode", &jet_deltaR0_20_matched_truth_particle_barcode, &b_jet_deltaR0_20_matched_truth_particle_barcode);
   fChain->SetBranchAddress("jet_e", &jet_e, &b_jet_e);
   fChain->SetBranchAddress("jet_eta", &jet_eta, &b_jet_eta);
   fChain->SetBranchAddress("jet_isSig", &jet_isSig, &b_jet_isSig);
   fChain->SetBranchAddress("jet_passOR", &jet_passOR, &b_jet_passOR);
   fChain->SetBranchAddress("jet_phi", &jet_phi, &b_jet_phi);
   fChain->SetBranchAddress("jet_pt", &jet_pt, &b_jet_pt);
   fChain->SetBranchAddress("lumiBlock", &lumiBlock, &b_lumiBlock);
   fChain->SetBranchAddress("mcChannelNumber", &mcChannelNumber, &b_mcChannelNumber);
   fChain->SetBranchAddress("mcEventWeight", &mcEventWeight, &b_mcEventWeight);
   fChain->SetBranchAddress("pass_HLT_10j40_L14J15", &pass_HLT_10j40_L14J15, &b_pass_HLT_10j40_L14J15);
   fChain->SetBranchAddress("pass_HLT_3j175", &pass_HLT_3j175, &b_pass_HLT_3j175);
   fChain->SetBranchAddress("pass_HLT_3j200", &pass_HLT_3j200, &b_pass_HLT_3j200);
   fChain->SetBranchAddress("pass_HLT_4j100", &pass_HLT_4j100, &b_pass_HLT_4j100);
   fChain->SetBranchAddress("pass_HLT_4j120", &pass_HLT_4j120, &b_pass_HLT_4j120);
   fChain->SetBranchAddress("pass_HLT_4j60_gsc115_boffperf_split", &pass_HLT_4j60_gsc115_boffperf_split, &b_pass_HLT_4j60_gsc115_boffperf_split);
   fChain->SetBranchAddress("pass_HLT_4j85", &pass_HLT_4j85, &b_pass_HLT_4j85);
   fChain->SetBranchAddress("pass_HLT_4j85_gsc115_boffperf_split", &pass_HLT_4j85_gsc115_boffperf_split, &b_pass_HLT_4j85_gsc115_boffperf_split);
   fChain->SetBranchAddress("pass_HLT_6j45_gsc55_boffperf_split_0eta240_L14J15", &pass_HLT_6j45_gsc55_boffperf_split_0eta240_L14J15, &b_pass_HLT_6j45_gsc55_boffperf_split_0eta240_L14J15);
   fChain->SetBranchAddress("pass_HLT_6j45_gsc60_boffperf_split", &pass_HLT_6j45_gsc60_boffperf_split, &b_pass_HLT_6j45_gsc60_boffperf_split);
   fChain->SetBranchAddress("pass_HLT_6j45_gsc60_boffperf_split_L14J150ETA25", &pass_HLT_6j45_gsc60_boffperf_split_L14J150ETA25, &b_pass_HLT_6j45_gsc60_boffperf_split_L14J150ETA25);
   fChain->SetBranchAddress("pass_HLT_6j50_gsc70_boffperf_split", &pass_HLT_6j50_gsc70_boffperf_split, &b_pass_HLT_6j50_gsc70_boffperf_split);
   fChain->SetBranchAddress("pass_HLT_6j50_gsc70_boffperf_split_L14J15", &pass_HLT_6j50_gsc70_boffperf_split_L14J15, &b_pass_HLT_6j50_gsc70_boffperf_split_L14J15);
   fChain->SetBranchAddress("pass_HLT_6j50_gsc70_boffperf_split_L14J150ETA25", &pass_HLT_6j50_gsc70_boffperf_split_L14J150ETA25, &b_pass_HLT_6j50_gsc70_boffperf_split_L14J150ETA25);
   fChain->SetBranchAddress("pass_HLT_6j55_0eta240_L14J15", &pass_HLT_6j55_0eta240_L14J15, &b_pass_HLT_6j55_0eta240_L14J15);
   fChain->SetBranchAddress("pass_HLT_7j25_gsc45_boffperf_split_L14J150ETA25", &pass_HLT_7j25_gsc45_boffperf_split_L14J150ETA25, &b_pass_HLT_7j25_gsc45_boffperf_split_L14J150ETA25);
   fChain->SetBranchAddress("pass_HLT_7j25_gsc45_boffperf_split_L14J20", &pass_HLT_7j25_gsc45_boffperf_split_L14J20, &b_pass_HLT_7j25_gsc45_boffperf_split_L14J20);
   fChain->SetBranchAddress("pass_HLT_7j35_gsc45_boffperf_split_L14J15", &pass_HLT_7j35_gsc45_boffperf_split_L14J15, &b_pass_HLT_7j35_gsc45_boffperf_split_L14J15);
   fChain->SetBranchAddress("pass_HLT_7j45_L14J15", &pass_HLT_7j45_L14J15, &b_pass_HLT_7j45_L14J15);
   fChain->SetBranchAddress("pass_HLT_ht1000_L1J100", &pass_HLT_ht1000_L1J100, &b_pass_HLT_ht1000_L1J100);
   fChain->SetBranchAddress("pass_HLT_ht700_L1J75", &pass_HLT_ht700_L1J75, &b_pass_HLT_ht700_L1J75);
   fChain->SetBranchAddress("pass_HLT_j225_gsc420_boffperf_split", &pass_HLT_j225_gsc420_boffperf_split, &b_pass_HLT_j225_gsc420_boffperf_split);
   fChain->SetBranchAddress("pass_HLT_j225_gsc440_boffperf_split", &pass_HLT_j225_gsc440_boffperf_split, &b_pass_HLT_j225_gsc440_boffperf_split);
   fChain->SetBranchAddress("pass_HLT_j260_320eta490", &pass_HLT_j260_320eta490, &b_pass_HLT_j260_320eta490);
   fChain->SetBranchAddress("pass_HLT_j360", &pass_HLT_j360, &b_pass_HLT_j360);
   fChain->SetBranchAddress("pass_HLT_j380", &pass_HLT_j380, &b_pass_HLT_j380);
   fChain->SetBranchAddress("pass_HLT_j420", &pass_HLT_j420, &b_pass_HLT_j420);
   fChain->SetBranchAddress("pass_HLT_j420_a10_lcw_L1J100", &pass_HLT_j420_a10_lcw_L1J100, &b_pass_HLT_j420_a10_lcw_L1J100);
   fChain->SetBranchAddress("pass_HLT_j420_a10r_L1J100", &pass_HLT_j420_a10r_L1J100, &b_pass_HLT_j420_a10r_L1J100);
   fChain->SetBranchAddress("pass_HLT_j440_a10r_L1J100", &pass_HLT_j440_a10r_L1J100, &b_pass_HLT_j440_a10r_L1J100);
   fChain->SetBranchAddress("pass_HLT_j440_a10t_lcw_jes_L1J100", &pass_HLT_j440_a10t_lcw_jes_L1J100, &b_pass_HLT_j440_a10t_lcw_jes_L1J100);
   fChain->SetBranchAddress("pass_HLT_j460_a10_lcw_subjes_L1J100", &pass_HLT_j460_a10_lcw_subjes_L1J100, &b_pass_HLT_j460_a10_lcw_subjes_L1J100);
   fChain->SetBranchAddress("pass_HLT_j460_a10_lcw_subjes_L1SC111", &pass_HLT_j460_a10_lcw_subjes_L1SC111, &b_pass_HLT_j460_a10_lcw_subjes_L1SC111);
   fChain->SetBranchAddress("pass_HLT_j460_a10r_L1J100", &pass_HLT_j460_a10r_L1J100, &b_pass_HLT_j460_a10r_L1J100);
   fChain->SetBranchAddress("pass_HLT_j460_a10r_L1SC111", &pass_HLT_j460_a10r_L1SC111, &b_pass_HLT_j460_a10r_L1SC111);
   fChain->SetBranchAddress("pass_HLT_j460_a10t_lcw_jes_L1J100", &pass_HLT_j460_a10t_lcw_jes_L1J100, &b_pass_HLT_j460_a10t_lcw_jes_L1J100);
   fChain->SetBranchAddress("pass_HLT_j460_a10t_lcw_jes_L1SC111", &pass_HLT_j460_a10t_lcw_jes_L1SC111, &b_pass_HLT_j460_a10t_lcw_jes_L1SC111);
   fChain->SetBranchAddress("pass_HLT_mu60_0eta105_msonly", &pass_HLT_mu60_0eta105_msonly, &b_pass_HLT_mu60_0eta105_msonly);
   fChain->SetBranchAddress("pass_HLT_xe100_mht_L1XE50", &pass_HLT_xe100_mht_L1XE50, &b_pass_HLT_xe100_mht_L1XE50);
   fChain->SetBranchAddress("pass_HLT_xe110_mht_L1XE50", &pass_HLT_xe110_mht_L1XE50, &b_pass_HLT_xe110_mht_L1XE50);
   fChain->SetBranchAddress("pass_HLT_xe110_mht_L1XE50_AND_xe70_L1XE50", &pass_HLT_xe110_mht_L1XE50_AND_xe70_L1XE50, &b_pass_HLT_xe110_mht_L1XE50_AND_xe70_L1XE50);
   fChain->SetBranchAddress("pass_HLT_xe110_pufit_L1XE60", &pass_HLT_xe110_pufit_L1XE60, &b_pass_HLT_xe110_pufit_L1XE60);
   fChain->SetBranchAddress("pileupReweightHash", &pileupReweightHash, &b_pileupReweightHash);
   fChain->SetBranchAddress("pileupWeight", &pileupWeight, &b_pileupWeight);
   fChain->SetBranchAddress("runNumber", &runNumber, &b_runNumber);
   fChain->SetBranchAddress("truth_NeutralinoFromGluino_ParentBarcode", &truth_NeutralinoFromGluino_ParentBarcode, &b_truth_NeutralinoFromGluino_ParentBarcode);
   fChain->SetBranchAddress("truth_NeutralinoFromGluino_barcode", &truth_NeutralinoFromGluino_barcode, &b_truth_NeutralinoFromGluino_barcode);
   fChain->SetBranchAddress("truth_NeutralinoFromGluino_charge", &truth_NeutralinoFromGluino_charge, &b_truth_NeutralinoFromGluino_charge);
   fChain->SetBranchAddress("truth_NeutralinoFromGluino_e", &truth_NeutralinoFromGluino_e, &b_truth_NeutralinoFromGluino_e);
   fChain->SetBranchAddress("truth_NeutralinoFromGluino_eta", &truth_NeutralinoFromGluino_eta, &b_truth_NeutralinoFromGluino_eta);
   fChain->SetBranchAddress("truth_NeutralinoFromGluino_pdgID", &truth_NeutralinoFromGluino_pdgID, &b_truth_NeutralinoFromGluino_pdgID);
   fChain->SetBranchAddress("truth_NeutralinoFromGluino_phi", &truth_NeutralinoFromGluino_phi, &b_truth_NeutralinoFromGluino_phi);
   fChain->SetBranchAddress("truth_NeutralinoFromGluino_pt", &truth_NeutralinoFromGluino_pt, &b_truth_NeutralinoFromGluino_pt);
   fChain->SetBranchAddress("truth_ParticleFromGluino_ParentBarcode", &truth_ParticleFromGluino_ParentBarcode, &b_truth_ParticleFromGluino_ParentBarcode);
   fChain->SetBranchAddress("truth_ParticleFromGluino_barcode", &truth_ParticleFromGluino_barcode, &b_truth_ParticleFromGluino_barcode);
   fChain->SetBranchAddress("truth_ParticleFromGluino_charge", &truth_ParticleFromGluino_charge, &b_truth_ParticleFromGluino_charge);
   fChain->SetBranchAddress("truth_ParticleFromGluino_e", &truth_ParticleFromGluino_e, &b_truth_ParticleFromGluino_e);
   fChain->SetBranchAddress("truth_ParticleFromGluino_eta", &truth_ParticleFromGluino_eta, &b_truth_ParticleFromGluino_eta);
   fChain->SetBranchAddress("truth_ParticleFromGluino_pdgID", &truth_ParticleFromGluino_pdgID, &b_truth_ParticleFromGluino_pdgID);
   fChain->SetBranchAddress("truth_ParticleFromGluino_phi", &truth_ParticleFromGluino_phi, &b_truth_ParticleFromGluino_phi);
   fChain->SetBranchAddress("truth_ParticleFromGluino_pt", &truth_ParticleFromGluino_pt, &b_truth_ParticleFromGluino_pt);
   fChain->SetBranchAddress("truth_QuarkFromGluino_ParentBarcode", &truth_QuarkFromGluino_ParentBarcode, &b_truth_QuarkFromGluino_ParentBarcode);
   fChain->SetBranchAddress("truth_QuarkFromGluino_barcode", &truth_QuarkFromGluino_barcode, &b_truth_QuarkFromGluino_barcode);
   fChain->SetBranchAddress("truth_QuarkFromGluino_charge", &truth_QuarkFromGluino_charge, &b_truth_QuarkFromGluino_charge);
   fChain->SetBranchAddress("truth_QuarkFromGluino_e", &truth_QuarkFromGluino_e, &b_truth_QuarkFromGluino_e);
   fChain->SetBranchAddress("truth_QuarkFromGluino_eta", &truth_QuarkFromGluino_eta, &b_truth_QuarkFromGluino_eta);
   fChain->SetBranchAddress("truth_QuarkFromGluino_pdgID", &truth_QuarkFromGluino_pdgID, &b_truth_QuarkFromGluino_pdgID);
   fChain->SetBranchAddress("truth_QuarkFromGluino_phi", &truth_QuarkFromGluino_phi, &b_truth_QuarkFromGluino_phi);
   fChain->SetBranchAddress("truth_QuarkFromGluino_pt", &truth_QuarkFromGluino_pt, &b_truth_QuarkFromGluino_pt);
   fChain->SetBranchAddress("truth_QuarkFromNeutralino_ParentBarcode", &truth_QuarkFromNeutralino_ParentBarcode, &b_truth_QuarkFromNeutralino_ParentBarcode);
   fChain->SetBranchAddress("truth_QuarkFromNeutralino_barcode", &truth_QuarkFromNeutralino_barcode, &b_truth_QuarkFromNeutralino_barcode);
   fChain->SetBranchAddress("truth_QuarkFromNeutralino_charge", &truth_QuarkFromNeutralino_charge, &b_truth_QuarkFromNeutralino_charge);
   fChain->SetBranchAddress("truth_QuarkFromNeutralino_e", &truth_QuarkFromNeutralino_e, &b_truth_QuarkFromNeutralino_e);
   fChain->SetBranchAddress("truth_QuarkFromNeutralino_eta", &truth_QuarkFromNeutralino_eta, &b_truth_QuarkFromNeutralino_eta);
   fChain->SetBranchAddress("truth_QuarkFromNeutralino_pdgID", &truth_QuarkFromNeutralino_pdgID, &b_truth_QuarkFromNeutralino_pdgID);
   fChain->SetBranchAddress("truth_QuarkFromNeutralino_phi", &truth_QuarkFromNeutralino_phi, &b_truth_QuarkFromNeutralino_phi);
   fChain->SetBranchAddress("truth_QuarkFromNeutralino_pt", &truth_QuarkFromNeutralino_pt, &b_truth_QuarkFromNeutralino_pt);
   fChain->SetBranchAddress("truth_jet_e", &truth_jet_e, &b_truth_jet_e);
   fChain->SetBranchAddress("truth_jet_eta", &truth_jet_eta, &b_truth_jet_eta);
   fChain->SetBranchAddress("truth_jet_phi", &truth_jet_phi, &b_truth_jet_phi);
   fChain->SetBranchAddress("truth_jet_pt", &truth_jet_pt, &b_truth_jet_pt);
   fChain->SetBranchAddress("truth_parent__charge", &truth_parent__charge, &b_truth_parent__charge);
   fChain->SetBranchAddress("truth_parent_barcode", &truth_parent_barcode, &b_truth_parent_barcode);
   fChain->SetBranchAddress("truth_parent_e", &truth_parent_e, &b_truth_parent_e);
   fChain->SetBranchAddress("truth_parent_eta", &truth_parent_eta, &b_truth_parent_eta);
   fChain->SetBranchAddress("truth_parent_m", &truth_parent_m, &b_truth_parent_m);
   fChain->SetBranchAddress("truth_parent_pdgId", &truth_parent_pdgId, &b_truth_parent_pdgId);
   fChain->SetBranchAddress("truth_parent_phi", &truth_parent_phi, &b_truth_parent_phi);
   fChain->SetBranchAddress("truth_parent_pt", &truth_parent_pt, &b_truth_parent_pt);
   fChain->SetBranchAddress("muon_charge", &muon_charge, &b_muon_charge);
   fChain->SetBranchAddress("muon_e", &muon_e, &b_muon_e);
   fChain->SetBranchAddress("muon_eta", &muon_eta, &b_muon_eta);
   fChain->SetBranchAddress("muon_index", &muon_index, &b_muon_index);
   fChain->SetBranchAddress("muon_phi", &muon_phi, &b_muon_phi);
   fChain->SetBranchAddress("muon_pt", &muon_pt, &b_muon_pt);
   fChain->SetBranchAddress("normweight", &normweight, &b_normweight);
   Notify();
}

Bool_t Test::Notify()
{
   // The Notify() function is called when a new file is opened. This
   // can be either for a new TTree in a TChain or when when a new TTree
   // is started when using PROOF. It is normally not necessary to make changes
   // to the generated code, but the routine can be extended by the
   // user if needed. The return value is currently not used.

   return kTRUE;
}

void Test::Show(Long64_t entry)
{
// Print contents of entry.
// If entry is not specified, print current entry
   if (!fChain) return;
   fChain->Show(entry);
}
Int_t Test::Cut(Long64_t entry)
{
// This function may be called from Loop.
// returns  1 if entry is accepted.
// returns -1 otherwise.
   return 1;
}
#endif // #ifdef Test_cxx
