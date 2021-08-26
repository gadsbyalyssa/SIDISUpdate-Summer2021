#include <vector>
#include <string>
#include <TCanvas.h>
#include <TPad.h>
#include <TNamed.h>
#include <TH1F.h>
#include <TF1.h>
#include <TMath.h>
#include <fstream>
#include <iostream>



void ProtonAsymmetryClean()
{
double c1, c2, c3, c4, c5, c6, c7, c8, c9, c10, c11, c12, c13, c14, c15, c16, c17, c18, c19, c20, c21, c22;
vector <double> c3_list, c4_list, c5_list, c6_list, c7_list, c8_list, c9_list, c10_list, c11_list, c12_list, c13_list, c18_list, c15_list, c14_list, c16_list, c17_list, c19_list, c20_list, c21_list, c22_list ; //creates vectors to run through list

FILE * fp = fopen("Proton10.txt", "r"); 

int j, k;

gStyle->SetErrorX(0);
gStyle->SetOptStat(1111);

TH1F*h1 = new TH1F("","",20,0, 6.4); 
TH1F*h2 = new TH1F("","",20,0, 6.4);
TH1F*h3 = new TH1F("","",20,0, 6.4);
TH1F*h5 = new TH1F("","",20,0, 6.4);
TH1F*h15 = new TH1F("","",200,0,3);
TH1F*h25 = new TH1F("","",20,0, 6.4);
TH1F*h26 = new TH1F("","",20,0, 6.4);
TH1F*h28 = new TH1F("","",20,0, 6.4);
TH1F*h30 = new TH1F("","",20,0, 6.4);
TH1F*h31 = new TH1F("","",20,0, 6.4);
TH1F*h33 = new TH1F("","",20,0, 6.4);
TH1F*h35 = new TH1F("","",20,0, 6.4);
TH1F*h36 = new TH1F("","",20,0, 6.4);
TH1F*h38 = new TH1F("","",20,0, 6.4);
TH1F*h40 = new TH1F("","",20,0, 6.4);
TH1F*h41 = new TH1F("","",20,0, 6.4);
TH1F*h42 = new TH1F("","",20,0, 6.4);

char line[450];
while (fgets(&line,450,fp) ){ 
fscanf(fp, "%lf %lf %lf %lf %lf %lf %lf ", &c1, &c2, &c3, &c4, &c5, &c6, &c7);

fscanf(fp, " %lf %lf %lf %lf %lf %lf %lf %lf %lf ", &c8, &c9, &c10, &c11, &c12, &c13, &c14, &c15, &c16);

fscanf(fp, " %lf %lf %lf %lf %lf %lf ", &c17, &c18, &c19, &c20, &c21, &c22);

h1->Fill(c18);
h15->Fill(c10);

c3_list.push_back(c3);
c4_list.push_back(c4);
c5_list.push_back(c5);
c6_list.push_back(c6);
c7_list.push_back(c7);
c8_list.push_back(c8);
c9_list.push_back(c9);
c10_list.push_back(c10);
c11_list.push_back(c11);
c12_list.push_back(c12);
c13_list.push_back(c13);
c17_list.push_back(c17);
c19_list.push_back(c19);
c20_list.push_back(c20);
c21_list.push_back(c21);
c22_list.push_back(c22);
c16_list.push_back(c16);
c18_list.push_back(c18);
c15_list.push_back(c15);
c14_list.push_back(c14);
}

fclose(fp); 
gStyle->SetOptStat(1111);

///////////////////////////////////////////////////////////////////////////////////////////A1 No cuts 
for (int i=0; i<c3_list.size(); i++) { 
if (c3_list[i]==1){ h2->Fill(c18_list[i]);} 
else if (c3_list[i]==-1){ h3->Fill(c18_list[i]);} 
}

TH1F*h4 = new TH1F("","",20,0, 6.4);

std::cout << "c3: " << c3_list.size() << '\n';
for (int i=0; i<c3_list.size(); i++) { 
if (c3_list[i]==1){ h4->Fill(c18_list[i]);} 
}

std::cout << "c3: " << c3_list.size() << '\n'; 
for (int i=0; i<c3_list.size(); i++) { 
if (c3_list[i]==1){ h5->Fill(c18_list[i]);} 
}

TF1 *f1= new TF1("f1","[0]+([1]*sin(x))",0,6.4); 
h4->Add(h3, -1.0);
h5->Add(h3, 1.0);
h5->Draw();

TH1F*h10 = (TH1F*) h4->Clone("h10");
h10->Divide(h4,h5);

///////////////////////////////////////////////////////////////////////////////////////////A2 Mx>1.35
for (int i=0; i<c3_list.size(); i++) { 
if (c3_list[i]==1 && c10_list[i]>1.35){ h25->Fill(c18_list[i]);} 
else if (c3_list[i]==-1 && c10_list[i]>1.35){ h26->Fill(c18_list[i]);} 
}

TH1F*h27 = new TH1F("","",20,0, 6.4);

for (int i=0; i<c3_list.size(); i++) { 
if (c3_list[i]==1 && c10_list[i]>1.35){ h27->Fill(c18_list[i]);} 
}
for (int i=0; i<c3_list.size(); i++) { 
if (c3_list[i]==1 && c10_list[i]>1.35){ h28->Fill(c18_list[i]);} 
}
for (int i=0; i<c3_list.size(); i++) { 
if (c10_list[i]>1.35){ h40->Fill(c18_list[i]);} 
}

TF1 *f1= new TF1("f1","[0]+([1]*sin(x))",0,6.4); 
h27->Add(h26, -1.0);
h28->Add(h26, 1.0);

TH1F*h29 = (TH1F*) h27->Clone("h29");
h29->Divide(h27,h28);
///////////////////////////////////////////////////////////////////////////////////////////A3 0<Mx<1
for (int i=0; i<c3_list.size(); i++) { 
if (c3_list[i]==1 && c10_list[i]>0 && c10_list[i]<1){ h30->Fill(c18_list[i]);} 
else if (c3_list[i]==-1 && c10_list[i]>0 && c10_list[i]<1){ h31->Fill(c18_list[i]);} 
}

TH1F*h32 = new TH1F("","",20,0, 6.4);

for (int i=0; i<c3_list.size(); i++) { 
if (c3_list[i]==1 && c10_list[i]>0 && c10_list[i]<1){ h32->Fill(c18_list[i]);} 
}

for (int i=0; i<c3_list.size(); i++) { 
if (c3_list[i]==1 && c10_list[i]>0 && c10_list[i]<1){ h33->Fill(c18_list[i]);} 
}
for (int i=0; i<c3_list.size(); i++) { 
if (c10_list[i]>0 && c10_list[i]<1){ h41->Fill(c18_list[i]);} 
}

TF1 *f1= new TF1("f1","[0]+([1]*sin(x))",0,6.4); 
h32->Add(h31, -1.0);
h33->Add(h31, 1.0);

TH1F*h34 = (TH1F*) h32->Clone("h34");
h34->Divide(h32,h33);
///////////////////////////////////////////////////////////////////////////////////////////A4 1<Mx<1.35
for (int i=0; i<c3_list.size(); i++) { 
if (c3_list[i]==1 && c10_list[i]>1 && c10_list[i]<1.35){ h35->Fill(c18_list[i]);} 
else if (c3_list[i]==-1 && c10_list[i]>1 && c10_list[i]<1.35)){ h36->Fill(c18_list[i]);} 
}

TH1F*h37 = new TH1F("","",20,0, 6.4);

for (int i=0; i<c3_list.size(); i++) { 
if (c3_list[i]==1 && c10_list[i]>1 && c10_list[i]<1.35)){ h37->Fill(c18_list[i]);} 
}

for (int i=0; i<c3_list.size(); i++) { 
if (c3_list[i]==1 && c10_list[i]>1 && c10_list[i]<1.35)){ h38->Fill(c18_list[i]);} 
}
for (int i=0; i<c3_list.size(); i++) { 
if (c10_list[i]>1 && c10_list[i]<1.35)){ h42->Fill(c18_list[i]);} 
}

TF1 *f1= new TF1("f1","[0]+([1]*sin(x))",0,6.4); 
h37->Add(h36, -1.0);
h38->Add(h36, 1.0);

TH1F*h39 = (TH1F*) h36->Clone("h39");
h39->Divide(h37,h38);

///////////////////////////////////////////////////////////////////////////////////////////
/* 
   ofstream outputfile("Full-Asymmetry.txt");
    int N = h2->GetNbinsX() + 1;
    int M = h3->GetNbinsX() + 1;
    int O = h1->GetNbinsX() + 1;
    for(int i=0, int j=0, int k=0 ; i<N && j<M && k<O ; ++i && ++j && ++k){
    outputfile << "\t" << h1->GetBinLowEdge(k)+h1->GetBinWidth(k)/2  << "\t" << h2->GetBinContent(i) << "\t" << h3->GetBinContent(j) << endl;}
    outputfile.close();
*/
/*
    ofstream outputfile("bin1-Asymmetry.txt");
    int N = h25->GetNbinsX() + 1;
    int M = h26->GetNbinsX() + 1;
    int O = h1->GetNbinsX() + 1;
    for(int i=0, int j=0, int k=0 ; i<N && j<M && k<O ; ++i && ++j && ++k){
    outputfile << "\t" << h40->GetBinLowEdge(k)+h40->GetBinWidth(k)/2  << "\t" << h25->GetBinContent(i) << "\t" << h26->GetBinContent(j) << endl; }
    outputfile.close();
*/

    ofstream outputfile("bin2-Asymmetry.txt");
    int N = h30->GetNbinsX() + 1;
    int M = h31->GetNbinsX() + 1;
    int O = h1->GetNbinsX() + 1;
    for(int i=0, int j=0, int k=0 ; i<N && j<M && k<O ; ++i && ++j && ++k){
    outputfile << "\t" << h41->GetBinLowEdge(k)+h41->GetBinWidth(k)/2 << "\t" << h30->GetBinContent(i) << "\t" << h31->GetBinContent(j) << endl; }
    outputfile.close();


/*
    ofstream outputfile("bin3-Asymmetry.txt");
    int N = h35->GetNbinsX() + 1;
    int M = h36->GetNbinsX() + 1;
    int O = h1->GetNbinsX() + 1;
    for(int i=0, int j=0, int k=0 ; i<N && j<M && k<O ; ++i && ++j && ++k){
    outputfile << "\t" << h42->GetBinLowEdge(k)+h42->GetBinWidth(k)/2 << "\t" << h35->GetBinContent(i) << "\t" << h36->GetBinContent(j) << endl; }
    outputfile.close();
*/
///////////////////////////////////////////////////////////////////////////////////////////
TCanvas*c01 = new TCanvas("c01", "Mx", 1400,900);
c01->Divide(1,1);
c01->Print("Mxl.pdf[");
c01->cd(1);
h15->GetXaxis()->SetTitle("Mx");
h15->GetXaxis()->SetTitleSize(0.05);
h15->GetXaxis()->SetLabelSize(0.02);
h15->GetXaxis()->SetTitleOffset(0.9);
h15->GetYaxis()->SetTitle("Counts");
h15->GetYaxis()->SetTitleSize(0.05);
h15->GetYaxis()->SetLabelSize(0.02);
h15->GetYaxis()->SetTitleOffset(0.85);
h15->SetLineWidth(1.5);
h15->SetStats(1111);
h15->Draw();
//h15->Print(all);

/////////////////////////////////////////////////////////////////////////////////h10
TCanvas*c02 = new TCanvas("c02", "AsymNoCuts", 1400,900);
c02->Divide(1,1);
c02->Print("AsymNoCuts.pdf[");
c02->cd(1);
gStyle->SetOptStat(0);
gStyle->SetOptFit(); 
h10->GetXaxis()->SetTitle("Phi");
h10->GetXaxis()->SetTitleSize(0.05);
h10->GetXaxis()->SetLabelSize(0.05);
h10->GetXaxis()->SetTitleOffset(1);
h10->GetYaxis()->SetTitle("Asymmetry Value");
h10->GetYaxis()->SetTitleSize(0.05);
h10->GetYaxis()->SetLabelSize(0.02);
h10->GetYaxis()->SetRangeUser(-0.03,0.03);
h10->SetLineWidth(1.5);

h10->SetBinError(1,0.0067263);
h10->SetBinError(2,0.00630441);
h10->SetBinError(3,0.00581554);
h10->SetBinError(4,0.00526078);
h10->SetBinError(5,0.00479709);
h10->SetBinError(6,0.00427209);
h10->SetBinError(7,0.0037528);
h10->SetBinError(8,0.003229287);
h10->SetBinError(9,0.00277891);
h10->SetBinError(10,0.0024439);
h10->SetBinError(11,0.00260994);
h10->SetBinError(12,0.00302892);
h10->SetBinError(13,0.00352857);
h10->SetBinError(14,0.00402937);
h10->SetBinError(15,0.00457995);
h10->SetBinError(16,0.00517276);
h10->SetBinError(17,0.00574307);
h10->SetBinError(18,0.00630403);
h10->SetBinError(19,0.0067284);
h10->SetBinError(20,0.00866486);

h10->Fit("f1", "R");
h10->SetLineWidth(1.5);
h10->SetMarkerStyle(20);
h10->SetMarkerColor(4);
cout << "Chi2: " << h10->GetFunction("f1")->GetChisquare(); 
cout << " Reduced Chi2: " << h10->GetFunction("f1")->GetChisquare()/(17); 
h10->Draw("");

/////////////////////////////////////////////////////////////////////////////////h29
TCanvas*c03 = new TCanvas("c03", "Asym1", 1400,900);
c03->Divide(1,1);
c03->Print("Asym1.pdf[");
c03->cd(1);
gStyle->SetOptStat(0);
gStyle->SetOptFit();  
h29->GetXaxis()->SetTitle("Phi");
h29->GetXaxis()->SetTitleSize(0.05);
h29->GetXaxis()->SetLabelSize(0.05);
h29->GetXaxis()->SetTitleOffset(1);
h29->GetYaxis()->SetTitle("Asymmetry Value (Mx>1.35)");
h29->GetYaxis()->SetTitleSize(0.05);
h29->GetYaxis()->SetLabelSize(0.02);
h29->GetYaxis()->SetRangeUser(-0.03,0.03);
h29->SetLineWidth(1.5);

h29->SetBinError(1,0.0067263);
h29->SetBinError(2,0.00630441);
h29->SetBinError(3,0.00581554);
h29->SetBinError(4,0.00526078);
h29->SetBinError(5,0.00479709);
h29->SetBinError(6,0.00427209);
h29->SetBinError(7,0.0037528);
h29->SetBinError(8,0.003229287);
h29->SetBinError(9,0.00277891);
h29->SetBinError(10,0.0024439);
h29->SetBinError(11,0.00260994);
h29->SetBinError(12,0.00302892);
h29->SetBinError(13,0.00352857);
h29->SetBinError(14,0.00402937);
h29->SetBinError(15,0.00457995);
h29->SetBinError(16,0.00517276);
h29->SetBinError(17,0.00574307);
h29->SetBinError(18,0.00630403);
h29->SetBinError(19,0.0067284);
h29->SetBinError(20,0.00866486);

h29->Fit("f1", "R");
h29->SetLineWidth(1.5);
h29->SetMarkerStyle(20);
h29->SetMarkerColor(4);
cout << "Chi2: " << h29->GetFunction("f1")->GetChisquare(); 
cout << " Reduced Chi2: " << h29->GetFunction("f1")->GetChisquare()/(17); 
h29->Draw("");
/////////////////////////////////////////////////////////////////////////////////h29
TCanvas*c04 = new TCanvas("c04", "Asym2", 1400,900);
c04->Divide(1,1);
c04->Print("Asym2.pdf[");
c04->cd(1);
gStyle->SetOptStat(0);
gStyle->SetOptFit();  
h34->GetXaxis()->SetTitle("Phi");
h34->GetXaxis()->SetTitleSize(0.05);
h34->GetXaxis()->SetLabelSize(0.05);
h34->GetXaxis()->SetTitleOffset(1);
h34->GetYaxis()->SetTitle("Asymmetry Value (0<Mx<1)");
h34->GetYaxis()->SetTitleSize(0.05);
h34->GetYaxis()->SetLabelSize(0.02);
h34->GetYaxis()->SetRangeUser(-0.03,0.03);
h34->SetLineWidth(1.5);

h34->SetBinError(1,0.0067263);
h34->SetBinError(2,0.00630441);
h34->SetBinError(3,0.00581554);
h34->SetBinError(4,0.00526078);
h34->SetBinError(5,0.00479709);
h34->SetBinError(6,0.00427209);
h34->SetBinError(7,0.0037528);
h34->SetBinError(8,0.003229287);
h34->SetBinError(9,0.00277891);
h34->SetBinError(10,0.0024439);
h34->SetBinError(11,0.00260994);
h34->SetBinError(12,0.00302892);
h34->SetBinError(13,0.00352857);
h34->SetBinError(14,0.00402937);
h34->SetBinError(15,0.00457995);
h34->SetBinError(16,0.00517276);
h34->SetBinError(17,0.00574307);
h34->SetBinError(18,0.00630403);
h34->SetBinError(19,0.0067284);
h34->SetBinError(20,0.00866486);

h34->Fit("f1", "R");
h34->SetLineWidth(1.5);
h34->SetMarkerStyle(20);
h34->SetMarkerColor(4);
cout << "Chi2: " << h34->GetFunction("f1")->GetChisquare(); 
cout << " Reduced Chi2: " << h34->GetFunction("f1")->GetChisquare()/(17); 
h34->Draw("");
/////////////////////////////////////////////////////////////////////////////////h39
TCanvas*c05 = new TCanvas("c05", "Asym3", 1400,900);
c05->Divide(1,1);
c05->Print("Asym3.pdf[");
c05->cd(1);
gStyle->SetOptStat(0);
gStyle->SetOptFit();  
h39->GetXaxis()->SetTitle("Phi");
h39->GetXaxis()->SetTitleSize(0.05);
h39->GetXaxis()->SetLabelSize(0.05);
h39->GetXaxis()->SetTitleOffset(1);
h39->GetYaxis()->SetTitle("Asymmetry Value (1<Mx<1.35)");
h39->GetYaxis()->SetTitleSize(0.05);
h39->GetYaxis()->SetLabelSize(0.02);
h39->GetYaxis()->SetRangeUser(-0.03,0.03);
h39->SetLineWidth(1.5);

h39->SetBinError(1,0.0067263);
h39->SetBinError(2,0.00630441);
h39->SetBinError(3,0.00581554);
h39->SetBinError(4,0.00526078);
h39->SetBinError(5,0.00479709);
h39->SetBinError(6,0.00427209);
h39->SetBinError(7,0.0037528);
h39->SetBinError(8,0.003229287);
h39->SetBinError(9,0.00277891);
h39->SetBinError(10,0.0024439);
h39->SetBinError(11,0.00260994);
h39->SetBinError(12,0.00302892);
h39->SetBinError(13,0.00352857);
h39->SetBinError(14,0.00402937);
h39->SetBinError(15,0.00457995);
h39->SetBinError(16,0.00517276);
h39->SetBinError(17,0.00574307);
h39->SetBinError(18,0.00630403);
h39->SetBinError(19,0.0067284);
h39->SetBinError(20,0.00866486);

h39->Fit("f1", "R");
h39->SetLineWidth(1.5);
h39->SetMarkerStyle(20);
h39->SetMarkerColor(4);
cout << "Chi2: " << h39->GetFunction("f1")->GetChisquare(); 
cout << " Reduced Chi2: " << h39->GetFunction("f1")->GetChisquare()/(17); 
h39->Draw("");

gPad->Modified();
gPad->Update();

c01->Print("Mxl.pdf");
c01->Print("Mxl.pdf]");
c02->Print("AsymNoCuts.pdf");
c02->Print("AsymNoCuts.pdf]");
c03->Print("Asym1.pdf");
c03->Print("Asym1.pdf]");
c04->Print("Asym2.pdf");
c04->Print("Asym2.pdf]");
c05->Print("Asym3.pdf");
c05->Print("Asym3.pdf]");
}



