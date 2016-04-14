//////////////////////////////////////////////////////////
// This class has been automatically generated on
// Wed Apr  6 11:14:13 2016 by ROOT version 5.30/03
// from TChain T/
//////////////////////////////////////////////////////////

#ifndef MyClass_h
#define MyClass_h

#include <TROOT.h>
#include <TChain.h>
#include <TFile.h>

class MyClass {
public :
   TTree          *fChain;   //!pointer to the analyzed TTree or TChain
   Int_t           fCurrent; //!current Tree number in a TChain

   // Declaration of leaf types
   Int_t           Run_Number;
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
   Int_t           nSingleMuons;
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
   ULong64_t       nfvtx_tracklets_cone;
   UInt_t          nfvtx_tracklets;
   ULong64_t       nfvtx_clusters_cone;

   // List of branches
   TBranch        *b_Run_Number;   //!
   TBranch        *b_Evt_bbcZ;   //!
   TBranch        *b_Evt_bbcZ_Err;   //!
   TBranch        *b_Evt_vtxX;   //!
   TBranch        *b_Evt_vtxX_Err;   //!
   TBranch        *b_Evt_vtxY;   //!
   TBranch        *b_Evt_vtxY_Err;   //!
   TBranch        *b_Evt_vtxZ;   //!
   TBranch        *b_Evt_vtxZ_Err;   //!
   TBranch        *b_Evt_fvtxX;   //!
   TBranch        *b_Evt_fvtxX_Err;   //!
   TBranch        *b_Evt_fvtxY;   //!
   TBranch        *b_Evt_fvtxY_Err;   //!
   TBranch        *b_Evt_fvtxZ;   //!
   TBranch        *b_Evt_fvtxZ_Err;   //!
   TBranch        *b_Evt_fvtxX2;   //!
   TBranch        *b_Evt_fvtxY2;   //!
   TBranch        *b_Evt_fvtxZ2;   //!
   TBranch        *b_Evt_Cent;   //!
   TBranch        *b_Evt_Mult_FVTXN;   //!
   TBranch        *b_Evt_Mult_FVTXS;   //!
   TBranch        *b_Evt_Mult_SVX;   //!
   TBranch        *b_Evt_Mult_sFVTXN;   //!
   TBranch        *b_Evt_Mult_sFVTXS;   //!
   TBranch        *b_nSingleMuons;   //!
   TBranch        *b_px;   //!
   TBranch        *b_py;   //!
   TBranch        *b_pz;   //!
   TBranch        *b_pt;   //!
   TBranch        *b_p;   //!
   TBranch        *b_rapidity;   //!
   TBranch        *b_DG0;   //!
   TBranch        *b_DDG0;   //!
   TBranch        *b_DS3;   //!
   TBranch        *b_trchi2;   //!
   TBranch        *b_idchi2;   //!
   TBranch        *b_ntrhits;   //!
   TBranch        *b_nidhits;   //!
   TBranch        *b_lastgap;   //!
   TBranch        *b_MUID1D;   //!
   TBranch        *b_MUID1S;   //!
   TBranch        *b_dca_z;   //!
   TBranch        *b_dca_r;   //!
   TBranch        *b_charge;   //!
   TBranch        *b_x0;   //!
   TBranch        *b_y0;   //!
   TBranch        *b_z0;   //!
   TBranch        *b_r0;   //!
   TBranch        *b_x0_fvtx;   //!
   TBranch        *b_y0_fvtx;   //!
   TBranch        *b_z0_fvtx;   //!
   TBranch        *b_r0_fvtx;   //!
   TBranch        *b_px_fvtx;   //!
   TBranch        *b_py_fvtx;   //!
   TBranch        *b_pz_fvtx;   //!
   TBranch        *b_pt_fvtx;   //!
   TBranch        *b_p_fvtx;   //!
   TBranch        *b_x0_fvtxmutr;   //!
   TBranch        *b_y0_fvtxmutr;   //!
   TBranch        *b_z0_fvtxmutr;   //!
   TBranch        *b_r0_fvtxmutr;   //!
   TBranch        *b_px_fvtxmutr;   //!
   TBranch        *b_py_fvtxmutr;   //!
   TBranch        *b_pz_fvtxmutr;   //!
   TBranch        *b_pt_fvtxmutr;   //!
   TBranch        *b_p_fvtxmutr;   //!
   TBranch        *b_nhits_fvtx;   //!
   TBranch        *b_dphi_fvtx;   //!
   TBranch        *b_dtheta_fvtx;   //!
   TBranch        *b_dr_fvtx;   //!
   TBranch        *b_chi2_fvtx;   //!
   TBranch        *b_chi2_fvtxmutr;   //!
   TBranch        *b_dca_phi;   //!
   TBranch        *b_clusters_size1;   //!
   TBranch        *b_nfvtx_tracklets_cone;   //!
   TBranch        *b_nfvtx_tracklets;   //!
   TBranch        *b_nfvtx_clusters_cone;   //!

   MyClass(TTree *tree=0);
   virtual ~MyClass();
   virtual Int_t    Cut(Long64_t entry);
   virtual Int_t    GetEntry(Long64_t entry);
   virtual Long64_t LoadTree(Long64_t entry);
   virtual void     Init(TTree *tree);
   virtual void     Loop();
   virtual Bool_t   Notify();
   virtual void     Show(Long64_t entry = -1);
};

#endif

#ifdef MyClass_cxx
MyClass::MyClass(TTree *tree)
{
// if parameter tree is not specified (or zero), connect the file
// used to generate this class and read the Tree.
   if (tree == 0) {

#ifdef SINGLE_TREE
      // The following code should be used if you want this class to access
      // a single tree instead of a chain
      TFile *f = (TFile*)gROOT->GetListOfFiles()->FindObject("Memory Directory");
      if (!f || !f->IsOpen()) {
         f = new TFile("Memory Directory");
      }
      f->GetObject("T",tree);

#else // SINGLE_TREE

      // The following code should be used if you want this class to access a chain
      // of trees.
      TChain * chain = new TChain("T","");
      chain->Add("/gpfs/mnt/gpfs02/phenix/spin/spin3/liuld/pDST_study/simroot/scan/2001/simpleroot.root/T");
      chain->Add("/gpfs/mnt/gpfs02/phenix/spin/spin3/liuld/pDST_study/simroot/scan/2002/simpleroot.root/T");
      chain->Add("/gpfs/mnt/gpfs02/phenix/spin/spin3/liuld/pDST_study/simroot/scan/2003/simpleroot.root/T");
      chain->Add("/gpfs/mnt/gpfs02/phenix/spin/spin3/liuld/pDST_study/simroot/scan/2004/simpleroot.root/T");
      chain->Add("/gpfs/mnt/gpfs02/phenix/spin/spin3/liuld/pDST_study/simroot/scan/2005/simpleroot.root/T");
      chain->Add("/gpfs/mnt/gpfs02/phenix/spin/spin3/liuld/pDST_study/simroot/scan/2006/simpleroot.root/T");
      chain->Add("/gpfs/mnt/gpfs02/phenix/spin/spin3/liuld/pDST_study/simroot/scan/2007/simpleroot.root/T");
      chain->Add("/gpfs/mnt/gpfs02/phenix/spin/spin3/liuld/pDST_study/simroot/scan/2008/simpleroot.root/T");
      chain->Add("/gpfs/mnt/gpfs02/phenix/spin/spin3/liuld/pDST_study/simroot/scan/2009/simpleroot.root/T");
      chain->Add("/gpfs/mnt/gpfs02/phenix/spin/spin3/liuld/pDST_study/simroot/scan/2010/simpleroot.root/T");
      chain->Add("/gpfs/mnt/gpfs02/phenix/spin/spin3/liuld/pDST_study/simroot/scan/2011/simpleroot.root/T");
      chain->Add("/gpfs/mnt/gpfs02/phenix/spin/spin3/liuld/pDST_study/simroot/scan/2012/simpleroot.root/T");
      chain->Add("/gpfs/mnt/gpfs02/phenix/spin/spin3/liuld/pDST_study/simroot/scan/2013/simpleroot.root/T");
      chain->Add("/gpfs/mnt/gpfs02/phenix/spin/spin3/liuld/pDST_study/simroot/scan/2014/simpleroot.root/T");
      chain->Add("/gpfs/mnt/gpfs02/phenix/spin/spin3/liuld/pDST_study/simroot/scan/2015/simpleroot.root/T");
      chain->Add("/gpfs/mnt/gpfs02/phenix/spin/spin3/liuld/pDST_study/simroot/scan/2016/simpleroot.root/T");
      chain->Add("/gpfs/mnt/gpfs02/phenix/spin/spin3/liuld/pDST_study/simroot/scan/2017/simpleroot.root/T");
      chain->Add("/gpfs/mnt/gpfs02/phenix/spin/spin3/liuld/pDST_study/simroot/scan/2018/simpleroot.root/T");
      chain->Add("/gpfs/mnt/gpfs02/phenix/spin/spin3/liuld/pDST_study/simroot/scan/2019/simpleroot.root/T");
      chain->Add("/gpfs/mnt/gpfs02/phenix/spin/spin3/liuld/pDST_study/simroot/scan/2020/simpleroot.root/T");
      chain->Add("/gpfs/mnt/gpfs02/phenix/spin/spin3/liuld/pDST_study/simroot/scan/2021/simpleroot.root/T");
      chain->Add("/gpfs/mnt/gpfs02/phenix/spin/spin3/liuld/pDST_study/simroot/scan/2022/simpleroot.root/T");
      chain->Add("/gpfs/mnt/gpfs02/phenix/spin/spin3/liuld/pDST_study/simroot/scan/2023/simpleroot.root/T");
      chain->Add("/gpfs/mnt/gpfs02/phenix/spin/spin3/liuld/pDST_study/simroot/scan/2024/simpleroot.root/T");
      chain->Add("/gpfs/mnt/gpfs02/phenix/spin/spin3/liuld/pDST_study/simroot/scan/2025/simpleroot.root/T");
      chain->Add("/gpfs/mnt/gpfs02/phenix/spin/spin3/liuld/pDST_study/simroot/scan/2026/simpleroot.root/T");
      chain->Add("/gpfs/mnt/gpfs02/phenix/spin/spin3/liuld/pDST_study/simroot/scan/2027/simpleroot.root/T");
      chain->Add("/gpfs/mnt/gpfs02/phenix/spin/spin3/liuld/pDST_study/simroot/scan/2028/simpleroot.root/T");
      chain->Add("/gpfs/mnt/gpfs02/phenix/spin/spin3/liuld/pDST_study/simroot/scan/2029/simpleroot.root/T");
      chain->Add("/gpfs/mnt/gpfs02/phenix/spin/spin3/liuld/pDST_study/simroot/scan/2030/simpleroot.root/T");
      chain->Add("/gpfs/mnt/gpfs02/phenix/spin/spin3/liuld/pDST_study/simroot/scan/2031/simpleroot.root/T");
      chain->Add("/gpfs/mnt/gpfs02/phenix/spin/spin3/liuld/pDST_study/simroot/scan/2032/simpleroot.root/T");
      chain->Add("/gpfs/mnt/gpfs02/phenix/spin/spin3/liuld/pDST_study/simroot/scan/2033/simpleroot.root/T");
      chain->Add("/gpfs/mnt/gpfs02/phenix/spin/spin3/liuld/pDST_study/simroot/scan/2034/simpleroot.root/T");
      chain->Add("/gpfs/mnt/gpfs02/phenix/spin/spin3/liuld/pDST_study/simroot/scan/2035/simpleroot.root/T");
      chain->Add("/gpfs/mnt/gpfs02/phenix/spin/spin3/liuld/pDST_study/simroot/scan/2036/simpleroot.root/T");
      chain->Add("/gpfs/mnt/gpfs02/phenix/spin/spin3/liuld/pDST_study/simroot/scan/2037/simpleroot.root/T");
      chain->Add("/gpfs/mnt/gpfs02/phenix/spin/spin3/liuld/pDST_study/simroot/scan/2038/simpleroot.root/T");
      chain->Add("/gpfs/mnt/gpfs02/phenix/spin/spin3/liuld/pDST_study/simroot/scan/2039/simpleroot.root/T");
      chain->Add("/gpfs/mnt/gpfs02/phenix/spin/spin3/liuld/pDST_study/simroot/scan/2040/simpleroot.root/T");
      chain->Add("/gpfs/mnt/gpfs02/phenix/spin/spin3/liuld/pDST_study/simroot/scan/2041/simpleroot.root/T");
      chain->Add("/gpfs/mnt/gpfs02/phenix/spin/spin3/liuld/pDST_study/simroot/scan/2042/simpleroot.root/T");
      chain->Add("/gpfs/mnt/gpfs02/phenix/spin/spin3/liuld/pDST_study/simroot/scan/2043/simpleroot.root/T");
      chain->Add("/gpfs/mnt/gpfs02/phenix/spin/spin3/liuld/pDST_study/simroot/scan/2044/simpleroot.root/T");
      chain->Add("/gpfs/mnt/gpfs02/phenix/spin/spin3/liuld/pDST_study/simroot/scan/2045/simpleroot.root/T");
      chain->Add("/gpfs/mnt/gpfs02/phenix/spin/spin3/liuld/pDST_study/simroot/scan/2046/simpleroot.root/T");
      chain->Add("/gpfs/mnt/gpfs02/phenix/spin/spin3/liuld/pDST_study/simroot/scan/2047/simpleroot.root/T");
      chain->Add("/gpfs/mnt/gpfs02/phenix/spin/spin3/liuld/pDST_study/simroot/scan/2048/simpleroot.root/T");
      chain->Add("/gpfs/mnt/gpfs02/phenix/spin/spin3/liuld/pDST_study/simroot/scan/2049/simpleroot.root/T");
      chain->Add("/gpfs/mnt/gpfs02/phenix/spin/spin3/liuld/pDST_study/simroot/scan/2050/simpleroot.root/T");
      chain->Add("/gpfs/mnt/gpfs02/phenix/spin/spin3/liuld/pDST_study/simroot/scan/2051/simpleroot.root/T");
      chain->Add("/gpfs/mnt/gpfs02/phenix/spin/spin3/liuld/pDST_study/simroot/scan/2052/simpleroot.root/T");
      chain->Add("/gpfs/mnt/gpfs02/phenix/spin/spin3/liuld/pDST_study/simroot/scan/2053/simpleroot.root/T");
      chain->Add("/gpfs/mnt/gpfs02/phenix/spin/spin3/liuld/pDST_study/simroot/scan/2054/simpleroot.root/T");
      chain->Add("/gpfs/mnt/gpfs02/phenix/spin/spin3/liuld/pDST_study/simroot/scan/2055/simpleroot.root/T");
      chain->Add("/gpfs/mnt/gpfs02/phenix/spin/spin3/liuld/pDST_study/simroot/scan/2056/simpleroot.root/T");
      chain->Add("/gpfs/mnt/gpfs02/phenix/spin/spin3/liuld/pDST_study/simroot/scan/2057/simpleroot.root/T");
      chain->Add("/gpfs/mnt/gpfs02/phenix/spin/spin3/liuld/pDST_study/simroot/scan/2058/simpleroot.root/T");
      chain->Add("/gpfs/mnt/gpfs02/phenix/spin/spin3/liuld/pDST_study/simroot/scan/2059/simpleroot.root/T");
      chain->Add("/gpfs/mnt/gpfs02/phenix/spin/spin3/liuld/pDST_study/simroot/scan/2060/simpleroot.root/T");
      chain->Add("/gpfs/mnt/gpfs02/phenix/spin/spin3/liuld/pDST_study/simroot/scan/2061/simpleroot.root/T");
      chain->Add("/gpfs/mnt/gpfs02/phenix/spin/spin3/liuld/pDST_study/simroot/scan/2062/simpleroot.root/T");
      chain->Add("/gpfs/mnt/gpfs02/phenix/spin/spin3/liuld/pDST_study/simroot/scan/2063/simpleroot.root/T");
      chain->Add("/gpfs/mnt/gpfs02/phenix/spin/spin3/liuld/pDST_study/simroot/scan/2064/simpleroot.root/T");
      chain->Add("/gpfs/mnt/gpfs02/phenix/spin/spin3/liuld/pDST_study/simroot/scan/2065/simpleroot.root/T");
      chain->Add("/gpfs/mnt/gpfs02/phenix/spin/spin3/liuld/pDST_study/simroot/scan/2066/simpleroot.root/T");
      chain->Add("/gpfs/mnt/gpfs02/phenix/spin/spin3/liuld/pDST_study/simroot/scan/2067/simpleroot.root/T");
      chain->Add("/gpfs/mnt/gpfs02/phenix/spin/spin3/liuld/pDST_study/simroot/scan/2068/simpleroot.root/T");
      chain->Add("/gpfs/mnt/gpfs02/phenix/spin/spin3/liuld/pDST_study/simroot/scan/2069/simpleroot.root/T");
      chain->Add("/gpfs/mnt/gpfs02/phenix/spin/spin3/liuld/pDST_study/simroot/scan/2070/simpleroot.root/T");
      chain->Add("/gpfs/mnt/gpfs02/phenix/spin/spin3/liuld/pDST_study/simroot/scan/2071/simpleroot.root/T");
      chain->Add("/gpfs/mnt/gpfs02/phenix/spin/spin3/liuld/pDST_study/simroot/scan/2072/simpleroot.root/T");
      chain->Add("/gpfs/mnt/gpfs02/phenix/spin/spin3/liuld/pDST_study/simroot/scan/2073/simpleroot.root/T");
      chain->Add("/gpfs/mnt/gpfs02/phenix/spin/spin3/liuld/pDST_study/simroot/scan/2074/simpleroot.root/T");
      chain->Add("/gpfs/mnt/gpfs02/phenix/spin/spin3/liuld/pDST_study/simroot/scan/2075/simpleroot.root/T");
      chain->Add("/gpfs/mnt/gpfs02/phenix/spin/spin3/liuld/pDST_study/simroot/scan/2076/simpleroot.root/T");
      chain->Add("/gpfs/mnt/gpfs02/phenix/spin/spin3/liuld/pDST_study/simroot/scan/2077/simpleroot.root/T");
      chain->Add("/gpfs/mnt/gpfs02/phenix/spin/spin3/liuld/pDST_study/simroot/scan/2078/simpleroot.root/T");
      chain->Add("/gpfs/mnt/gpfs02/phenix/spin/spin3/liuld/pDST_study/simroot/scan/2079/simpleroot.root/T");
      chain->Add("/gpfs/mnt/gpfs02/phenix/spin/spin3/liuld/pDST_study/simroot/scan/2080/simpleroot.root/T");
      chain->Add("/gpfs/mnt/gpfs02/phenix/spin/spin3/liuld/pDST_study/simroot/scan/2081/simpleroot.root/T");
      chain->Add("/gpfs/mnt/gpfs02/phenix/spin/spin3/liuld/pDST_study/simroot/scan/2082/simpleroot.root/T");
      chain->Add("/gpfs/mnt/gpfs02/phenix/spin/spin3/liuld/pDST_study/simroot/scan/2083/simpleroot.root/T");
      chain->Add("/gpfs/mnt/gpfs02/phenix/spin/spin3/liuld/pDST_study/simroot/scan/2084/simpleroot.root/T");
      chain->Add("/gpfs/mnt/gpfs02/phenix/spin/spin3/liuld/pDST_study/simroot/scan/2085/simpleroot.root/T");
      chain->Add("/gpfs/mnt/gpfs02/phenix/spin/spin3/liuld/pDST_study/simroot/scan/2086/simpleroot.root/T");
      chain->Add("/gpfs/mnt/gpfs02/phenix/spin/spin3/liuld/pDST_study/simroot/scan/2087/simpleroot.root/T");
      chain->Add("/gpfs/mnt/gpfs02/phenix/spin/spin3/liuld/pDST_study/simroot/scan/2088/simpleroot.root/T");
      chain->Add("/gpfs/mnt/gpfs02/phenix/spin/spin3/liuld/pDST_study/simroot/scan/2089/simpleroot.root/T");
      chain->Add("/gpfs/mnt/gpfs02/phenix/spin/spin3/liuld/pDST_study/simroot/scan/2090/simpleroot.root/T");
      chain->Add("/gpfs/mnt/gpfs02/phenix/spin/spin3/liuld/pDST_study/simroot/scan/2091/simpleroot.root/T");
      chain->Add("/gpfs/mnt/gpfs02/phenix/spin/spin3/liuld/pDST_study/simroot/scan/2092/simpleroot.root/T");
      chain->Add("/gpfs/mnt/gpfs02/phenix/spin/spin3/liuld/pDST_study/simroot/scan/2093/simpleroot.root/T");
      chain->Add("/gpfs/mnt/gpfs02/phenix/spin/spin3/liuld/pDST_study/simroot/scan/2094/simpleroot.root/T");
      chain->Add("/gpfs/mnt/gpfs02/phenix/spin/spin3/liuld/pDST_study/simroot/scan/2095/simpleroot.root/T");
      chain->Add("/gpfs/mnt/gpfs02/phenix/spin/spin3/liuld/pDST_study/simroot/scan/2096/simpleroot.root/T");
      chain->Add("/gpfs/mnt/gpfs02/phenix/spin/spin3/liuld/pDST_study/simroot/scan/2097/simpleroot.root/T");
      chain->Add("/gpfs/mnt/gpfs02/phenix/spin/spin3/liuld/pDST_study/simroot/scan/2098/simpleroot.root/T");
      chain->Add("/gpfs/mnt/gpfs02/phenix/spin/spin3/liuld/pDST_study/simroot/scan/2099/simpleroot.root/T");
      chain->Add("/gpfs/mnt/gpfs02/phenix/spin/spin3/liuld/pDST_study/simroot/scan/2100/simpleroot.root/T");
      chain->Add("/gpfs/mnt/gpfs02/phenix/spin/spin3/liuld/pDST_study/simroot/scan/2101/simpleroot.root/T");
      chain->Add("/gpfs/mnt/gpfs02/phenix/spin/spin3/liuld/pDST_study/simroot/scan/2102/simpleroot.root/T");
      chain->Add("/gpfs/mnt/gpfs02/phenix/spin/spin3/liuld/pDST_study/simroot/scan/2103/simpleroot.root/T");
      chain->Add("/gpfs/mnt/gpfs02/phenix/spin/spin3/liuld/pDST_study/simroot/scan/2104/simpleroot.root/T");
      chain->Add("/gpfs/mnt/gpfs02/phenix/spin/spin3/liuld/pDST_study/simroot/scan/2105/simpleroot.root/T");
      chain->Add("/gpfs/mnt/gpfs02/phenix/spin/spin3/liuld/pDST_study/simroot/scan/2106/simpleroot.root/T");
      chain->Add("/gpfs/mnt/gpfs02/phenix/spin/spin3/liuld/pDST_study/simroot/scan/2107/simpleroot.root/T");
      chain->Add("/gpfs/mnt/gpfs02/phenix/spin/spin3/liuld/pDST_study/simroot/scan/2108/simpleroot.root/T");
      chain->Add("/gpfs/mnt/gpfs02/phenix/spin/spin3/liuld/pDST_study/simroot/scan/2109/simpleroot.root/T");
      chain->Add("/gpfs/mnt/gpfs02/phenix/spin/spin3/liuld/pDST_study/simroot/scan/2110/simpleroot.root/T");
      chain->Add("/gpfs/mnt/gpfs02/phenix/spin/spin3/liuld/pDST_study/simroot/scan/2111/simpleroot.root/T");
      chain->Add("/gpfs/mnt/gpfs02/phenix/spin/spin3/liuld/pDST_study/simroot/scan/2112/simpleroot.root/T");
      chain->Add("/gpfs/mnt/gpfs02/phenix/spin/spin3/liuld/pDST_study/simroot/scan/2113/simpleroot.root/T");
      chain->Add("/gpfs/mnt/gpfs02/phenix/spin/spin3/liuld/pDST_study/simroot/scan/2114/simpleroot.root/T");
      chain->Add("/gpfs/mnt/gpfs02/phenix/spin/spin3/liuld/pDST_study/simroot/scan/2115/simpleroot.root/T");
      chain->Add("/gpfs/mnt/gpfs02/phenix/spin/spin3/liuld/pDST_study/simroot/scan/2116/simpleroot.root/T");
      chain->Add("/gpfs/mnt/gpfs02/phenix/spin/spin3/liuld/pDST_study/simroot/scan/2117/simpleroot.root/T");
      chain->Add("/gpfs/mnt/gpfs02/phenix/spin/spin3/liuld/pDST_study/simroot/scan/2118/simpleroot.root/T");
      chain->Add("/gpfs/mnt/gpfs02/phenix/spin/spin3/liuld/pDST_study/simroot/scan/2119/simpleroot.root/T");
      chain->Add("/gpfs/mnt/gpfs02/phenix/spin/spin3/liuld/pDST_study/simroot/scan/2120/simpleroot.root/T");
      chain->Add("/gpfs/mnt/gpfs02/phenix/spin/spin3/liuld/pDST_study/simroot/scan/2121/simpleroot.root/T");
      chain->Add("/gpfs/mnt/gpfs02/phenix/spin/spin3/liuld/pDST_study/simroot/scan/2122/simpleroot.root/T");
      chain->Add("/gpfs/mnt/gpfs02/phenix/spin/spin3/liuld/pDST_study/simroot/scan/2123/simpleroot.root/T");
      chain->Add("/gpfs/mnt/gpfs02/phenix/spin/spin3/liuld/pDST_study/simroot/scan/2124/simpleroot.root/T");
      chain->Add("/gpfs/mnt/gpfs02/phenix/spin/spin3/liuld/pDST_study/simroot/scan/2125/simpleroot.root/T");
      chain->Add("/gpfs/mnt/gpfs02/phenix/spin/spin3/liuld/pDST_study/simroot/scan/2126/simpleroot.root/T");
      chain->Add("/gpfs/mnt/gpfs02/phenix/spin/spin3/liuld/pDST_study/simroot/scan/2127/simpleroot.root/T");
      chain->Add("/gpfs/mnt/gpfs02/phenix/spin/spin3/liuld/pDST_study/simroot/scan/2128/simpleroot.root/T");
      chain->Add("/gpfs/mnt/gpfs02/phenix/spin/spin3/liuld/pDST_study/simroot/scan/2129/simpleroot.root/T");
      chain->Add("/gpfs/mnt/gpfs02/phenix/spin/spin3/liuld/pDST_study/simroot/scan/2130/simpleroot.root/T");
      chain->Add("/gpfs/mnt/gpfs02/phenix/spin/spin3/liuld/pDST_study/simroot/scan/2131/simpleroot.root/T");
      chain->Add("/gpfs/mnt/gpfs02/phenix/spin/spin3/liuld/pDST_study/simroot/scan/2132/simpleroot.root/T");
      chain->Add("/gpfs/mnt/gpfs02/phenix/spin/spin3/liuld/pDST_study/simroot/scan/2133/simpleroot.root/T");
      chain->Add("/gpfs/mnt/gpfs02/phenix/spin/spin3/liuld/pDST_study/simroot/scan/2134/simpleroot.root/T");
      chain->Add("/gpfs/mnt/gpfs02/phenix/spin/spin3/liuld/pDST_study/simroot/scan/2135/simpleroot.root/T");
      chain->Add("/gpfs/mnt/gpfs02/phenix/spin/spin3/liuld/pDST_study/simroot/scan/2136/simpleroot.root/T");
      chain->Add("/gpfs/mnt/gpfs02/phenix/spin/spin3/liuld/pDST_study/simroot/scan/2137/simpleroot.root/T");
      chain->Add("/gpfs/mnt/gpfs02/phenix/spin/spin3/liuld/pDST_study/simroot/scan/2138/simpleroot.root/T");
      chain->Add("/gpfs/mnt/gpfs02/phenix/spin/spin3/liuld/pDST_study/simroot/scan/2139/simpleroot.root/T");
      chain->Add("/gpfs/mnt/gpfs02/phenix/spin/spin3/liuld/pDST_study/simroot/scan/2140/simpleroot.root/T");
      chain->Add("/gpfs/mnt/gpfs02/phenix/spin/spin3/liuld/pDST_study/simroot/scan/2141/simpleroot.root/T");
      chain->Add("/gpfs/mnt/gpfs02/phenix/spin/spin3/liuld/pDST_study/simroot/scan/2142/simpleroot.root/T");
      chain->Add("/gpfs/mnt/gpfs02/phenix/spin/spin3/liuld/pDST_study/simroot/scan/2143/simpleroot.root/T");
      chain->Add("/gpfs/mnt/gpfs02/phenix/spin/spin3/liuld/pDST_study/simroot/scan/2144/simpleroot.root/T");
      chain->Add("/gpfs/mnt/gpfs02/phenix/spin/spin3/liuld/pDST_study/simroot/scan/2145/simpleroot.root/T");
      chain->Add("/gpfs/mnt/gpfs02/phenix/spin/spin3/liuld/pDST_study/simroot/scan/2146/simpleroot.root/T");
      chain->Add("/gpfs/mnt/gpfs02/phenix/spin/spin3/liuld/pDST_study/simroot/scan/2147/simpleroot.root/T");
      chain->Add("/gpfs/mnt/gpfs02/phenix/spin/spin3/liuld/pDST_study/simroot/scan/2148/simpleroot.root/T");
      chain->Add("/gpfs/mnt/gpfs02/phenix/spin/spin3/liuld/pDST_study/simroot/scan/2149/simpleroot.root/T");
      chain->Add("/gpfs/mnt/gpfs02/phenix/spin/spin3/liuld/pDST_study/simroot/scan/2150/simpleroot.root/T");
      chain->Add("/gpfs/mnt/gpfs02/phenix/spin/spin3/liuld/pDST_study/simroot/scan/2151/simpleroot.root/T");
      chain->Add("/gpfs/mnt/gpfs02/phenix/spin/spin3/liuld/pDST_study/simroot/scan/2152/simpleroot.root/T");
      chain->Add("/gpfs/mnt/gpfs02/phenix/spin/spin3/liuld/pDST_study/simroot/scan/2153/simpleroot.root/T");
      chain->Add("/gpfs/mnt/gpfs02/phenix/spin/spin3/liuld/pDST_study/simroot/scan/2154/simpleroot.root/T");
      chain->Add("/gpfs/mnt/gpfs02/phenix/spin/spin3/liuld/pDST_study/simroot/scan/2155/simpleroot.root/T");
      chain->Add("/gpfs/mnt/gpfs02/phenix/spin/spin3/liuld/pDST_study/simroot/scan/2156/simpleroot.root/T");
      chain->Add("/gpfs/mnt/gpfs02/phenix/spin/spin3/liuld/pDST_study/simroot/scan/2157/simpleroot.root/T");
      chain->Add("/gpfs/mnt/gpfs02/phenix/spin/spin3/liuld/pDST_study/simroot/scan/2158/simpleroot.root/T");
      chain->Add("/gpfs/mnt/gpfs02/phenix/spin/spin3/liuld/pDST_study/simroot/scan/2159/simpleroot.root/T");
      chain->Add("/gpfs/mnt/gpfs02/phenix/spin/spin3/liuld/pDST_study/simroot/scan/2160/simpleroot.root/T");
      chain->Add("/gpfs/mnt/gpfs02/phenix/spin/spin3/liuld/pDST_study/simroot/scan/2161/simpleroot.root/T");
      chain->Add("/gpfs/mnt/gpfs02/phenix/spin/spin3/liuld/pDST_study/simroot/scan/2162/simpleroot.root/T");
      chain->Add("/gpfs/mnt/gpfs02/phenix/spin/spin3/liuld/pDST_study/simroot/scan/2163/simpleroot.root/T");
      chain->Add("/gpfs/mnt/gpfs02/phenix/spin/spin3/liuld/pDST_study/simroot/scan/2164/simpleroot.root/T");
      chain->Add("/gpfs/mnt/gpfs02/phenix/spin/spin3/liuld/pDST_study/simroot/scan/2165/simpleroot.root/T");
      chain->Add("/gpfs/mnt/gpfs02/phenix/spin/spin3/liuld/pDST_study/simroot/scan/2166/simpleroot.root/T");
      chain->Add("/gpfs/mnt/gpfs02/phenix/spin/spin3/liuld/pDST_study/simroot/scan/2167/simpleroot.root/T");
      chain->Add("/gpfs/mnt/gpfs02/phenix/spin/spin3/liuld/pDST_study/simroot/scan/2168/simpleroot.root/T");
      chain->Add("/gpfs/mnt/gpfs02/phenix/spin/spin3/liuld/pDST_study/simroot/scan/2169/simpleroot.root/T");
      chain->Add("/gpfs/mnt/gpfs02/phenix/spin/spin3/liuld/pDST_study/simroot/scan/2170/simpleroot.root/T");
      chain->Add("/gpfs/mnt/gpfs02/phenix/spin/spin3/liuld/pDST_study/simroot/scan/2171/simpleroot.root/T");
      chain->Add("/gpfs/mnt/gpfs02/phenix/spin/spin3/liuld/pDST_study/simroot/scan/2172/simpleroot.root/T");
      chain->Add("/gpfs/mnt/gpfs02/phenix/spin/spin3/liuld/pDST_study/simroot/scan/2173/simpleroot.root/T");
      chain->Add("/gpfs/mnt/gpfs02/phenix/spin/spin3/liuld/pDST_study/simroot/scan/2174/simpleroot.root/T");
      chain->Add("/gpfs/mnt/gpfs02/phenix/spin/spin3/liuld/pDST_study/simroot/scan/2175/simpleroot.root/T");
      chain->Add("/gpfs/mnt/gpfs02/phenix/spin/spin3/liuld/pDST_study/simroot/scan/2176/simpleroot.root/T");
      chain->Add("/gpfs/mnt/gpfs02/phenix/spin/spin3/liuld/pDST_study/simroot/scan/2177/simpleroot.root/T");
      chain->Add("/gpfs/mnt/gpfs02/phenix/spin/spin3/liuld/pDST_study/simroot/scan/2178/simpleroot.root/T");
      chain->Add("/gpfs/mnt/gpfs02/phenix/spin/spin3/liuld/pDST_study/simroot/scan/2179/simpleroot.root/T");
      chain->Add("/gpfs/mnt/gpfs02/phenix/spin/spin3/liuld/pDST_study/simroot/scan/2180/simpleroot.root/T");
      chain->Add("/gpfs/mnt/gpfs02/phenix/spin/spin3/liuld/pDST_study/simroot/scan/2181/simpleroot.root/T");
      chain->Add("/gpfs/mnt/gpfs02/phenix/spin/spin3/liuld/pDST_study/simroot/scan/2182/simpleroot.root/T");
      chain->Add("/gpfs/mnt/gpfs02/phenix/spin/spin3/liuld/pDST_study/simroot/scan/2183/simpleroot.root/T");
      chain->Add("/gpfs/mnt/gpfs02/phenix/spin/spin3/liuld/pDST_study/simroot/scan/2184/simpleroot.root/T");
      chain->Add("/gpfs/mnt/gpfs02/phenix/spin/spin3/liuld/pDST_study/simroot/scan/2185/simpleroot.root/T");
      chain->Add("/gpfs/mnt/gpfs02/phenix/spin/spin3/liuld/pDST_study/simroot/scan/2186/simpleroot.root/T");
      chain->Add("/gpfs/mnt/gpfs02/phenix/spin/spin3/liuld/pDST_study/simroot/scan/2187/simpleroot.root/T");
      chain->Add("/gpfs/mnt/gpfs02/phenix/spin/spin3/liuld/pDST_study/simroot/scan/2188/simpleroot.root/T");
      chain->Add("/gpfs/mnt/gpfs02/phenix/spin/spin3/liuld/pDST_study/simroot/scan/2189/simpleroot.root/T");
      chain->Add("/gpfs/mnt/gpfs02/phenix/spin/spin3/liuld/pDST_study/simroot/scan/2190/simpleroot.root/T");
      chain->Add("/gpfs/mnt/gpfs02/phenix/spin/spin3/liuld/pDST_study/simroot/scan/2191/simpleroot.root/T");
      chain->Add("/gpfs/mnt/gpfs02/phenix/spin/spin3/liuld/pDST_study/simroot/scan/2192/simpleroot.root/T");
      chain->Add("/gpfs/mnt/gpfs02/phenix/spin/spin3/liuld/pDST_study/simroot/scan/2193/simpleroot.root/T");
      chain->Add("/gpfs/mnt/gpfs02/phenix/spin/spin3/liuld/pDST_study/simroot/scan/2194/simpleroot.root/T");
      chain->Add("/gpfs/mnt/gpfs02/phenix/spin/spin3/liuld/pDST_study/simroot/scan/2195/simpleroot.root/T");
      chain->Add("/gpfs/mnt/gpfs02/phenix/spin/spin3/liuld/pDST_study/simroot/scan/2196/simpleroot.root/T");
      chain->Add("/gpfs/mnt/gpfs02/phenix/spin/spin3/liuld/pDST_study/simroot/scan/2197/simpleroot.root/T");
      chain->Add("/gpfs/mnt/gpfs02/phenix/spin/spin3/liuld/pDST_study/simroot/scan/2198/simpleroot.root/T");
      chain->Add("/gpfs/mnt/gpfs02/phenix/spin/spin3/liuld/pDST_study/simroot/scan/2199/simpleroot.root/T");
      chain->Add("/gpfs/mnt/gpfs02/phenix/spin/spin3/liuld/pDST_study/simroot/scan/2200/simpleroot.root/T");
      chain->Add("/gpfs/mnt/gpfs02/phenix/spin/spin3/liuld/pDST_study/simroot/scan/2201/simpleroot.root/T");
      chain->Add("/gpfs/mnt/gpfs02/phenix/spin/spin3/liuld/pDST_study/simroot/scan/2202/simpleroot.root/T");
      chain->Add("/gpfs/mnt/gpfs02/phenix/spin/spin3/liuld/pDST_study/simroot/scan/2203/simpleroot.root/T");
      chain->Add("/gpfs/mnt/gpfs02/phenix/spin/spin3/liuld/pDST_study/simroot/scan/2204/simpleroot.root/T");
      chain->Add("/gpfs/mnt/gpfs02/phenix/spin/spin3/liuld/pDST_study/simroot/scan/2205/simpleroot.root/T");
      chain->Add("/gpfs/mnt/gpfs02/phenix/spin/spin3/liuld/pDST_study/simroot/scan/2206/simpleroot.root/T");
      chain->Add("/gpfs/mnt/gpfs02/phenix/spin/spin3/liuld/pDST_study/simroot/scan/2207/simpleroot.root/T");
      chain->Add("/gpfs/mnt/gpfs02/phenix/spin/spin3/liuld/pDST_study/simroot/scan/2208/simpleroot.root/T");
      chain->Add("/gpfs/mnt/gpfs02/phenix/spin/spin3/liuld/pDST_study/simroot/scan/2209/simpleroot.root/T");
      chain->Add("/gpfs/mnt/gpfs02/phenix/spin/spin3/liuld/pDST_study/simroot/scan/2210/simpleroot.root/T");
      chain->Add("/gpfs/mnt/gpfs02/phenix/spin/spin3/liuld/pDST_study/simroot/scan/2211/simpleroot.root/T");
      chain->Add("/gpfs/mnt/gpfs02/phenix/spin/spin3/liuld/pDST_study/simroot/scan/2212/simpleroot.root/T");
      chain->Add("/gpfs/mnt/gpfs02/phenix/spin/spin3/liuld/pDST_study/simroot/scan/2213/simpleroot.root/T");
      chain->Add("/gpfs/mnt/gpfs02/phenix/spin/spin3/liuld/pDST_study/simroot/scan/2214/simpleroot.root/T");
      chain->Add("/gpfs/mnt/gpfs02/phenix/spin/spin3/liuld/pDST_study/simroot/scan/2215/simpleroot.root/T");
      chain->Add("/gpfs/mnt/gpfs02/phenix/spin/spin3/liuld/pDST_study/simroot/scan/2216/simpleroot.root/T");
      chain->Add("/gpfs/mnt/gpfs02/phenix/spin/spin3/liuld/pDST_study/simroot/scan/2217/simpleroot.root/T");
      chain->Add("/gpfs/mnt/gpfs02/phenix/spin/spin3/liuld/pDST_study/simroot/scan/2218/simpleroot.root/T");
      chain->Add("/gpfs/mnt/gpfs02/phenix/spin/spin3/liuld/pDST_study/simroot/scan/2219/simpleroot.root/T");
      chain->Add("/gpfs/mnt/gpfs02/phenix/spin/spin3/liuld/pDST_study/simroot/scan/2220/simpleroot.root/T");
      chain->Add("/gpfs/mnt/gpfs02/phenix/spin/spin3/liuld/pDST_study/simroot/scan/2221/simpleroot.root/T");
      chain->Add("/gpfs/mnt/gpfs02/phenix/spin/spin3/liuld/pDST_study/simroot/scan/2222/simpleroot.root/T");
      chain->Add("/gpfs/mnt/gpfs02/phenix/spin/spin3/liuld/pDST_study/simroot/scan/2223/simpleroot.root/T");
      chain->Add("/gpfs/mnt/gpfs02/phenix/spin/spin3/liuld/pDST_study/simroot/scan/2224/simpleroot.root/T");
      chain->Add("/gpfs/mnt/gpfs02/phenix/spin/spin3/liuld/pDST_study/simroot/scan/2225/simpleroot.root/T");
      chain->Add("/gpfs/mnt/gpfs02/phenix/spin/spin3/liuld/pDST_study/simroot/scan/2226/simpleroot.root/T");
      chain->Add("/gpfs/mnt/gpfs02/phenix/spin/spin3/liuld/pDST_study/simroot/scan/2227/simpleroot.root/T");
      chain->Add("/gpfs/mnt/gpfs02/phenix/spin/spin3/liuld/pDST_study/simroot/scan/2228/simpleroot.root/T");
      chain->Add("/gpfs/mnt/gpfs02/phenix/spin/spin3/liuld/pDST_study/simroot/scan/2229/simpleroot.root/T");
      chain->Add("/gpfs/mnt/gpfs02/phenix/spin/spin3/liuld/pDST_study/simroot/scan/2230/simpleroot.root/T");
      chain->Add("/gpfs/mnt/gpfs02/phenix/spin/spin3/liuld/pDST_study/simroot/scan/2231/simpleroot.root/T");
      chain->Add("/gpfs/mnt/gpfs02/phenix/spin/spin3/liuld/pDST_study/simroot/scan/2232/simpleroot.root/T");
      chain->Add("/gpfs/mnt/gpfs02/phenix/spin/spin3/liuld/pDST_study/simroot/scan/2233/simpleroot.root/T");
      chain->Add("/gpfs/mnt/gpfs02/phenix/spin/spin3/liuld/pDST_study/simroot/scan/2234/simpleroot.root/T");
      chain->Add("/gpfs/mnt/gpfs02/phenix/spin/spin3/liuld/pDST_study/simroot/scan/2235/simpleroot.root/T");
      chain->Add("/gpfs/mnt/gpfs02/phenix/spin/spin3/liuld/pDST_study/simroot/scan/2236/simpleroot.root/T");
      chain->Add("/gpfs/mnt/gpfs02/phenix/spin/spin3/liuld/pDST_study/simroot/scan/2237/simpleroot.root/T");
      chain->Add("/gpfs/mnt/gpfs02/phenix/spin/spin3/liuld/pDST_study/simroot/scan/2238/simpleroot.root/T");
      chain->Add("/gpfs/mnt/gpfs02/phenix/spin/spin3/liuld/pDST_study/simroot/scan/2239/simpleroot.root/T");
      chain->Add("/gpfs/mnt/gpfs02/phenix/spin/spin3/liuld/pDST_study/simroot/scan/2240/simpleroot.root/T");
      chain->Add("/gpfs/mnt/gpfs02/phenix/spin/spin3/liuld/pDST_study/simroot/scan/2241/simpleroot.root/T");
      chain->Add("/gpfs/mnt/gpfs02/phenix/spin/spin3/liuld/pDST_study/simroot/scan/2242/simpleroot.root/T");
      chain->Add("/gpfs/mnt/gpfs02/phenix/spin/spin3/liuld/pDST_study/simroot/scan/2243/simpleroot.root/T");
      chain->Add("/gpfs/mnt/gpfs02/phenix/spin/spin3/liuld/pDST_study/simroot/scan/2244/simpleroot.root/T");
      chain->Add("/gpfs/mnt/gpfs02/phenix/spin/spin3/liuld/pDST_study/simroot/scan/2245/simpleroot.root/T");
      chain->Add("/gpfs/mnt/gpfs02/phenix/spin/spin3/liuld/pDST_study/simroot/scan/2246/simpleroot.root/T");
      chain->Add("/gpfs/mnt/gpfs02/phenix/spin/spin3/liuld/pDST_study/simroot/scan/2247/simpleroot.root/T");
      chain->Add("/gpfs/mnt/gpfs02/phenix/spin/spin3/liuld/pDST_study/simroot/scan/2248/simpleroot.root/T");
      chain->Add("/gpfs/mnt/gpfs02/phenix/spin/spin3/liuld/pDST_study/simroot/scan/2249/simpleroot.root/T");
      chain->Add("/gpfs/mnt/gpfs02/phenix/spin/spin3/liuld/pDST_study/simroot/scan/2250/simpleroot.root/T");
      chain->Add("/gpfs/mnt/gpfs02/phenix/spin/spin3/liuld/pDST_study/simroot/scan/2251/simpleroot.root/T");
      chain->Add("/gpfs/mnt/gpfs02/phenix/spin/spin3/liuld/pDST_study/simroot/scan/2252/simpleroot.root/T");
      chain->Add("/gpfs/mnt/gpfs02/phenix/spin/spin3/liuld/pDST_study/simroot/scan/2253/simpleroot.root/T");
      chain->Add("/gpfs/mnt/gpfs02/phenix/spin/spin3/liuld/pDST_study/simroot/scan/2254/simpleroot.root/T");
      chain->Add("/gpfs/mnt/gpfs02/phenix/spin/spin3/liuld/pDST_study/simroot/scan/2255/simpleroot.root/T");
      chain->Add("/gpfs/mnt/gpfs02/phenix/spin/spin3/liuld/pDST_study/simroot/scan/2256/simpleroot.root/T");
      chain->Add("/gpfs/mnt/gpfs02/phenix/spin/spin3/liuld/pDST_study/simroot/scan/2257/simpleroot.root/T");
      chain->Add("/gpfs/mnt/gpfs02/phenix/spin/spin3/liuld/pDST_study/simroot/scan/2258/simpleroot.root/T");
      chain->Add("/gpfs/mnt/gpfs02/phenix/spin/spin3/liuld/pDST_study/simroot/scan/2259/simpleroot.root/T");
      chain->Add("/gpfs/mnt/gpfs02/phenix/spin/spin3/liuld/pDST_study/simroot/scan/2260/simpleroot.root/T");
      chain->Add("/gpfs/mnt/gpfs02/phenix/spin/spin3/liuld/pDST_study/simroot/scan/2261/simpleroot.root/T");
      chain->Add("/gpfs/mnt/gpfs02/phenix/spin/spin3/liuld/pDST_study/simroot/scan/2262/simpleroot.root/T");
      chain->Add("/gpfs/mnt/gpfs02/phenix/spin/spin3/liuld/pDST_study/simroot/scan/2263/simpleroot.root/T");
      chain->Add("/gpfs/mnt/gpfs02/phenix/spin/spin3/liuld/pDST_study/simroot/scan/2264/simpleroot.root/T");
      chain->Add("/gpfs/mnt/gpfs02/phenix/spin/spin3/liuld/pDST_study/simroot/scan/2265/simpleroot.root/T");
      chain->Add("/gpfs/mnt/gpfs02/phenix/spin/spin3/liuld/pDST_study/simroot/scan/2266/simpleroot.root/T");
      chain->Add("/gpfs/mnt/gpfs02/phenix/spin/spin3/liuld/pDST_study/simroot/scan/2267/simpleroot.root/T");
      chain->Add("/gpfs/mnt/gpfs02/phenix/spin/spin3/liuld/pDST_study/simroot/scan/2268/simpleroot.root/T");
      chain->Add("/gpfs/mnt/gpfs02/phenix/spin/spin3/liuld/pDST_study/simroot/scan/2269/simpleroot.root/T");
      chain->Add("/gpfs/mnt/gpfs02/phenix/spin/spin3/liuld/pDST_study/simroot/scan/2270/simpleroot.root/T");
      chain->Add("/gpfs/mnt/gpfs02/phenix/spin/spin3/liuld/pDST_study/simroot/scan/2271/simpleroot.root/T");
      chain->Add("/gpfs/mnt/gpfs02/phenix/spin/spin3/liuld/pDST_study/simroot/scan/2272/simpleroot.root/T");
      chain->Add("/gpfs/mnt/gpfs02/phenix/spin/spin3/liuld/pDST_study/simroot/scan/2273/simpleroot.root/T");
      chain->Add("/gpfs/mnt/gpfs02/phenix/spin/spin3/liuld/pDST_study/simroot/scan/2274/simpleroot.root/T");
      chain->Add("/gpfs/mnt/gpfs02/phenix/spin/spin3/liuld/pDST_study/simroot/scan/2275/simpleroot.root/T");
      chain->Add("/gpfs/mnt/gpfs02/phenix/spin/spin3/liuld/pDST_study/simroot/scan/2276/simpleroot.root/T");
      chain->Add("/gpfs/mnt/gpfs02/phenix/spin/spin3/liuld/pDST_study/simroot/scan/2277/simpleroot.root/T");
      chain->Add("/gpfs/mnt/gpfs02/phenix/spin/spin3/liuld/pDST_study/simroot/scan/2278/simpleroot.root/T");
      chain->Add("/gpfs/mnt/gpfs02/phenix/spin/spin3/liuld/pDST_study/simroot/scan/2279/simpleroot.root/T");
      chain->Add("/gpfs/mnt/gpfs02/phenix/spin/spin3/liuld/pDST_study/simroot/scan/2280/simpleroot.root/T");
      chain->Add("/gpfs/mnt/gpfs02/phenix/spin/spin3/liuld/pDST_study/simroot/scan/2281/simpleroot.root/T");
      chain->Add("/gpfs/mnt/gpfs02/phenix/spin/spin3/liuld/pDST_study/simroot/scan/2282/simpleroot.root/T");
      chain->Add("/gpfs/mnt/gpfs02/phenix/spin/spin3/liuld/pDST_study/simroot/scan/2283/simpleroot.root/T");
      chain->Add("/gpfs/mnt/gpfs02/phenix/spin/spin3/liuld/pDST_study/simroot/scan/2284/simpleroot.root/T");
      chain->Add("/gpfs/mnt/gpfs02/phenix/spin/spin3/liuld/pDST_study/simroot/scan/2285/simpleroot.root/T");
      chain->Add("/gpfs/mnt/gpfs02/phenix/spin/spin3/liuld/pDST_study/simroot/scan/2286/simpleroot.root/T");
      chain->Add("/gpfs/mnt/gpfs02/phenix/spin/spin3/liuld/pDST_study/simroot/scan/2287/simpleroot.root/T");
      chain->Add("/gpfs/mnt/gpfs02/phenix/spin/spin3/liuld/pDST_study/simroot/scan/2288/simpleroot.root/T");
      chain->Add("/gpfs/mnt/gpfs02/phenix/spin/spin3/liuld/pDST_study/simroot/scan/2289/simpleroot.root/T");
      chain->Add("/gpfs/mnt/gpfs02/phenix/spin/spin3/liuld/pDST_study/simroot/scan/2290/simpleroot.root/T");
      chain->Add("/gpfs/mnt/gpfs02/phenix/spin/spin3/liuld/pDST_study/simroot/scan/2291/simpleroot.root/T");
      chain->Add("/gpfs/mnt/gpfs02/phenix/spin/spin3/liuld/pDST_study/simroot/scan/2292/simpleroot.root/T");
      chain->Add("/gpfs/mnt/gpfs02/phenix/spin/spin3/liuld/pDST_study/simroot/scan/2293/simpleroot.root/T");
      chain->Add("/gpfs/mnt/gpfs02/phenix/spin/spin3/liuld/pDST_study/simroot/scan/2294/simpleroot.root/T");
      chain->Add("/gpfs/mnt/gpfs02/phenix/spin/spin3/liuld/pDST_study/simroot/scan/2295/simpleroot.root/T");
      chain->Add("/gpfs/mnt/gpfs02/phenix/spin/spin3/liuld/pDST_study/simroot/scan/2296/simpleroot.root/T");
      chain->Add("/gpfs/mnt/gpfs02/phenix/spin/spin3/liuld/pDST_study/simroot/scan/2297/simpleroot.root/T");
      chain->Add("/gpfs/mnt/gpfs02/phenix/spin/spin3/liuld/pDST_study/simroot/scan/2298/simpleroot.root/T");
      chain->Add("/gpfs/mnt/gpfs02/phenix/spin/spin3/liuld/pDST_study/simroot/scan/2299/simpleroot.root/T");
      chain->Add("/gpfs/mnt/gpfs02/phenix/spin/spin3/liuld/pDST_study/simroot/scan/2300/simpleroot.root/T");
      chain->Add("/gpfs/mnt/gpfs02/phenix/spin/spin3/liuld/pDST_study/simroot/scan/2301/simpleroot.root/T");
      chain->Add("/gpfs/mnt/gpfs02/phenix/spin/spin3/liuld/pDST_study/simroot/scan/2302/simpleroot.root/T");
      chain->Add("/gpfs/mnt/gpfs02/phenix/spin/spin3/liuld/pDST_study/simroot/scan/2303/simpleroot.root/T");
      chain->Add("/gpfs/mnt/gpfs02/phenix/spin/spin3/liuld/pDST_study/simroot/scan/2304/simpleroot.root/T");
      chain->Add("/gpfs/mnt/gpfs02/phenix/spin/spin3/liuld/pDST_study/simroot/scan/2305/simpleroot.root/T");
      chain->Add("/gpfs/mnt/gpfs02/phenix/spin/spin3/liuld/pDST_study/simroot/scan/2306/simpleroot.root/T");
      chain->Add("/gpfs/mnt/gpfs02/phenix/spin/spin3/liuld/pDST_study/simroot/scan/2307/simpleroot.root/T");
      chain->Add("/gpfs/mnt/gpfs02/phenix/spin/spin3/liuld/pDST_study/simroot/scan/2308/simpleroot.root/T");
      chain->Add("/gpfs/mnt/gpfs02/phenix/spin/spin3/liuld/pDST_study/simroot/scan/2309/simpleroot.root/T");
      chain->Add("/gpfs/mnt/gpfs02/phenix/spin/spin3/liuld/pDST_study/simroot/scan/2310/simpleroot.root/T");
      chain->Add("/gpfs/mnt/gpfs02/phenix/spin/spin3/liuld/pDST_study/simroot/scan/2311/simpleroot.root/T");
      chain->Add("/gpfs/mnt/gpfs02/phenix/spin/spin3/liuld/pDST_study/simroot/scan/2312/simpleroot.root/T");
      chain->Add("/gpfs/mnt/gpfs02/phenix/spin/spin3/liuld/pDST_study/simroot/scan/2313/simpleroot.root/T");
      chain->Add("/gpfs/mnt/gpfs02/phenix/spin/spin3/liuld/pDST_study/simroot/scan/2314/simpleroot.root/T");
      chain->Add("/gpfs/mnt/gpfs02/phenix/spin/spin3/liuld/pDST_study/simroot/scan/2315/simpleroot.root/T");
      chain->Add("/gpfs/mnt/gpfs02/phenix/spin/spin3/liuld/pDST_study/simroot/scan/2316/simpleroot.root/T");
      chain->Add("/gpfs/mnt/gpfs02/phenix/spin/spin3/liuld/pDST_study/simroot/scan/2317/simpleroot.root/T");
      chain->Add("/gpfs/mnt/gpfs02/phenix/spin/spin3/liuld/pDST_study/simroot/scan/2318/simpleroot.root/T");
      chain->Add("/gpfs/mnt/gpfs02/phenix/spin/spin3/liuld/pDST_study/simroot/scan/2319/simpleroot.root/T");
      chain->Add("/gpfs/mnt/gpfs02/phenix/spin/spin3/liuld/pDST_study/simroot/scan/2320/simpleroot.root/T");
      chain->Add("/gpfs/mnt/gpfs02/phenix/spin/spin3/liuld/pDST_study/simroot/scan/2321/simpleroot.root/T");
      chain->Add("/gpfs/mnt/gpfs02/phenix/spin/spin3/liuld/pDST_study/simroot/scan/2322/simpleroot.root/T");
      chain->Add("/gpfs/mnt/gpfs02/phenix/spin/spin3/liuld/pDST_study/simroot/scan/2323/simpleroot.root/T");
      chain->Add("/gpfs/mnt/gpfs02/phenix/spin/spin3/liuld/pDST_study/simroot/scan/2324/simpleroot.root/T");
      chain->Add("/gpfs/mnt/gpfs02/phenix/spin/spin3/liuld/pDST_study/simroot/scan/2325/simpleroot.root/T");
      chain->Add("/gpfs/mnt/gpfs02/phenix/spin/spin3/liuld/pDST_study/simroot/scan/2326/simpleroot.root/T");
      chain->Add("/gpfs/mnt/gpfs02/phenix/spin/spin3/liuld/pDST_study/simroot/scan/2327/simpleroot.root/T");
      chain->Add("/gpfs/mnt/gpfs02/phenix/spin/spin3/liuld/pDST_study/simroot/scan/2328/simpleroot.root/T");
      chain->Add("/gpfs/mnt/gpfs02/phenix/spin/spin3/liuld/pDST_study/simroot/scan/2329/simpleroot.root/T");
      chain->Add("/gpfs/mnt/gpfs02/phenix/spin/spin3/liuld/pDST_study/simroot/scan/2330/simpleroot.root/T");
      chain->Add("/gpfs/mnt/gpfs02/phenix/spin/spin3/liuld/pDST_study/simroot/scan/2331/simpleroot.root/T");
      chain->Add("/gpfs/mnt/gpfs02/phenix/spin/spin3/liuld/pDST_study/simroot/scan/2332/simpleroot.root/T");
      chain->Add("/gpfs/mnt/gpfs02/phenix/spin/spin3/liuld/pDST_study/simroot/scan/2333/simpleroot.root/T");
      chain->Add("/gpfs/mnt/gpfs02/phenix/spin/spin3/liuld/pDST_study/simroot/scan/2334/simpleroot.root/T");
      chain->Add("/gpfs/mnt/gpfs02/phenix/spin/spin3/liuld/pDST_study/simroot/scan/2335/simpleroot.root/T");
      chain->Add("/gpfs/mnt/gpfs02/phenix/spin/spin3/liuld/pDST_study/simroot/scan/2336/simpleroot.root/T");
      chain->Add("/gpfs/mnt/gpfs02/phenix/spin/spin3/liuld/pDST_study/simroot/scan/2337/simpleroot.root/T");
      chain->Add("/gpfs/mnt/gpfs02/phenix/spin/spin3/liuld/pDST_study/simroot/scan/2338/simpleroot.root/T");
      chain->Add("/gpfs/mnt/gpfs02/phenix/spin/spin3/liuld/pDST_study/simroot/scan/2339/simpleroot.root/T");
      chain->Add("/gpfs/mnt/gpfs02/phenix/spin/spin3/liuld/pDST_study/simroot/scan/2340/simpleroot.root/T");
      chain->Add("/gpfs/mnt/gpfs02/phenix/spin/spin3/liuld/pDST_study/simroot/scan/2341/simpleroot.root/T");
      chain->Add("/gpfs/mnt/gpfs02/phenix/spin/spin3/liuld/pDST_study/simroot/scan/2342/simpleroot.root/T");
      chain->Add("/gpfs/mnt/gpfs02/phenix/spin/spin3/liuld/pDST_study/simroot/scan/2343/simpleroot.root/T");
      chain->Add("/gpfs/mnt/gpfs02/phenix/spin/spin3/liuld/pDST_study/simroot/scan/2344/simpleroot.root/T");
      tree = chain;
#endif // SINGLE_TREE

   }
   Init(tree);
}

MyClass::~MyClass()
{
   if (!fChain) return;
   delete fChain->GetCurrentFile();
}

Int_t MyClass::GetEntry(Long64_t entry)
{
// Read contents of entry.
   if (!fChain) return 0;
   return fChain->GetEntry(entry);
}
Long64_t MyClass::LoadTree(Long64_t entry)
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

void MyClass::Init(TTree *tree)
{
   // The Init() function is called when the selector needs to initialize
   // a new tree or chain. Typically here the branch addresses and branch
   // pointers of the tree will be set.
   // It is normally not necessary to make changes to the generated
   // code, but the routine can be extended by the user if needed.
   // Init() will be called many times when running on PROOF
   // (once per file to be processed).

   // Set branch addresses and branch pointers
   if (!tree) return;
   fChain = tree;
   fCurrent = -1;
   fChain->SetMakeClass(1);

   fChain->SetBranchAddress("Run_Number", &Run_Number, &b_Run_Number);
   fChain->SetBranchAddress("Evt_bbcZ", &Evt_bbcZ, &b_Evt_bbcZ);
   fChain->SetBranchAddress("Evt_bbcZ_Err", &Evt_bbcZ_Err, &b_Evt_bbcZ_Err);
   fChain->SetBranchAddress("Evt_vtxX", &Evt_vtxX, &b_Evt_vtxX);
   fChain->SetBranchAddress("Evt_vtxX_Err", &Evt_vtxX_Err, &b_Evt_vtxX_Err);
   fChain->SetBranchAddress("Evt_vtxY", &Evt_vtxY, &b_Evt_vtxY);
   fChain->SetBranchAddress("Evt_vtxY_Err", &Evt_vtxY_Err, &b_Evt_vtxY_Err);
   fChain->SetBranchAddress("Evt_vtxZ", &Evt_vtxZ, &b_Evt_vtxZ);
   fChain->SetBranchAddress("Evt_vtxZ_Err", &Evt_vtxZ_Err, &b_Evt_vtxZ_Err);
   fChain->SetBranchAddress("Evt_fvtxX", &Evt_fvtxX, &b_Evt_fvtxX);
   fChain->SetBranchAddress("Evt_fvtxX_Err", &Evt_fvtxX_Err, &b_Evt_fvtxX_Err);
   fChain->SetBranchAddress("Evt_fvtxY", &Evt_fvtxY, &b_Evt_fvtxY);
   fChain->SetBranchAddress("Evt_fvtxY_Err", &Evt_fvtxY_Err, &b_Evt_fvtxY_Err);
   fChain->SetBranchAddress("Evt_fvtxZ", &Evt_fvtxZ, &b_Evt_fvtxZ);
   fChain->SetBranchAddress("Evt_fvtxZ_Err", &Evt_fvtxZ_Err, &b_Evt_fvtxZ_Err);
   fChain->SetBranchAddress("Evt_fvtxX2", &Evt_fvtxX2, &b_Evt_fvtxX2);
   fChain->SetBranchAddress("Evt_fvtxY2", &Evt_fvtxY2, &b_Evt_fvtxY2);
   fChain->SetBranchAddress("Evt_fvtxZ2", &Evt_fvtxZ2, &b_Evt_fvtxZ2);
   fChain->SetBranchAddress("Evt_Cent", &Evt_Cent, &b_Evt_Cent);
   fChain->SetBranchAddress("Evt_Mult_FVTXN", &Evt_Mult_FVTXN, &b_Evt_Mult_FVTXN);
   fChain->SetBranchAddress("Evt_Mult_FVTXS", &Evt_Mult_FVTXS, &b_Evt_Mult_FVTXS);
   fChain->SetBranchAddress("Evt_Mult_SVX", &Evt_Mult_SVX, &b_Evt_Mult_SVX);
   fChain->SetBranchAddress("Evt_Mult_sFVTXN", &Evt_Mult_sFVTXN, &b_Evt_Mult_sFVTXN);
   fChain->SetBranchAddress("Evt_Mult_sFVTXS", &Evt_Mult_sFVTXS, &b_Evt_Mult_sFVTXS);
   fChain->SetBranchAddress("nSingleMuons", &nSingleMuons, &b_nSingleMuons);
   fChain->SetBranchAddress("px", &px, &b_px);
   fChain->SetBranchAddress("py", &py, &b_py);
   fChain->SetBranchAddress("pz", &pz, &b_pz);
   fChain->SetBranchAddress("pt", &pt, &b_pt);
   fChain->SetBranchAddress("p", &p, &b_p);
   fChain->SetBranchAddress("rapidity", &rapidity, &b_rapidity);
   fChain->SetBranchAddress("DG0", &DG0, &b_DG0);
   fChain->SetBranchAddress("DDG0", &DDG0, &b_DDG0);
   fChain->SetBranchAddress("DS3", &DS3, &b_DS3);
   fChain->SetBranchAddress("trchi2", &trchi2, &b_trchi2);
   fChain->SetBranchAddress("idchi2", &idchi2, &b_idchi2);
   fChain->SetBranchAddress("ntrhits", &ntrhits, &b_ntrhits);
   fChain->SetBranchAddress("nidhits", &nidhits, &b_nidhits);
   fChain->SetBranchAddress("lastgap", &lastgap, &b_lastgap);
   fChain->SetBranchAddress("MUID1D", &MUID1D, &b_MUID1D);
   fChain->SetBranchAddress("MUID1S", &MUID1S, &b_MUID1S);
   fChain->SetBranchAddress("dca_z", &dca_z, &b_dca_z);
   fChain->SetBranchAddress("dca_r", &dca_r, &b_dca_r);
   fChain->SetBranchAddress("charge", &charge, &b_charge);
   fChain->SetBranchAddress("x0", &x0, &b_x0);
   fChain->SetBranchAddress("y0", &y0, &b_y0);
   fChain->SetBranchAddress("z0", &z0, &b_z0);
   fChain->SetBranchAddress("r0", &r0, &b_r0);
   fChain->SetBranchAddress("x0_fvtx", &x0_fvtx, &b_x0_fvtx);
   fChain->SetBranchAddress("y0_fvtx", &y0_fvtx, &b_y0_fvtx);
   fChain->SetBranchAddress("z0_fvtx", &z0_fvtx, &b_z0_fvtx);
   fChain->SetBranchAddress("r0_fvtx", &r0_fvtx, &b_r0_fvtx);
   fChain->SetBranchAddress("px_fvtx", &px_fvtx, &b_px_fvtx);
   fChain->SetBranchAddress("py_fvtx", &py_fvtx, &b_py_fvtx);
   fChain->SetBranchAddress("pz_fvtx", &pz_fvtx, &b_pz_fvtx);
   fChain->SetBranchAddress("pt_fvtx", &pt_fvtx, &b_pt_fvtx);
   fChain->SetBranchAddress("p_fvtx", &p_fvtx, &b_p_fvtx);
   fChain->SetBranchAddress("x0_fvtxmutr", &x0_fvtxmutr, &b_x0_fvtxmutr);
   fChain->SetBranchAddress("y0_fvtxmutr", &y0_fvtxmutr, &b_y0_fvtxmutr);
   fChain->SetBranchAddress("z0_fvtxmutr", &z0_fvtxmutr, &b_z0_fvtxmutr);
   fChain->SetBranchAddress("r0_fvtxmutr", &r0_fvtxmutr, &b_r0_fvtxmutr);
   fChain->SetBranchAddress("px_fvtxmutr", &px_fvtxmutr, &b_px_fvtxmutr);
   fChain->SetBranchAddress("py_fvtxmutr", &py_fvtxmutr, &b_py_fvtxmutr);
   fChain->SetBranchAddress("pz_fvtxmutr", &pz_fvtxmutr, &b_pz_fvtxmutr);
   fChain->SetBranchAddress("pt_fvtxmutr", &pt_fvtxmutr, &b_pt_fvtxmutr);
   fChain->SetBranchAddress("p_fvtxmutr", &p_fvtxmutr, &b_p_fvtxmutr);
   fChain->SetBranchAddress("nhits_fvtx", &nhits_fvtx, &b_nhits_fvtx);
   fChain->SetBranchAddress("dphi_fvtx", &dphi_fvtx, &b_dphi_fvtx);
   fChain->SetBranchAddress("dtheta_fvtx", &dtheta_fvtx, &b_dtheta_fvtx);
   fChain->SetBranchAddress("dr_fvtx", &dr_fvtx, &b_dr_fvtx);
   fChain->SetBranchAddress("chi2_fvtx", &chi2_fvtx, &b_chi2_fvtx);
   fChain->SetBranchAddress("chi2_fvtxmutr", &chi2_fvtxmutr, &b_chi2_fvtxmutr);
   fChain->SetBranchAddress("dca_phi", &dca_phi, &b_dca_phi);
   fChain->SetBranchAddress("clusters_size1", &clusters_size1, &b_clusters_size1);
   fChain->SetBranchAddress("nfvtx_tracklets_cone", &nfvtx_tracklets_cone, &b_nfvtx_tracklets_cone);
   fChain->SetBranchAddress("nfvtx_tracklets", &nfvtx_tracklets, &b_nfvtx_tracklets);
   fChain->SetBranchAddress("nfvtx_clusters_cone", &nfvtx_clusters_cone, &b_nfvtx_clusters_cone);
   Notify();
}

Bool_t MyClass::Notify()
{
   // The Notify() function is called when a new file is opened. This
   // can be either for a new TTree in a TChain or when when a new TTree
   // is started when using PROOF. It is normally not necessary to make changes
   // to the generated code, but the routine can be extended by the
   // user if needed. The return value is currently not used.

   return kTRUE;
}

void MyClass::Show(Long64_t entry)
{
// Print contents of entry.
// If entry is not specified, print current entry
   if (!fChain) return;
   fChain->Show(entry);
}
Int_t MyClass::Cut(Long64_t entry)
{
// This function may be called from Loop.
// returns  1 if entry is accepted.
// returns -1 otherwise.
   return 1;
}
#endif // #ifdef MyClass_cxx
