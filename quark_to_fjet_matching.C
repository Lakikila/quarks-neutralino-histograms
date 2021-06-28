#define quark_to_fjet_matching_cxx
#include "quark_to_fjet_matching.h"
#include <TH2.h>
#include <TStyle.h>
#include <TCanvas.h>
#include <math.h>

class FourVektor{
    public:
        double pt,eta,phi,e;
        FourVektor(){
            this->pt= 0;
            this->eta= 0;
            this->phi= 0;
            this->e= 0;
        }
        FourVektor(double pt,double eta,double phi,double e){
            this->pt= pt;
            this->eta= eta;
            this->phi= phi;
            this->e= e;
        }
	void SetXYZT(double pt,double eta,double phi,double e){
            this->pt= pt;
            this->eta= eta;
            this->phi= phi;
            this->e= e;
        }
        const double getPt() const {
            return this->pt;
        }
        const double getEta() const {
            return this->eta;
        }
        const double getPhi() const {
            return this->phi;
        }
        const double getE() const{
            return this->e;
        }
        const double DeltaR(FourVektor v1) const{
            double delta_phi= ((this->phi - v1.phi)< -TMath::Pi())?(this->phi - v1.phi+TMath::Pi()):( ((this->phi - v1.phi) >TMath::Pi())?(this->phi - v1.phi-TMath::Pi()):(this->phi - v1.phi) );
            double delta_eta= this->eta - v1.eta;
            return sqrt(delta_phi*delta_phi + delta_eta*delta_eta);
        }

};






//TLorentzVector LV = {PT, ETA, PHI, E}  <=> {0,eta,phi,0}
void quark_to_fjet_matching::Loop()
{
   if (fChain == 0) return;
   Long64_t nbytes = 0, nb = 0;
   Long64_t nentries = fChain->GetEntriesFast();
   FourVektor lv,fatjet;
   Double_t minimum,min_quark;
   int index_min,index_n;
   bool neutralino_failed=false,neutralino_quark_failed=false;
   int quark_failed_jet=0,process_unsuccessful=0;
   int quark_neutralino_failed_jet=0,neutralino_process_unsuccessful=0;

   vector<FourVektor> vector_neutralino;
   fChain->SetBranchStatus("*",0);
   fChain->SetBranchStatus("truth_ParticleFromGluino_eta",1);
   fChain->SetBranchStatus("truth_ParticleFromGluino_phi",1);

   fChain->SetBranchStatus("truth_QuarkFromNeutralino_eta",1);
   fChain->SetBranchStatus("truth_QuarkFromNeutralino_phi",1);

   fChain->SetBranchStatus("fatjet_eta",1);
   fChain->SetBranchStatus("fatjet_phi",1);

   for (Long64_t jentry=0; jentry<nentries ;jentry++){
        Long64_t ientry = LoadTree(jentry);
        if (ientry < 0) break;
        nb = fChain->GetEntry(jentry);   nbytes += nb;
        
        lv.SetXYZT(0,(*truth_ParticleFromGluino_eta)[0],(*truth_ParticleFromGluino_phi)[0],0);
        vector_neutralino.push_back(lv);
	

        lv.SetXYZT(0,(*truth_ParticleFromGluino_eta)[3],(*truth_ParticleFromGluino_phi)[3],0);
        vector_neutralino.push_back(lv);

 
        //vector_neutralino[0] - 1ST NEUTRALINO, vector_neutralino[1] - 2ND NEUTRALINO
        lv.SetXYZT(0,(*fatjet_eta)[0],(*fatjet_phi)[0],0);
        minimum=vector_neutralino[0].DeltaR(lv);
    	index_min=0;
        index_n=0;
        for(int i=0; i< fatjet_phi->size();i++){
            lv.SetXYZT(0,(*fatjet_eta)[i],(*fatjet_phi)[i],0);
	    

            if(vector_neutralino[0].DeltaR(lv) < vector_neutralino[1].DeltaR(lv)){

                if( vector_neutralino[0].DeltaR(lv)<=minimum){
                    minimum=vector_neutralino[0].DeltaR(lv);
                    index_min=i;
                    index_n=0;
                    fatjet.SetXYZT(0,(*fatjet_eta)[i],(*fatjet_phi)[i],0);
                }
            }else{
                if(vector_neutralino[1].DeltaR(lv)<=minimum){
                    minimum=vector_neutralino[1].DeltaR(lv);
                    index_min=i;
                    index_n=1;
                    fatjet.SetXYZT(0,(*fatjet_eta)[i],(*fatjet_phi)[i],0);
                }
            }
        } //nasli minimum za vektor_neutralino[index_n]
        //fatjet ima bas najmanji dR za neutralino index_n,a to je fatjet na mestu index_min
	//cout<< "Process: "<<jentry << "dRmin[" << index_n<<"]=" << minimum<< endl;

        for(int i=0;i<3;i++){
	
            
	  lv.SetXYZT(0,(*truth_QuarkFromNeutralino_eta)[i+3*index_n],(*truth_QuarkFromNeutralino_phi)[i+3*index_n],0);
              if(fatjet.DeltaR(lv)  > 0.8 ){
		          
		  quark_failed_jet++;
                  neutralino_failed=true;
              }
            if(lv.DeltaR( vector_neutralino[index_n]) >0.8){
		quark_neutralino_failed_jet++;
		neutralino_quark_failed=true;

	    }
        }
        
        // proverili smo koliko je kvarkova izletelo iz jeta
        index_n= (index_n + 1)%2; //prelazimo na drugi neutralino
        minimum=100;
        for(int i=0; i< fatjet_phi->size();i++){
            if(i!=index_min){  //iskljucujemo fatjet uklopljen sa prvim neutralinom
                lv.SetXYZT(0,(*fatjet_eta)[i],(*fatjet_phi)[i],0);
                if( vector_neutralino[index_n].DeltaR(lv) < minimum ){
                    minimum=vector_neutralino[index_n].DeltaR(lv);
                    fatjet.SetXYZT(0,(*fatjet_eta)[i],(*fatjet_phi)[i],0);
                }
		
            }
        }
	//cout<< "Process: "<<jentry << " dRmin[" << index_n<<"]=" << minimum<<endl;
	for(int i=0;i<3;i++){//truth_QuarkFromNeutralino_eta->size();i++){
            lv.SetXYZT(0,(*truth_QuarkFromNeutralino_eta)[i+3*index_n],(*truth_QuarkFromNeutralino_phi)[i+3*index_n],0);
            if(fatjet.DeltaR(lv)  > 0.8 ){
                quark_failed_jet++;
                neutralino_failed=true;
            }
            if(lv.DeltaR( vector_neutralino[index_n]) >0.8){
		quark_neutralino_failed_jet++;
		neutralino_quark_failed=true;

	    }
        }
        if(neutralino_failed==true){
            neutralino_failed=false;
            process_unsuccessful++;
        }
        if(neutralino_quark_failed==true){
	    neutralino_quark_failed=false;
	    neutralino_process_unsuccessful++;
	}
   }
   
    cout<<  "# of unmatched quarks: " << quark_failed_jet << endl;
    cout<< "# of unsuccessful processes: "<< process_unsuccessful<< " and its % is: " << process_unsuccessful*1.0/nentries*100<<"%" << endl;

    cout<<  "# of unmatched quarks (with neutralino): " << quark_neutralino_failed_jet << endl;
    cout<< "# of unsuccessful processes (with neutralino): "<< neutralino_process_unsuccessful<< " and its % is: " << neutralino_process_unsuccessful*1.0/nentries*100<<"%" << endl;

}
