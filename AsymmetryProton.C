#include <vector>
#include <string>
#include <TCanvas.h>
#include <TPad.h>
#include <TH1F.h>
#include <TF1.h>
#include <fstream>
#include <iostream>



void AsymmetryProton()
{
double phi1, asym1, err1, phi2, asym2, err2, phi3, asym3, err3, phi4, asym4, err4 ;

FILE * fp1 = fopen("Full-Asymmetry-Out.txt", "r"); 
FILE * fp2 = fopen("bin1-Asymmetry-Out.txt", "r"); 
FILE * fp3 = fopen("bin2-Asymmetry-Out.txt", "r"); 
FILE * fp4 = fopen("bin3-Asymmetry-Out.txt", "r"); 

int n=0;
int m=0;
int o=0;
int p=0;

////////////////////////////////////////////////////////////////////////////////
TCanvas*c01 = new TCanvas("c01", "Full Asymm", 1600,1000);
c01->Divide(1,1);
c01->Print("FullAsymmetryProton.pdf[");
TGraphErrors*h1 = new TGraphErrors();

for(int k=0; k<20; k++){ 
fscanf(fp1, "%lf %lf %lf ", &phi1, &asym1, &err1);

n = h1->GetN();

h1->SetPoint(n, phi1, asym1);
h1->SetPointError(n ,0, err1);

}
fclose(fp1);
////////////////////////////////////////////////////////////////////////////////
TCanvas*c02 = new TCanvas("c02", "Bin 1 Asymm", 1600,1000);
c02->Divide(1,1);
c02->Print("Bin1AsymmetryProton.pdf[");
TGraphErrors*h2 = new TGraphErrors(); 

for(int k=0; k<20; k++){ 
fscanf(fp2, "%lf %lf %lf ", &phi2, &asym2, &err2);

m = h2->GetN();

h2->SetPoint(m, phi2, asym2);
h2->SetPointError(m ,0, err2);

}
fclose(fp2);
////////////////////////////////////////////////////////////////////////////////
TCanvas*c03 = new TCanvas("c03", "Bin 2 Asymm", 1600,1000);
c03->Divide(1,1);
c03->Print("Bin2AsymmetryProton.pdf[");
TGraphErrors*h3 = new TGraphErrors(); 

for(int k=0; k<20; k++){ 
fscanf(fp3, "%lf %lf %lf ", &phi3, &asym3, &err3);

o = h3->GetN();

h3->SetPoint(o, phi3, asym3);
h3->SetPointError(o ,0, err3);

}
fclose(fp3);
////////////////////////////////////////////////////////////////////////////////
TCanvas*c04 = new TCanvas("c04", "Bin 3 Asymm", 1600,1000);
c04->Divide(1,1);
c04->Print("Bin3AsymmetryProton.pdf[");
TGraphErrors*h4 = new TGraphErrors(); 

for(int k=0; k<20; k++){ 
fscanf(fp4, "%lf %lf %lf ", &phi4, &asym4, &err4);

p = h4->GetN();

h4->SetPoint(p, phi4, asym4);
h4->SetPointError(p ,0, err4);

}
fclose(fp4);
////////////////////////////////////////////////////////////////////////////////

TF1 *f1= new TF1("f1","[0]+([1]*sin(x))",0,6.4); 


c01->cd(1);
gStyle->SetOptStat(0);
gStyle->SetOptFit(); 
h1->GetXaxis()->SetTitle("Phi");
h1->GetXaxis()->SetTitleSize(0.05);
h1->GetXaxis()->SetLabelSize(0.05);
h1->GetXaxis()->SetTitleOffset(1);
h1->GetYaxis()->SetTitle("Asymmetry Value");
h1->GetYaxis()->SetTitleSize(0.05);
h1->GetYaxis()->SetLabelSize(0.02);
h1->GetYaxis()->SetRangeUser(-0.03,0.03);
h1->SetLineWidth(1.5);

h1->Fit("f1", "R");
h1->SetLineWidth(1.5);
h1->SetMarkerStyle(20);
h1->SetMarkerColor(4);
cout << "Chi2: " << h1->GetFunction("f1")->GetChisquare(); 
cout << " Reduced Chi2: " << h1->GetFunction("f1")->GetChisquare()/(17); 
h1->Draw("AP");

c02->cd(1);
gStyle->SetOptStat(0);
gStyle->SetOptFit(); 
h2->GetXaxis()->SetTitle("Phi");
h2->GetXaxis()->SetTitleSize(0.05);
h2->GetXaxis()->SetLabelSize(0.05);
h2->GetXaxis()->SetTitleOffset(1);
h2->GetYaxis()->SetTitle("Asymmetry Value (0<Mx<1)");
h2->GetYaxis()->SetTitleSize(0.05);
h2->GetYaxis()->SetLabelSize(0.02);
h2->GetYaxis()->SetRangeUser(-0.03,0.03);
h2->SetLineWidth(1.5);

h2->Fit("f1", "R");
h2->SetLineWidth(1.5);
h2->SetMarkerStyle(20);
h2->SetMarkerColor(4);
cout << "Chi2: " << h2->GetFunction("f1")->GetChisquare(); 
cout << " Reduced Chi2: " << h2->GetFunction("f1")->GetChisquare()/(17); 
h2->Draw("AP");

c03->cd(1);
gStyle->SetOptStat(0);
gStyle->SetOptFit(); 
h3->GetXaxis()->SetTitle("Phi");
h3->GetXaxis()->SetTitleSize(0.05);
h3->GetXaxis()->SetLabelSize(0.05);
h3->GetXaxis()->SetTitleOffset(1);
h3->GetYaxis()->SetTitle("Asymmetry Value (1<Mx<1.35)");
h3->GetYaxis()->SetTitleSize(0.05);
h3->GetYaxis()->SetLabelSize(0.02);
h3->GetYaxis()->SetRangeUser(-0.03,0.03);
h3->SetLineWidth(1.5);

h3->Fit("f1", "R");
h3->SetLineWidth(1.5);
h3->SetMarkerStyle(20);
h3->SetMarkerColor(4);
cout << "Chi2: " << h3->GetFunction("f1")->GetChisquare(); 
cout << " Reduced Chi2: " << h3->GetFunction("f1")->GetChisquare()/(17); 
h3->Draw("AP");

c04->cd(1);
gStyle->SetOptStat(0);
gStyle->SetOptFit(); 
h4->GetXaxis()->SetTitle("Phi");
h4->GetXaxis()->SetTitleSize(0.05);
h4->GetXaxis()->SetLabelSize(0.05);
h4->GetXaxis()->SetTitleOffset(1);
h4->GetYaxis()->SetTitle("Asymmetry Value (Mx>1.35)");
h4->GetYaxis()->SetTitleSize(0.05);
h4->GetYaxis()->SetLabelSize(0.02);
h4->GetYaxis()->SetRangeUser(-0.03,0.03);
h4->SetLineWidth(1.5);

h4->Fit("f1", "R");
h4->SetLineWidth(1.5);
h4->SetMarkerStyle(20);
h4->SetMarkerColor(4);
cout << "Chi2: " << h4->GetFunction("f1")->GetChisquare(); 
cout << " Reduced Chi2: " << h4->GetFunction("f1")->GetChisquare()/(17); 
h4->Draw("AP");

gPad->Modified();
gPad->Update();

c01->Print("FullAsymmetryProton.pdf");
c01->Print("FullAsymmetryProton.pdf]");
c02->Print("Bin1AsymmetryProton.pdf");
c02->Print("Bin1AsymmetryProton.pdf]");
c03->Print("Bin2AsymmetryProton.pdf");
c03->Print("Bin2AsymmetryProton.pdf]");
c04->Print("Bin3AsymmetryProton.pdf");
c04->Print("Bin3AsymmetryProton.pdf]");
}
