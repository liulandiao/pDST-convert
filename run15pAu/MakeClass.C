#include <stdlib.h>
#include <iostream>
#include <stdio.h>
#include <cmath>
#include "/direct/phenix+u/liuld/root/myinclude/rootall.h"

using namespace std;
void MakeClass(){
	//change list
	char  *flistname = "picoDST.list";

	std::ifstream flist(flistname);

	//change class name
	char  *classname = "MyClass";

	//Tree name
	TChain *chain=new TChain("T","");

	cout<<"Starting add..."<<endl;
	int counter=0;
	while(!flist.eof())
	{   
		char fname[1000];
		flist.getline(fname,1000);
		if(flist.eof()) continue;
		chain->Add(fname);
	}   
	chain->MakeClass(classname);

	cout<<"complete"<<endl;
}
