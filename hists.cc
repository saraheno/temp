#include <iostream>
#include <iomanip>
#include <locale>

#include <TROOT.h>
#include <TChain.h>
#include <TFile.h>
#include "TRandom.h"

#include "vector"
#include "vector"
using std::vector;


#include <TH2.h>
#include <TStyle.h>
#include <TCanvas.h>



void hists() {


  std::string outputfile;

  TH1F* aa = new TH1F("aa","test",100,-5.,5.);

  for(int i=0;i<1000;i++) {
    aa->Fill(gRandom->Gaus(0.,1.));
  }


  std::cout<<"outputting histograms"<<std::endl;
  outputfile="SumHistos.root";
  TFile out(outputfile.c_str(),"RECREATE");
  aa->Write();



  return;
}
