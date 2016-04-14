#define MyClass_cxx
#include "MyClass.h"
#include <stdlib.h>
#include <iostream>
#include <stdio.h>
#include <cmath>
#include "/direct/phenix+u/liuld/root/myinclude/rootall.h"

void MyClass::Loop()
{
	//   In a ROOT session, you can do:
	//      Root > .L MyClass.C
	//      Root > MyClass t
	//      Root > t.GetEntry(12); // Fill t data members with entry number 12
	//      Root > t.Show();       // Show values of entry 12
	//      Root > t.Show(16);     // Read and show values of entry 16
	//      Root > t.Loop();       // Loop on all entries
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
	Long64_t Npass0=0;
	Long64_t Npass1=0;
	Long64_t Npass2=0;
	Long64_t Npass3=0;
	Long64_t Npass4=0;
	//----------------------output name-----------------------------
	FILE *pf = popen("basename $PWD","r");
	char buf[1024];
	memset(buf,'\0',sizeof(buf));
	fread(buf,sizeof(char),sizeof(buf),pf);
	TString fname(buf,strlen(buf)-1);
	TString out_file("");
	TString outdir("/gpfs/mnt/gpfs02/phenix/spin/spin3/liuld/rootfile/pDst_run15pAu/");
	out_file+=outdir;
	out_file+=fname;
	out_file+=".root";
	cout<<out_file<<endl;
	//----------------------don't change------------------------------


	Long64_t nentries = fChain->GetEntriesFast();

	TFile* fout=new TFile(out_file,"RECREATE");
	TTree* newTree1=(TTree*)fChain->CloneTree(0);
	TTree* newTree2=(TTree*)fChain->CloneTree(0);
	TTree* newTree3=(TTree*)fChain->CloneTree(0);
	newTree1->SetName("T");
	newTree1->SetTitle("no cut");
	newTree2->SetName("T23_cut");
	newTree2->SetTitle("gap23 with cut");
	newTree3->SetName("T4_cut");
	newTree3->SetTitle("gap4 with cut");
    

	Float_t phi,phi_fvtx,phi_fvtxmutr;
	newTree1->Branch("phi",&phi,"phi/F");
	newTree1->Branch("phi_fvtx",&phi_fvtx,"phi_fvtx/F");
	newTree1->Branch("phi_fvtxmutr",&phi_fvtxmutr,"phi_fvtxmutr/F");

	newTree2->Branch("phi",&phi,"phi/F");
	newTree2->Branch("phi_fvtx",&phi_fvtx,"phi_fvtx/F");
	newTree2->Branch("phi_fvtxmutr",&phi_fvtxmutr,"phi_fvtxmutr/F");
	Long64_t nbytes = 0, nb = 0;
	//full event
	//for (Long64_t jentry=0; jentry<nentries;jentry++) {
	//test event
	for (Long64_t jentry=100000; jentry<200000;jentry++) {
		Long64_t ientry = LoadTree(jentry);
		if (ientry < 0) break;
		nb = fChain->GetEntry(jentry);   nbytes += nb;
		// if (Cut(ientry) < 0) continue;
		TVector3 *vsimu = new TVector3(px,py,pz);
		TVector3 *vsimu_fvtx = new TVector3(px_fvtx,py_fvtx,pz_fvtx);
		TVector3 *vsimu_fvtxmutr = new TVector3(px_fvtxmutr,py_fvtxmutr,pz_fvtxmutr);
	
		//phi=vsimu->Phi();
		//phi_fvtx=vsimu_fvtx->Phi();
		//phi_fvtxmutr=vsimu_fvtxmutr->Phi();
	

		newTree1->Fill();

		//------cut------
		if(lastgap<4)newTree2->Fill();
		if(lastgap==4)newTree3->Fill();
        
		delete vsimu;


	}
	//effiency
	cout<<"total: "<<Npass0<<endl;
	cout<<Npass2<<endl;
	cout<<Npass3<<endl;
	cout<<Npass4<<endl;
	cout<<"4C eff:  "<<Npass4*1./Npass3<<endl;
	
	///
	fout->cd();
	newTree1->AutoSave();
	newTree2->AutoSave();
	newTree3->AutoSave();
	fout->Close();
	delete fout;


}
