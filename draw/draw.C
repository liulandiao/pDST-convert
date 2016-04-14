#include <stdlib.h>
#include <iostream>
#include <stdio.h>
#include <cmath>
#include "TCut.h"
#include "/direct/phenix+u/liuld/root/myinclude/rootall.h"
#include "TCut.h"

TString MYNULL("");
TString in_path("/gpfs/mnt/gpfs02/phenix/spin/spin3/liuld/rootfile/pDst_run15pAu/");
int debug=0;
void draw()
{
	if(debug)cout<<__LINE__<<endl;
	setStyle();

	//gStyle->SetPadColor(0);
	//----------cut value-------
	int nbin_px=100;
	double h_px_range[2]={-10,10};
	int nbin_py=100;
	double h_py_range[2]={-10,10};
	int nbin_pz=100;
	double h_pz_range[2]={-20,20};
	int nbin_pt=100;
	double h_pt_range[2]={0,10};
	int nbin_p=100;
	double h_p_range[2]={0,20};

	int nbin_x0=100;
	double h_x0_range[2]={-30,30};
	int nbin_y0=100;
	double h_y0_range[2]={-30,30};
	int nbin_z0=100;
	double h_z0_range[2]={-40,40};
	int nbin_r0=100;
	double h_r0_range[2]={0,40};

	int nbin_ntrhits=20;
	double h_ntrhits_range[2]={5,25};
	int nbin_nidhits=20;
	double h_nidhits_range[2]={0,20};
	int nbin_nhits_fvtx=10;
	double h_nhits_fvtx_range[2]={0,10};

	int nbin_lastgap=6;
	double h_lastgap_range[2]={0,6};
	int nbin_charge=3;
	double h_charge_range[2]={0,3};
	int nbin_rapidity=100;
	double h_rapidity_range[2]={-3,3};

	int nbin_trchi2=100;
	double h_trchi2_range[2]={0,30};
	int nbin_idchi2=100;
	double h_idchi2_range[2]={0,30};

	int nbin_DG0=100;
	double h_DG0_range[2]={0,60};
	int nbin_DDG0=100;
	double h_DDG0_range[2]={0,25};
	int nbin_DS3=100;
	double h_DS3_range[2]={0,80};

	int nbin_chi2_fvtx=100;
	double h_chi2_fvtx_range[2]={0,500};
	int nbin_chi2_fvtxmutr=500;
	double h_chi2_fvtxmutr_range[2]={0,500};
	
	if(debug)cout<<__LINE__<<endl;
	//-------------------
	//TString s_tree("T");
	//TString s_tree("T23_cut");
	TString s_tree("T4_cut");

	TFile *f_data=new TFile(in_path+"run15pAu.root","READ");
	TTree *t_data=(TTree*)f_data->Get(s_tree);

	if(debug)cout<<__LINE__<<endl;


	TH1F  *h_px=new TH1F("h_px","",nbin_px,h_px_range[0],h_px_range[1]);
	TH1F  *h_py=new TH1F("h_py","",nbin_py,h_py_range[0],h_py_range[1]);
	TH1F  *h_pz=new TH1F("h_pz","",nbin_pz,h_pz_range[0],h_pz_range[1]);
	TH1F  *h_pt=new TH1F("h_pt","",nbin_pt,h_pt_range[0],h_pt_range[1]);
	TH1F  *h_p=new TH1F("h_p","",nbin_p,h_p_range[0],h_p_range[1]);

	TH1F  *h_px_fvtx=new TH1F("h_px_fvtx","",nbin_px,h_px_range[0],h_px_range[1]);
	TH1F  *h_py_fvtx=new TH1F("h_py_fvtx","",nbin_py,h_py_range[0],h_py_range[1]);
	TH1F  *h_pz_fvtx=new TH1F("h_pz_fvtx","",nbin_pz,h_pz_range[0],h_pz_range[1]);
	TH1F  *h_pt_fvtx=new TH1F("h_pt_fvtx","",nbin_pt,h_py_range[0],h_pt_range[1]);
	TH1F  *h_p_fvtx=new TH1F("h_p_fvtx","",nbin_p,h_p_range[0],h_p_range[1]);

	TH1F  *h_px_fvtxmutr=new TH1F("h_px_fvtxmutr","",nbin_px,h_px_range[0],h_px_range[1]);
	TH1F  *h_py_fvtxmutr=new TH1F("h_py_fvtxmutr","",nbin_py,h_py_range[0],h_py_range[1]);
	TH1F  *h_pz_fvtxmutr=new TH1F("h_pz_fvtxmutr","",nbin_pz,h_pz_range[0],h_pz_range[1]);
	TH1F  *h_pt_fvtxmutr=new TH1F("h_pt_fvtxmutr","",nbin_pt,h_pt_range[0],h_pt_range[1]);
	TH1F  *h_p_fvtxmutr=new TH1F("h_p_fvtxmutr","",nbin_p,h_p_range[0],h_p_range[1]);

	TH1F  *h_x0=new TH1F("h_x0","",nbin_x0,h_x0_range[0],h_x0_range[1]);
	TH1F  *h_y0=new TH1F("h_y0","",nbin_y0,h_y0_range[0],h_y0_range[1]);
	TH1F  *h_z0=new TH1F("h_z0","",nbin_z0,h_z0_range[0],h_z0_range[1]);
	TH1F  *h_r0=new TH1F("h_r0","",nbin_r0,h_r0_range[0],h_r0_range[1]);

	TH1F  *h_x0_fvtx=new TH1F("h_x0_fvtx","",nbin_x0,h_x0_range[0],h_x0_range[1]);
	TH1F  *h_y0_fvtx=new TH1F("h_y0_fvtx","",nbin_y0,h_y0_range[0],h_y0_range[1]);
	TH1F  *h_z0_fvtx=new TH1F("h_z0_fvtx","",nbin_z0,h_z0_range[0],h_z0_range[1]);
	TH1F  *h_r0_fvtx=new TH1F("h_r0_fvtx","",nbin_r0,h_r0_range[0],h_r0_range[1]);

	TH1F  *h_x0_fvtxmutr=new TH1F("h_x0_fvtxmutr","",nbin_x0,h_x0_range[0],h_x0_range[1]);
	TH1F  *h_y0_fvtxmutr=new TH1F("h_y0_fvtxmutr","",nbin_y0,h_y0_range[0],h_y0_range[1]);
	TH1F  *h_z0_fvtxmutr=new TH1F("h_z0_fvtxmutr","",nbin_z0,h_z0_range[0],h_z0_range[1]);
	TH1F  *h_r0_fvtxmutr=new TH1F("h_r0_fvtxmutr","",nbin_r0,h_r0_range[0],h_r0_range[1]);

	TH1F  *h_Evt_bbcZ=new TH1F("h_Evt_bbcZ","",nbin_z0,h_z0_range[0],h_z0_range[1]);
	TH1F  *h_ntrhits=new TH1F("h_ntrhits","",nbin_ntrhits,h_ntrhits_range[0],h_ntrhits_range[1]);
	TH1F  *h_nidhits=new TH1F("h_nidhits","",nbin_nidhits,h_nidhits_range[0],h_nidhits_range[1]);
	TH1F  *h_nhits_fvtx=new TH1F("h_nhits_fvtx","",nbin_nhits_fvtx,h_nhits_fvtx_range[0],h_nhits_fvtx_range[1]);
	TH1F  *h_lastgap=new TH1F("h_lastgap","",nbin_lastgap,h_lastgap_range[0],h_lastgap_range[1]);

	TH1F  *h_charge=new TH1F("h_charge","",nbin_charge,h_charge_range[0],h_charge_range[1]);
	TH1F  *h_rapidity=new TH1F("h_rapidity","",nbin_rapidity,h_rapidity_range[0],h_rapidity_range[1]);

	TH1F  *h_trchi2=new TH1F("h_trchi2","",nbin_trchi2,h_trchi2_range[0],h_trchi2_range[1]);
	TH1F  *h_idchi2=new TH1F("h_idchi2","",nbin_idchi2,h_idchi2_range[0],h_idchi2_range[1]);

	TH1F  *h_DG0=new TH1F("h_DG0","",nbin_DG0,h_DG0_range[0],h_DG0_range[1]);
	TH1F  *h_DDG0=new TH1F("h_DDG0","",nbin_DDG0,h_DDG0_range[0],h_DG0_range[1]);
	TH1F  *h_DS3=new TH1F("h_DS3","",nbin_DS3,h_DS3_range[0],h_DS3_range[1]);

	TH1F  *h_chi2_fvtx=new TH1F("h_chi2_fvtx","",nbin_chi2_fvtx,h_chi2_fvtx_range[0],h_chi2_fvtx_range[1]);
	TH1F  *h_chi2_fvtxmutr=new TH1F("h_chi2_fvtxmutr","",nbin_chi2_fvtxmutr,h_chi2_fvtxmutr_range[0],h_chi2_fvtxmutr_range[1]);
	if(debug)cout<<__LINE__<<endl;
	//------------cut--------
	TCut cut1;
	t_data->Project("h_px","px",cut1);
	t_data->Project("h_py","py",cut1);
	t_data->Project("h_pz","pz",cut1);
	t_data->Project("h_pt","pt",cut1);
	t_data->Project("h_p","p",cut1);

	t_data->Project("h_px_fvtx","px_fvtx",cut1);
	t_data->Project("h_py_fvtx","py_fvtx",cut1);
	t_data->Project("h_pz_fvtx","pz_fvtx",cut1);
	t_data->Project("h_pt_fvtx","pt_fvtx",cut1);
	t_data->Project("h_p_fvtx","p_fvtx",cut1);

	t_data->Project("h_px_fvtxmutr","px_fvtxmutr",cut1);
	t_data->Project("h_py_fvtxmutr","py_fvtxmutr",cut1);
	t_data->Project("h_pz_fvtxmutr","pz_fvtxmutr",cut1);
	t_data->Project("h_pt_fvtxmutr","pt_fvtxmutr",cut1);
	t_data->Project("h_p_fvtxmutr","p_fvtxmutr",cut1);

	t_data->Project("h_x0","x0",cut1);
	t_data->Project("h_y0","y0",cut1);
	t_data->Project("h_z0","z0",cut1);
	t_data->Project("h_r0","r0",cut1);

	t_data->Project("h_x0_fvtx","x0_fvtx",cut1);
	t_data->Project("h_y0_fvtx","y0_fvtx",cut1);
	t_data->Project("h_z0_fvtx","z0_fvtx",cut1);
	t_data->Project("h_r0_fvtx","r0_fvtx",cut1);

	t_data->Project("h_x0_fvtxmutr","x0_fvtxmutr",cut1);
	t_data->Project("h_y0_fvtxmutr","y0_fvtxmutr",cut1);
	t_data->Project("h_z0_fvtxmutr","z0_fvtxmutr",cut1);
	t_data->Project("h_r0_fvtxmutr","r0_fvtxmutr",cut1);

	t_data->Project("h_Evt_bbcZ","Evt_bbcZ",cut1);
	t_data->Project("h_ntrhits","ntrhits",cut1);
	t_data->Project("h_nidhits","nidhits",cut1);
	t_data->Project("h_nhits_fvtx","nhits_fvtx",cut1);
	t_data->Project("h_lastgap","lastgap",cut1);

	t_data->Project("h_charge","charge",cut1);
	t_data->Project("h_rapidity","rapidity",cut1);

	t_data->Project("h_trchi2","trchi2",cut1);
	t_data->Project("h_idchi2","idchi2",cut1);

	t_data->Project("h_DG0","DG0",cut1);
	t_data->Project("h_DDG0","DDG0",cut1);
	t_data->Project("h_DS3","DS3",cut1);

	t_data->Project("h_chi2_fvtx","chi2_fvtx",cut1);
	t_data->Project("h_chi2_fvtxmutr","chi2_fvtxmutr",cut1);
	if(debug)cout<<__LINE__<<endl;

	//----pxyzt----
	TLegend *lg_px =new TLegend(.7,.69,.95,.95);
	lg_px->AddEntry(h_px ,"px","lp");
	lg_px->AddEntry(h_px_fvtx ,"px_fvtx","lp");
	lg_px->AddEntry(h_px_fvtxmutr ,"px_fvtxmutr","lp");
	lg_px->SetTextSize(0.035);
	lg_px->SetFillStyle(0);

	TLegend *lg_py =new TLegend(.7,.69,.95,.95);
	lg_py->AddEntry(h_py ,"py","lp");
	lg_py->AddEntry(h_py_fvtx ,"py_fvtx","lp");
	lg_py->AddEntry(h_py_fvtxmutr ,"py_fvtxmutr","lp");
	lg_py->SetTextSize(0.035);
	lg_py->SetFillStyle(0);

	TLegend *lg_pz =new TLegend(.7,.69,.95,.95);
	lg_pz->AddEntry(h_pz ,"pz","lp");
	lg_pz->AddEntry(h_pz_fvtx ,"pz_fvtx","lp");
	lg_pz->AddEntry(h_pz_fvtxmutr ,"pz_fvtxmutr","lp");
	lg_pz->SetTextSize(0.035);
	lg_pz->SetFillStyle(0);

	TLegend *lg_pt =new TLegend(.7,.69,.95,.95);
	lg_pt->AddEntry(h_pt,"pt","lp");
	lg_pt->AddEntry(h_pt_fvtx ,"pt_fvtx","lp");
	lg_pt->AddEntry(h_pt_fvtxmutr ,"pt_fvtxmutr","lp");
	lg_pt->SetTextSize(0.035);
	lg_pt->SetFillStyle(0);

	TLegend *lg_p =new TLegend(.7,.69,.95,.95);
	lg_p->AddEntry(h_p ,"p","lp");
	lg_p->AddEntry(h_p_fvtx ,"p_fvtx","lp");
	lg_p->AddEntry(h_p_fvtxmutr ,"p_fvtxmutr","lp");
	lg_p->SetTextSize(0.035);
	lg_p->SetFillStyle(0);
	if(debug)cout<<__LINE__<<endl;

	TCanvas *c_pxyzt= new TCanvas("c_pxyzt","",1600,800);
	c_pxyzt->Divide(3,2);
	c_pxyzt->cd(1);
	h_px->GetXaxis()->SetTitle("px");
//	h_px->GetYaxis()->SetTitle("number");
	h_px->SetLineColor(2);
	h_px_fvtx->SetLineColor(4);
	h_px_fvtxmutr->SetLineColor(3);
	h_px->Draw();
	h_px_fvtx->Draw("same");
	h_px_fvtxmutr->Draw("same");
	lg_px->Draw();

	c_pxyzt->cd(2);
	h_py->GetXaxis()->SetTitle("py");
//	h_py->GetYaxis()->SetTitle("number");
	h_py->SetLineColor(2);
	h_py_fvtx->SetLineColor(4);
	h_py_fvtxmutr->SetLineColor(3);
	h_py->Draw();
	h_py_fvtx->Draw("same");
	h_py_fvtxmutr->Draw("same");
	lg_py->Draw();

	c_pxyzt->cd(3);
	h_pz->GetXaxis()->SetTitle("pz");
//	h_pz->GetYaxis()->SetTitle("number");
	h_pz->SetLineColor(2);
	h_pz_fvtx->SetLineColor(4);
	h_pz_fvtxmutr->SetLineColor(3);
	h_pz->Draw();
	h_pz_fvtx->Draw("same");
	h_pz_fvtxmutr->Draw("same");
	lg_pz->Draw();

	c_pxyzt->cd(4);
	h_pt->GetXaxis()->SetTitle("pt");
//	h_pt->GetYaxis()->SetTitle("number");
	h_pt->SetLineColor(2);
	h_pt_fvtx->SetLineColor(4);
	h_pt_fvtxmutr->SetLineColor(3);
	h_pt->Draw();
	h_pt_fvtx->Draw("same");
	h_pt_fvtxmutr->Draw("same");
	lg_pt->Draw();

	c_pxyzt->cd(5);
	h_p->GetXaxis()->SetTitle("p");
//	h_p->GetYaxis()->SetTitle("number");
	h_p->SetLineColor(2);
	h_p_fvtx->SetLineColor(4);
	h_p_fvtxmutr->SetLineColor(3);
	h_p->Draw();
	h_p_fvtx->Draw("same");
	h_p_fvtxmutr->Draw("same");
	lg_p->Draw();
	c_pxyzt->Update();
	if(debug)cout<<__LINE__<<endl;
	//----xyzr----
	TLegend *lg_x0 =new TLegend(.7,.69,.95,.95);
	lg_x0->AddEntry(h_x0 ,"x0","lp");
	lg_x0->AddEntry(h_x0_fvtx ,"x0_fvtx","lp");
	lg_x0->AddEntry(h_x0_fvtxmutr ,"x0_fvtxmutr","lp");
	lg_x0->SetTextSize(0.035);
	lg_x0->SetFillStyle(0);

	TLegend *lg_y0 =new TLegend(.7,.69,.95,.95);
	lg_y0->AddEntry(h_y0 ,"y0","lp");
	lg_y0->AddEntry(h_y0_fvtx ,"y0_fvtx","lp");
	lg_y0->AddEntry(h_y0_fvtxmutr ,"y0_fvtxmutr","lp");
	lg_y0->SetTextSize(0.035);
	lg_y0->SetFillStyle(0);

	TLegend *lg_z0 =new TLegend(.7,.69,.95,.95);
	lg_z0->AddEntry(h_z0 ,"z0","lp");
	lg_z0->AddEntry(h_z0_fvtx ,"z0_fvtx","lp");
	lg_z0->AddEntry(h_z0_fvtxmutr ,"z0_fvtxmutr","lp");
	lg_z0->SetTextSize(0.035);
	lg_z0->SetFillStyle(0);

	TLegend *lg_r0 =new TLegend(.7,.69,.95,.95);
	lg_r0->AddEntry(h_r0,"r0","lp");
	lg_r0->AddEntry(h_r0_fvtx ,"r0_fvtx","lp");
	lg_r0->AddEntry(h_r0_fvtxmutr ,"r0_fvtxmutr","lp");
	lg_r0->SetTextSize(0.035);
	lg_r0->SetFillStyle(0);
	if(debug)cout<<__LINE__<<endl;


	TCanvas *c_xyzr= new TCanvas("c_xyzr","",1600,1000);
	c_xyzr->Divide(2,2);
	c_xyzr->cd(1);
	h_x0_fvtxmutr->GetXaxis()->SetTitle("x0");
//	h_x0_fvtxmutr->GetYaxis()->SetTitle("number");
	h_x0->SetLineColor(2);
	h_x0_fvtx->SetLineColor(4);
	h_x0_fvtxmutr->SetLineColor(3);
	h_x0_fvtxmutr->Draw();
	h_x0_fvtx->Draw("same");
	h_x0->Draw("same");
	lg_x0->Draw();

	c_xyzr->cd(2);
	h_y0_fvtxmutr->GetXaxis()->SetTitle("y0");
//	h_y0_fvtxmutr->GetYaxis()->SetTitle("number");
	h_y0->SetLineColor(2);
	h_y0_fvtx->SetLineColor(4);
	h_y0_fvtxmutr->SetLineColor(3);
	h_y0_fvtxmutr->Draw();
	h_y0_fvtx->Draw("same");
	h_y0->Draw("same");
	lg_y0->Draw();

	c_xyzr->cd(3);
	h_z0->GetXaxis()->SetTitle("z0");
//	h_z0_fvtx->GetYaxis()->SetTitle("number");
	h_z0->SetLineColor(2);
	h_z0_fvtx->SetLineColor(4);
	h_z0_fvtxmutr->SetLineColor(3);
	h_z0->Draw();
	h_z0_fvtxmutr->Draw("same");
	h_z0_fvtx->Draw("same");
	lg_z0->Draw();

	c_xyzr->cd(4);
	h_r0_fvtxmutr->GetXaxis()->SetTitle("r0");
//	h_r0_fvtxmutr->GetYaxis()->SetTitle("number");
	h_r0->SetLineColor(2);
	h_r0_fvtx->SetLineColor(4);
	h_r0_fvtxmutr->SetLineColor(3);
	h_r0_fvtxmutr->Draw();
	h_r0_fvtx->Draw("same");
	h_r0->Draw("same");
	lg_r0->Draw();

	c_xyzr->Update();

	if(debug)cout<<__LINE__<<endl;

	//----hits----
	TLegend *lg_ntrhits =new TLegend(.7,.79,.95,.95);
	lg_ntrhits->AddEntry(h_ntrhits,"ntrhits","lp");
	lg_ntrhits->SetTextSize(0.035);
	lg_ntrhits->SetFillStyle(0);
    if(debug)cout<<__LINE__<<endl;
	
	TLegend *lg_nidhits =new TLegend(.7,.79,.95,.95);
	lg_nidhits->AddEntry(h_nidhits,"nidhits","lp");
	lg_nidhits->SetTextSize(0.035);
	lg_nidhits->SetFillStyle(0);
	
	TLegend *lg_nhits_fvtx =new TLegend(.7,.79,.95,.95);
	lg_nhits_fvtx->AddEntry(h_nhits_fvtx,"nhits_fvtx","lp");
	lg_nhits_fvtx->SetTextSize(0.035);
	lg_nhits_fvtx->SetFillStyle(0);

    
	TCanvas *c_nhits= new TCanvas("c_nhits","",1600,500);
	
	c_nhits->Divide(3,1);
	c_nhits->cd(1);
	h_ntrhits->GetXaxis()->SetTitle("ntrhits");
//	h_ntrhits->GetYaxis()->SetTitle("number");
	h_ntrhits->SetLineColor(2);
	h_ntrhits->Draw();
	lg_ntrhits->Draw();
	 
	c_nhits->cd(2);
	h_nidhits->GetXaxis()->SetTitle("nidhits");
//	h_nidhits->GetYaxis()->SetTitle("number");
	h_nidhits->SetLineColor(2);
	h_nidhits->Draw();
	lg_nidhits->Draw();

	c_nhits->cd(3);
	h_nhits_fvtx->GetXaxis()->SetTitle("nhits_fvtx");
//	h_nhits_fvtx->GetYaxis()->SetTitle("number");
	h_nhits_fvtx->SetLineColor(2);
	h_nhits_fvtx->Draw();
	lg_nhits_fvtx->Draw();
	
	c_nhits->Update();
	if(debug)cout<<__LINE__<<endl;
	//
	TLegend *lg_rapidity =new TLegend(.7,.79,.95,.95);
	lg_rapidity->AddEntry(h_rapidity,"rapidity","lp");
	lg_rapidity->SetTextSize(0.035);
	lg_rapidity->SetFillStyle(0);
    if(debug)cout<<__LINE__<<endl;
	
	TLegend *lg_lastgap =new TLegend(.7,.79,.95,.95);
	lg_lastgap->AddEntry(h_lastgap,"lastgap","lp");
	lg_lastgap->SetTextSize(0.035);
	lg_lastgap->SetFillStyle(0);
	
	TLegend *lg_charge =new TLegend(.7,.79,.95,.95);
	lg_charge->AddEntry(h_charge,"charge","lp");
	lg_charge->SetTextSize(0.035);
	lg_charge->SetFillStyle(0);
	
	TLegend *lg_Evt_bbcZ =new TLegend(.7,.79,.95,.95);
	lg_Evt_bbcZ->AddEntry(h_Evt_bbcZ,"Evt_bbcZ","lp");
	lg_Evt_bbcZ->SetTextSize(0.035);
	lg_Evt_bbcZ->SetFillStyle(0);

    
	TCanvas *c_1= new TCanvas("c_1","",1600,800);
	
	c_1->Divide(2,2);
	c_1->cd(1);
	h_rapidity->GetXaxis()->SetTitle("rapidity");
//	h_rapidity->GetYaxis()->SetTitle("number");
	h_rapidity->SetLineColor(2);
	h_rapidity->Draw();
	lg_rapidity->Draw();
	 
	c_1->cd(2);
	h_lastgap->GetXaxis()->SetTitle("lastgap");
//	h_lastgap->GetYaxis()->SetTitle("number");
	h_lastgap->SetLineColor(2);
	h_lastgap->Draw();
	lg_lastgap->Draw();

	c_1->cd(3);
	h_charge->GetXaxis()->SetTitle("charge");
//	h_charge->GetYaxis()->SetTitle("number");
	h_charge->SetLineColor(2);
	h_charge->Draw();
	lg_charge->Draw();
	
	c_1->cd(4);
	h_Evt_bbcZ->GetXaxis()->SetTitle("Evt_bbcZ");
//	h_Evt_bbcZ->GetYaxis()->SetTitle("number");
	h_Evt_bbcZ->SetLineColor(2);
	h_Evt_bbcZ->Draw();
	lg_Evt_bbcZ->Draw();
	
	c_1->Update();
	
	///
	TLegend *lg_DG0 =new TLegend(.7,.79,.95,.95);
	lg_DG0->AddEntry(h_DG0,"DG0","lp");
	lg_DG0->SetTextSize(0.035);
	lg_DG0->SetFillStyle(0);
    if(debug)cout<<__LINE__<<endl;
	
	TLegend *lg_DDG0 =new TLegend(.7,.79,.95,.95);
	lg_DDG0->AddEntry(h_DDG0,"DDG0","lp");
	lg_DDG0->SetTextSize(0.035);
	lg_DDG0->SetFillStyle(0);
	
	TLegend *lg_DS3 =new TLegend(.7,.79,.95,.95);
	lg_DS3->AddEntry(h_DS3,"DS3","lp");
	lg_DS3->SetTextSize(0.035);
	lg_DS3->SetFillStyle(0);
    
	TCanvas *c_2= new TCanvas("c_2","",1600,500);
	
	c_2->Divide(3,1);
	c_2->cd(1);
	h_DG0->GetXaxis()->SetTitle("DG0");
//	h_DG0->GetYaxis()->SetTitle("number");
	h_DG0->SetLineColor(2);
	h_DG0->Draw();
	lg_DG0->Draw();
	 
	c_2->cd(2);
	h_DDG0->GetXaxis()->SetTitle("DDG0");
//	h_DDG0->GetYaxis()->SetTitle("number");
	h_DDG0->SetLineColor(2);
	h_DDG0->Draw();
	lg_DDG0->Draw();

	c_2->cd(3);
	h_DS3->GetXaxis()->SetTitle("DS3");
//	h_DS3->GetYaxis()->SetTitle("number");
	h_DS3->SetLineColor(2);
	h_DS3->Draw();
	lg_DS3->Draw();
	
	c_1->Update();
	
	//
	TLegend *lg_trchi2 =new TLegend(.7,.79,.95,.95);
	lg_trchi2->AddEntry(h_trchi2,"trchi2","lp");
	lg_trchi2->SetTextSize(0.035);
	lg_trchi2->SetFillStyle(0);
    if(debug)cout<<__LINE__<<endl;
	
	TLegend *lg_idchi2 =new TLegend(.7,.79,.95,.95);
	lg_idchi2->AddEntry(h_idchi2,"idchi2","lp");
	lg_idchi2->SetTextSize(0.035);
	lg_idchi2->SetFillStyle(0);
	
	TCanvas *c_3= new TCanvas("c_3","",1600,500);
	
	c_3->Divide(2,1);
	c_3->cd(1);
	h_trchi2->GetXaxis()->SetTitle("trchi2");
//	h_trchi2->GetYaxis()->SetTitle("number");
	h_trchi2->SetLineColor(2);
	h_trchi2->Draw();
	lg_trchi2->Draw();
	 
	c_3->cd(2);
	h_idchi2->GetXaxis()->SetTitle("idchi2");
//	h_idchi2->GetYaxis()->SetTitle("number");
	h_idchi2->SetLineColor(2);
	h_idchi2->Draw();
	lg_idchi2->Draw();
	
	c_3->Update();
}
