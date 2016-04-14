{
	int debug=0;
	gROOT->ProcessLine(".L MyClass.C+");

	if(debug==0)
	{   
		gROOT->ProcessLine("MyClass m");
		gROOT->ProcessLine("m.Loop()");
		//gROOT->ProcessLine("t.ReadMCTruth()");
		gROOT->ProcessLine(".q");
	}   


}
}
