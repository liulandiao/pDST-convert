#include <stdio.h>                                                           
#include <iostream>
#include <iomanip>
#include <fstream>
#include <TFile.h>
#include <TTree.h>
#include <TROOT.h>
#include <TChain.h>
#include <TSystem.h>
#include <TMath.h>
#include <TLorentzVector.h>
#include "TVector3.h"
//#include "mystyle.h"
bool debug =false;
using namespace std;

void  simpleroot(char *f_in_list_name = "picoDST.list",char *f_out_root_name = "simpleroot.root")
{
	if(debug)cout<<__LINE__<<endl;
	//load the lib which including the defination of some classes
	gSystem->Load("libpicodst_object.so");   

	if(debug)cout<<__LINE__<<endl;

	//Define chain
	TChain chain_in_singlemuon("T");
	TChain chain_in_header("T1");

	if(debug)cout<<__LINE__<<endl;
	//check the picoDST.list 
	std::ifstream h_inf(f_in_list_name);
	if(!h_inf.is_open())
	{   
		cout << "The File " << f_in_list_name << " can not be opened!" <<    endl;
	} 
	if(debug)cout<<__LINE__<<endl;

	//Add chain
	while(!h_inf.eof())
	{   
		char filename[1000];
		h_inf.getline(filename,1000);
		if(h_inf.eof()) continue;
		chain_in_singlemuon.Add(filename); //the tree in different root file will add together according to the tree name
		chain_in_header.Add(filename);
	}
	if(debug)cout<<__LINE__<<endl;

	//set branches for the classes
	SingleMuonContainer *singlemuoncontainer = NULL;
	chain_in_singlemuon.SetBranchAddress("DST/SingleMuonContainer", &singlemuoncontainer);

	TrigLvl1 *triglvl1 = NULL;
	chain_in_singlemuon.SetBranchAddress("DST/TrigLvl1", &triglvl1);

	SyncObject * syncobject = NULL;
	chain_in_singlemuon.SetBranchAddress("DST/Sync", &syncobject);

	RunHeader *runheader = NULL;
	chain_in_header.SetBranchAddress("RUN/RunHeader", &runheader);
	if(debug)cout<<__LINE__<<endl;


	//output root file
	TFile * f_out = new TFile(f_out_root_name,"RECREATE");
	TTree * t_out = new TTree("T","SiMuon NTUPLE");
	if(debug)cout<<__LINE__<<endl;

	//define useful variables
	Int_t        Run_Number;
	//
	Float_t         Evt_bbcZ;
	Float_t         Evt_bbcZ_Err;
	Float_t         Evt_vtxX;
	Float_t         Evt_vtxX_Err;
	Float_t         Evt_vtxY;
	Float_t         Evt_vtxY_Err;
	Float_t         Evt_vtxZ;
	Float_t         Evt_vtxZ_Err;
	Float_t         Evt_fvtxX;
	Float_t         Evt_fvtxX_Err;
	Float_t         Evt_fvtxY;
	Float_t         Evt_fvtxY_Err;
	Float_t         Evt_fvtxZ;
	Float_t         Evt_fvtxZ_Err;
	Float_t         Evt_fvtxX2;
	Float_t         Evt_fvtxY2;
	Float_t         Evt_fvtxZ2;
	Float_t         Evt_Cent;
	Int_t           Evt_Mult_FVTXN;
	Int_t           Evt_Mult_FVTXS;
	Int_t           Evt_Mult_SVX;
	Int_t           Evt_Mult_sFVTXN;
	Int_t           Evt_Mult_sFVTXS;

	//singlemuon
	UInt_t          nSingleMuons;
	Float_t         px;   
	Float_t         py;   
	Float_t         pz;   
	Float_t         pt;   
	Float_t         p;   
	Float_t         rapidity;
	Float_t         DG0; 
	Float_t         DDG0; 
	Float_t         DS3; 
	Float_t         trchi2;
	Float_t         idchi2;
	Short_t         ntrhits;
	Short_t         nidhits;
	Short_t         lastgap;
	Bool_t          MUID1D;
	Bool_t          MUID1S;
	Float_t         dca_z;
	Float_t         dca_r;
	Bool_t          charge;  
	Float_t         x0; 
	Float_t         y0; 
	Float_t         z0; 
	Float_t         r0; 

	Float_t         x0_fvtx;  
	Float_t         y0_fvtx;  
	Float_t         z0_fvtx;  
	Float_t         r0_fvtx;  
	Float_t         px_fvtx;  
	Float_t         py_fvtx;  
	Float_t         pz_fvtx;  
	Float_t         pt_fvtx;  
	Float_t         p_fvtx;  
	Float_t         x0_fvtxmutr; 
	Float_t         y0_fvtxmutr; 
	Float_t         z0_fvtxmutr; 
	Float_t         r0_fvtxmutr; 
	Float_t         px_fvtxmutr; 
	Float_t         py_fvtxmutr; 
	Float_t         pz_fvtxmutr; 
	Float_t         pt_fvtxmutr; 
	Float_t         p_fvtxmutr; 
	UInt_t          nhits_fvtx; 
	Float_t         dphi_fvtx; 
	Float_t         dtheta_fvtx; 
	Float_t         dr_fvtx;  
	Float_t         chi2_fvtx;
	Float_t         chi2_fvtxmutr;   
	Float_t         dca_phi; 
	UShort_t        clusters_size1;   
	ULong_t         nfvtx_tracklets_cone;  
	UInt_t          nfvtx_tracklets; 
	ULong_t         nfvtx_clusters_cone; 
	if(debug)cout<<__LINE__<<endl;

	//branch
	t_out->Branch("Run_Number",&Run_Number,"Run_Number/I");
	t_out->Branch("Evt_bbcZ",&Evt_bbcZ,"Evt_bbcZ/F");
	t_out->Branch("Evt_bbcZ_Err",&Evt_bbcZ_Err,"Evt_bbcZ_Err/F");

	t_out->Branch("Evt_vtxX",&Evt_vtxX,"Evt_vtxX/F");
	t_out->Branch("Evt_vtxX_Err",&Evt_vtxX_Err,"Evt_vtxX_Err/F");
	t_out->Branch("Evt_vtxY",&Evt_vtxY,"Evt_vtxY/F");
	t_out->Branch("Evt_vtxY_Err",&Evt_vtxY_Err,"Evt_vtxY_Err/F");
	t_out->Branch("Evt_vtxZ",&Evt_vtxZ,"Evt_vtxZ/F");
	t_out->Branch("Evt_vtxZ_Err",&Evt_vtxZ_Err,"Evt_vtxZ_Err/F");

	t_out->Branch("Evt_fvtxX",&Evt_fvtxX,"Evt_fvtxX/F");
	t_out->Branch("Evt_fvtxX_Err",&Evt_fvtxX_Err,"Evt_fvtxX_Err/F");
	t_out->Branch("Evt_fvtxY",&Evt_fvtxY,"Evt_fvtxY/F");
	t_out->Branch("Evt_fvtxY_Err",&Evt_fvtxY_Err,"Evt_fvtxY_Err/F");
	t_out->Branch("Evt_fvtxZ",&Evt_fvtxZ,"Evt_fvtxZ/F");
	t_out->Branch("Evt_fvtxZ_Err",&Evt_fvtxZ_Err,"Evt_fvtxZ_Err/F");

	t_out->Branch("Evt_fvtxX2",&Evt_fvtxX2,"Evt_fvtxX2/F");
	t_out->Branch("Evt_fvtxY2",&Evt_fvtxY2,"Evt_fvtxY2/F");
	t_out->Branch("Evt_fvtxZ2",&Evt_fvtxZ2,"Evt_fvtxZ2/F");

	t_out->Branch("Evt_Cent",&Evt_Cent,"Evt_Cent/F");
	t_out->Branch("Evt_Mult_FVTXN",&Evt_Mult_FVTXN,"Evt_Mult_FVTXN/I");
	t_out->Branch("Evt_Mult_FVTXS",&Evt_Mult_FVTXS,"Evt_Mult_FVTXS/I");
	t_out->Branch("Evt_Mult_SVX",&Evt_Mult_SVX,"Evt_Mult_SVX/I");
	t_out->Branch("Evt_Mult_sFVTXN",&Evt_Mult_sFVTXN,"Evt_Mult_sFVTXN/I");
	t_out->Branch("Evt_Mult_sFVTXS",&Evt_Mult_sFVTXS,"Evt_Mult_sFVTXS/I");

	//
	t_out->Branch("nSingleMuons",&nSingleMuons,"nSingleMuons/I");

	t_out->Branch("px",&px,"px/F");
	t_out->Branch("py",&py,"py/F");
	t_out->Branch("pz",&pz,"pz/F");
	t_out->Branch("pt",&pt,"pt/F");
	t_out->Branch("p",&p,"p/F");

	t_out->Branch("rapidity",&rapidity,"rapidity/F");

	t_out->Branch("DG0",&DG0,"DG0/F");
	t_out->Branch("DDG0",&DDG0,"DDG0/F");
	t_out->Branch("DS3",&DS3,"DS3/F");

	t_out->Branch("trchi2",&trchi2,"trchi2/F");
	t_out->Branch("idchi2",&idchi2,"idchi2/F");

	t_out->Branch("ntrhits",&ntrhits,"ntrhits/S");
	t_out->Branch("nidhits",&nidhits,"nidhits/S");
	t_out->Branch("lastgap",&lastgap,"lastgap/S");

	t_out->Branch("MUID1D",&MUID1D,"MUID1D/O");
	t_out->Branch("MUID1S",&MUID1S,"MUID1S/O");

	t_out->Branch("dca_z",&dca_z,"dca_z/F");
	t_out->Branch("dca_r",&dca_r,"dca_r/F");

	t_out->Branch("charge",&charge,"charge/O");

	t_out->Branch("x0",&x0,"x0/F");
	t_out->Branch("y0",&y0,"y0/F");
	t_out->Branch("z0",&z0,"z0/F");
	t_out->Branch("r0",&r0,"r0/F");

	t_out->Branch("x0_fvtx",&x0_fvtx,"x0_fvtx/F");
	t_out->Branch("y0_fvtx",&y0_fvtx,"y0_fvtx/F");
	t_out->Branch("z0_fvtx",&z0_fvtx,"z0_fvtx/F");
	t_out->Branch("r0_fvtx",&r0_fvtx,"r0_fvtx/F");

	t_out->Branch("px_fvtx",&px_fvtx,"px_fvtx/F");
	t_out->Branch("py_fvtx",&py_fvtx,"py_fvtx/F");
	t_out->Branch("pz_fvtx",&pz_fvtx,"pz_fvtx/F");
	t_out->Branch("pt_fvtx",&pt_fvtx,"pt_fvtx/F");
	t_out->Branch("p_fvtx",&p_fvtx,"p_fvtx/F");

	t_out->Branch("x0_fvtxmutr",&x0_fvtxmutr,"x0_fvtxmutr/F");
	t_out->Branch("y0_fvtxmutr",&y0_fvtxmutr,"y0_fvtxmutr/F");
	t_out->Branch("z0_fvtxmutr",&z0_fvtxmutr,"z0_fvtxmutr/F");
	t_out->Branch("r0_fvtxmutr",&r0_fvtxmutr,"r0_fvtxmutr/F");

	t_out->Branch("px_fvtxmutr",&px_fvtxmutr,"px_fvtxmutr/F");
	t_out->Branch("py_fvtxmutr",&py_fvtxmutr,"py_fvtxmutr/F");
	t_out->Branch("pz_fvtxmutr",&pz_fvtxmutr,"pz_fvtxmutr/F");
	t_out->Branch("pt_fvtxmutr",&pt_fvtxmutr,"pt_fvtxmutr/F");
	t_out->Branch("p_fvtxmutr",&p_fvtxmutr,"p_fvtxmutr/F");

	t_out->Branch("nhits_fvtx",&nhits_fvtx,"nhits_fvtx/i");

	t_out->Branch("dphi_fvtx",&dphi_fvtx,"dphi_fvtx/F");
	t_out->Branch("dtheta_fvtx",&dtheta_fvtx,"dtheta_fvtx/F");
	t_out->Branch("dr_fvtx",&dr_fvtx,"dr_fvtx/F");
	t_out->Branch("chi2_fvtx",&chi2_fvtx,"chi2_fvtx/F");
	t_out->Branch("chi2_fvtxmutr",&chi2_fvtxmutr,"chi2_fvtxmutr/F");
	t_out->Branch("dca_phi",&dca_phi,"dca_phi/F");

	t_out->Branch("clusters_size1",&clusters_size1,"clusters_size1/s");
	t_out->Branch("nfvtx_tracklets_cone",&nfvtx_tracklets_cone,"nfvtx_tracklets_cone/l");
	t_out->Branch("nfvtx_tracklets",&nfvtx_tracklets,"nfvtx_tracklets/i");
	t_out->Branch("nfvtx_clusters_cone",&nfvtx_clusters_cone,"nfvtx_clusters_cone/l");

	if(debug)cout<<__LINE__<<endl;

	//get the entries of the trees
	Long64_t Nentries_singlemuons = chain_in_singlemuon.GetEntries();
	cout<<"Nentries_singlemuons = "<<Nentries_singlemuons<<endl;

	Long64_t Nentries_header = chain_in_header.GetEntries();
	cout<<"Nentries_header = "<<Nentries_header<<endl;

	Long64_t ientry_header = 0;
	Int_t oldTreeNumber = -999;
	if(debug)cout<<__LINE__<<endl;

	//begin to loop the tree
	for(Int_t ientry_singlemuon = 0; ientry_singlemuon < Nentries_singlemuons; ientry_singlemuon++)
	{
		if(ientry_singlemuon%100000==0)cout<<"processing "<<100.0*ientry_singlemuon/Nentries_singlemuons<<"%"<<endl;

		if(debug)cout<<__LINE__<<endl;
		if((chain_in_singlemuon.LoadTree(ientry_singlemuon))<0) break;
		if(debug)cout<<__LINE__<<endl;

		chain_in_singlemuon.GetEntry(ientry_singlemuon);

		ientry_header = chain_in_singlemuon.GetTreeNumber();
		chain_in_header.GetEntry(ientry_header);
		if(runheader) Run_Number = runheader->get_RunNumber();
		else Run_Number = -999;

		if(singlemuoncontainer==NULL) continue;

		UInt_t nSingleMuons = singlemuoncontainer->get_nSingleMuons(); //get single muon number of each event
		if(nSingleMuons<1) continue;                                                                                                                 

		if(debug)cout<<__LINE__<<endl;

		Evt_bbcZ = singlemuoncontainer->get_Evt_bbcZ();
		Evt_bbcZ_Err = singlemuoncontainer->get_Evt_bbcZ_Err();

		Evt_vtxX = singlemuoncontainer->get_Evt_vtxX();
		Evt_vtxX_Err = singlemuoncontainer->get_Evt_vtxX_Err();
		Evt_vtxY = singlemuoncontainer->get_Evt_vtxY();
		Evt_vtxY_Err = singlemuoncontainer->get_Evt_vtxY_Err();
		Evt_vtxZ = singlemuoncontainer->get_Evt_vtxZ();
		Evt_vtxZ_Err = singlemuoncontainer->get_Evt_vtxZ_Err();


		Evt_fvtxX = singlemuoncontainer->get_Evt_fvtxX();
		Evt_fvtxX_Err = singlemuoncontainer->get_Evt_fvtxX_Err();
		Evt_fvtxY = singlemuoncontainer->get_Evt_fvtxY();
		Evt_fvtxY_Err = singlemuoncontainer->get_Evt_fvtxY_Err();
		Evt_fvtxZ = singlemuoncontainer->get_Evt_fvtxZ();
		Evt_fvtxZ_Err = singlemuoncontainer->get_Evt_fvtxZ_Err();


		Evt_fvtxX2 = singlemuoncontainer->get_Evt_fvtxX2();
		Evt_fvtxY2 = singlemuoncontainer->get_Evt_fvtxY2();
		Evt_fvtxZ2 = singlemuoncontainer->get_Evt_fvtxZ2();

		Evt_Cent = singlemuoncontainer->get_Evt_Cent();
		Evt_Mult_FVTXN = singlemuoncontainer->get_Evt_Mult_FVTXN();
		Evt_Mult_FVTXS = singlemuoncontainer->get_Evt_Mult_FVTXS();
		Evt_Mult_SVX = singlemuoncontainer->get_Evt_Mult_SVX();
		Evt_Mult_sFVTXN = singlemuoncontainer->get_Evt_Mult_sFVTXN();
		Evt_Mult_sFVTXS = singlemuoncontainer->get_Evt_Mult_sFVTXS();

		if(debug)cout<<__LINE__<<endl;

		//loop single muon number
		for (Int_t i1=0;i1<nSingleMuons;i1++)
		{
			SingleMuon *singlemuon = (SingleMuon*)singlemuoncontainer->get_SingleMuon(i1);//get entry information 


			px = singlemuon->get_px();
			py = singlemuon->get_py();
			pz = singlemuon->get_pz();
			pt = TMath::Sqrt(px*px+py*py);
			p = TMath::Sqrt(px*px+py*py+pz*pz);

			rapidity = singlemuon->get_rapidity();
			DG0 = singlemuon->get_DG0();
			DDG0 = singlemuon->get_DDG0();
			DS3 = singlemuon->get_DS3();

			trchi2 = singlemuon->get_trchi2();
			idchi2 = singlemuon->get_idchi2();

			ntrhits = singlemuon->get_ntrhits();
			nidhits = singlemuon->get_nidhits();
			lastgap = singlemuon->get_lastgap();


			MUID1D = singlemuon->get_MUID1D();
			MUID1S = singlemuon->get_MUID1S();


			dca_z = singlemuon->get_dca_z();
			dca_r = singlemuon->get_dca_r();

			charge = singlemuon->get_charge();

			x0 = singlemuon->get_x0();
			y0 = singlemuon->get_y0();
			z0 = singlemuon->get_z0();
			r0 = TMath::Sqrt(x0*x0+y0*y0);

			x0_fvtx = singlemuon->get_x0_fvtx();
			y0_fvtx = singlemuon->get_y0_fvtx();
			z0_fvtx = singlemuon->get_z0_fvtx();
			r0_fvtx = TMath::Sqrt(x0_fvtx*x0_fvtx+y0_fvtx*y0_fvtx);

			px_fvtx = singlemuon->get_px_fvtx();
			py_fvtx = singlemuon->get_py_fvtx();
			pz_fvtx = singlemuon->get_pz_fvtx();
			pt_fvtx = TMath::Sqrt(px_fvtx*px_fvtx+py_fvtx*py_fvtx);
			p_fvtx = TMath::Sqrt(px_fvtx*px_fvtx+py_fvtx*py_fvtx+pz_fvtx*pz_fvtx);

			x0_fvtxmutr = singlemuon->get_x0_fvtxmutr();
			y0_fvtxmutr = singlemuon->get_y0_fvtxmutr();
			z0_fvtxmutr = singlemuon->get_z0_fvtxmutr();
			r0_fvtxmutr = TMath::Sqrt(x0_fvtxmutr*x0_fvtxmutr+y0_fvtxmutr*y0_fvtxmutr);

			px_fvtxmutr = singlemuon->get_px_fvtxmutr();
			py_fvtxmutr = singlemuon->get_py_fvtxmutr();
			pz_fvtxmutr = singlemuon->get_pz_fvtxmutr();
			pt_fvtxmutr = TMath::Sqrt(px_fvtxmutr*px_fvtxmutr+py_fvtxmutr*py_fvtxmutr);
			p_fvtxmutr = TMath::Sqrt(px_fvtxmutr*px_fvtxmutr+py_fvtxmutr*py_fvtxmutr+pz_fvtxmutr*pz_fvtxmutr);


			nhits_fvtx = singlemuon->get_nhits_fvtx();
			dphi_fvtx = singlemuon->get_dphi_fvtx();
			dtheta_fvtx = singlemuon->get_dtheta_fvtx();
			dr_fvtx = singlemuon->get_dr_fvtx();
			chi2_fvtx = singlemuon->get_chi2_fvtx();
			chi2_fvtxmutr = singlemuon->get_chi2_fvtxmutr();
			dca_phi = singlemuon->get_dca_phi();

			clusters_size1 = singlemuon->get_clusters_size1();
			nfvtx_tracklets_cone = singlemuon->get_nfvtx_tracklets_cone();
			nfvtx_tracklets = singlemuon->get_nfvtx_tracklets();
			nfvtx_clusters_cone = singlemuon->get_nfvtx_clusters_cone();

			if(debug)cout<<__LINE__<<endl;

			t_out->Fill();

		} //nSingleMuons entries

	} //T entries
	f_out->cd();
	t_out->Write();
	f_out->Close();
	if(debug)cout<<__LINE__<<endl;

} //main 

