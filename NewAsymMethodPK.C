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
#include <cmath>



void NewAsymMethodPK()
{
double c1, c2, c3, c4, c5, c6, c7, c8, c9, c10, c11, c12, c13, c14, c15, c16, c17, c18, c19, c20, c21, c22, c23, c24, c25, c26, c27, c28, c29, c30, c31, c32, c33;
vector <double> c1_list, c3_list, c16_list, c17_list, c24_list, c25_list, c18_list, c22_list, c23_list, c26_list, c27_list, c28_list, c29_list, c30_list, c31_list, c32_list, c33_list ; //creates vectors to run through list

FILE * fp = fopen("dihadron_dummy_outd3.txt", "r"); //opens txt file to read in

int j, k;
//3 canvases below to plot graphs on and make them easy to see
TCanvas*c01 = new TCanvas("c01", "A1", 1600,1100);
c01->Divide(1,1);
c01->Print("NewAsymMethod1.pdf[");
TCanvas*c02 = new TCanvas("c02", "A2", 1600,1100);
c02->Divide(1,1);
c02->Print("NewAsymMethod2.pdf[");
TCanvas*c04 = new TCanvas("c04", "A4", 1600,1100);
c04->Divide(1,1);
c04->Print("NewAsymMethod4.pdf[");
TCanvas*c05 = new TCanvas("c05", "A5", 1600,1100);
c05->Divide(1,1);
c05->Print("NewAsymMethod5.pdf[");
TCanvas*c06 = new TCanvas("c06", "A6", 1600,1100);
c06->Divide(1,1);
c06->Print("NewAsymMethod6.pdf[");
TCanvas*c07 = new TCanvas("c07", "A7", 1600,1100);
c07->Divide(1,1);
c07->Print("NewAsymMethod7.pdf[");
TCanvas*c08 = new TCanvas("c08", "A8", 1600,1100);
c08->Divide(1,1);
c08->Print("NewAsymMethod8.pdf[");
TCanvas*c09 = new TCanvas("c09", "A9", 1600,1100);
c09->Divide(1,1);
c09->Print("NewAsymMethod9.pdf[");
TCanvas*c010 = new TCanvas("c010", "A10", 1600,1100);
c010->Divide(1,1);
c010->Print("NewAsymMethod10.pdf[");
TCanvas*c011 = new TCanvas("c011", "A11", 1600,1100);
c011->Divide(1,1);
c011->Print("NewAsymMethod11.pdf[");
TCanvas*c012 = new TCanvas("c012", "A12", 1600,1100);
c012->Divide(1,1);
c012->Print("NewAsymMethod12.pdf[");
TCanvas*c013 = new TCanvas("c013", "A13", 1600,1100);
c013->Divide(1,1);
c013->Print("NewAsymMethod13.pdf[");
TCanvas*c014 = new TCanvas("c014", "A14", 1600,1100);
c014->Divide(1,1);
c014->Print("NewAsymMethod14.pdf[");
TCanvas*c015 = new TCanvas("c015", "A15", 1600,1100);
c015->Divide(1,1);
c015->Print("NewAsymMethod15.pdf[");
TCanvas*c016 = new TCanvas("c016", "A16", 1600,1100);
c016->Divide(1,1);
c016->Print("NewAsymMethod16.pdf[");
TCanvas*c017 = new TCanvas("c017", "A17", 1600,1100);
c017->Divide(1,1);
c017->Print("NewAsymMethod17.pdf[");


//calls to histograms
gStyle->SetErrorX(0);
TH1F*h1 = new TH1F("","",5,0, 1); 
TH1F*h3 = new TH1F("","",5,0,1); 
TH1F*h5 = new TH1F("","",5,0, 1); 
TH1F*h7 = new TH1F("","",5,0, 1); 
TH1F*h9 = new TH1F("","",5,0, 1); 
TH1F*h11 = new TH1F("","",5,0, 1);
TH1F*h14 = new TH1F("","",5,0, 1); 
TH1F*h16 = new TH1F("","",5,0, 1);  
TH1F*h18 = new TH1F("","",5,0, 1); 
TH1F*h20 = new TH1F("","",5,0, 1);  
TH1F*h23 = new TH1F("","",5,0, 1); 
TH1F*h25 = new TH1F("","",5,0, 1);  
TH1F*h27 = new TH1F("","",5,0, 1); 
TH1F*h29 = new TH1F("","",5,0, 1); 
TH1F*h32 = new TH1F("","",5,0, 1); 
TH1F*h34 = new TH1F("","",5,0, 1);
TH1F*h36 = new TH1F("","",5,0, 1); 
TH1F*h38 = new TH1F("","",5,0, 1);  
TH1F*h41 = new TH1F("","",5,0, 1);  
TH1F*h43 = new TH1F("","",5,0, 1); 
TH1F*h45 = new TH1F("","",5,0, 1); 
TH1F*h47 = new TH1F("","",5,0, 1); 

char line[450];
while (fgets(&line,450,fp) ){ 

fscanf(fp, "%lf %lf %lf %lf %lf %lf %lf ", &c1, &c2, &c3, &c4, &c5, &c6, &c7);

fscanf(fp, " %lf %lf %lf %lf %lf %lf %lf %lf %lf ", &c8, &c9, &c10, &c11, &c12, &c13, &c14, &c15, &c16);

fscanf(fp, " %lf %lf %lf %lf %lf %lf %lf %lf %lf ", &c17, &c18, &c19, &c20, &c21, &c22, &c23, &c24, &c25);

fscanf(fp, " %lf %lf %lf %lf %lf %lf %lf %lf ", &c26, &c27, &c28, &c29, &c30, &c31, &c32, &c33);

TH1F*h51 = new TH1F("51","51",100,0, 0.6);
h51->Fill(c24);
TH1F*h52 = new TH1F("52","52",100,0, 0.6);
h52->Fill(c25);

c1_list.push_back(c1);
c3_list.push_back(c3);
c16_list.push_back(c16);
c17_list.push_back(c17);
c18_list.push_back(c18);
c22_list.push_back(c22);
c23_list.push_back(c23);
c24_list.push_back(c24);
c25_list.push_back(c25);
c26_list.push_back(c26);
c27_list.push_back(c27);
c28_list.push_back(c28);
c29_list.push_back(c29);
c30_list.push_back(c30);
c31_list.push_back(c31);
c32_list.push_back(c32);
c33_list.push_back(c33);

}

fclose(fp);



/////////////////////////////////////////////////////////////////////
/////////////////////////////////////////////////////////////////////Asymmetry 0->pi & pi->2pi (positive helicity)
for (int i=0; i<c3_list.size(); i++) { 
if (c3_list[i]==1 && c33_list[i]>1 && c18_list[i]>3.14159 && c18_list[i]<6.28318 && c23_list[i]>0 && c23_list[i]<0.2){ h1->Fill(c23_list[i]);} 
}
TH1F*h2 = new TH1F("","",5,0, 1);

for (int i=0; i<c3_list.size(); i++) { 
if (c3_list[i]==1 && c33_list[i]>1 && c18_list[i]>0 && c18_list[i]<3.14159 && c23_list[i]>0 && c23_list[i]<0.2)){ h2->Fill(c23_list[i]);} 
}
for (int i=0; i<c3_list.size(); i++) { 
if (c3_list[i]==1 && c33_list[i]>1 && c18_list[i]>0 && c18_list[i]<3.14159 && c23_list[i]>0 && c23_list[i]<0.2)){ h3->Fill(c23_list[i]);} 
}
/////////////////////////////////////////////////////////////////////
h2->Add(h1, -1.0);
h3->Add(h1, 1.0);
TH1F*h4 = (TH1F*) h2->Clone("h4");
h4->Divide(h2,h3);
/////////////////////////////////////////////////////////////////////
/////////////////////////////////////////////////////////////////////Asymmetry  0->pi & pi->2pi (negative helicity)

for (int i=0; i<c3_list.size(); i++) { 
if (c3_list[i]==-1 && c33_list[i]>1 && c18_list[i]>3.14159 && c18_list[i]<6.28318 && c23_list[i]>0 && c23_list[i]<0.2){ h5->Fill(c23_list[i]);} 
}
TH1F*h6 = new TH1F("","",5,0, 1);

for (int i=0; i<c3_list.size(); i++) { 
if (c3_list[i]==-1 && c33_list[i]>1 && c18_list[i]>0 && c18_list[i]<3.14159 && c23_list[i]>0 && c23_list[i]<0.2){ h6->Fill(c23_list[i]);} 
}
for (int i=0; i<c3_list.size(); i++) { 
if (c3_list[i]==-1 && c33_list[i]>1 && c18_list[i]>0 && c18_list[i]<3.14159 && c23_list[i]>0 && c23_list[i]<0.2){ h7->Fill(c23_list[i]);} 
}
/////////////////////////////////////////////////////////////////////
h6->Add(h5, -1.0);
h7->Add(h5, 1.0);
TH1F*h8 = (TH1F*) h6->Clone("h8");
h8->Divide(h6,h7);
/////////////////////////////////////////////////////////////////////
TH1F*h13 = new TH1F("","",5,0, 1);
h13->Add(h4);
h13->Add(h8, -1.0);

/////////////////////////////////////////////////////////////////////
/////////////////////////////////////////////////////////////////////Asymmetry 0->pi & pi->2pi (positive helicity)
for (int i=0; i<c3_list.size(); i++) { 
if (c3_list[i]==1 && c33_list[i]>1 && c18_list[i]>3.14159 && c18_list[i]<6.28318 && c23_list[i]>0.2 && c23_list[i]<0.4){ h14->Fill(c23_list[i]);} 
}
TH1F*h15 = new TH1F("","",5,0, 1);

for (int i=0; i<c3_list.size(); i++) { 
if (c3_list[i]==1 && c33_list[i]>1 && c18_list[i]>0 && c18_list[i]<3.14159 && c23_list[i]>0.2 && c23_list[i]<0.4)){ h15->Fill(c23_list[i]);} 
}
for (int i=0; i<c3_list.size(); i++) { 
if (c3_list[i]==1 && c33_list[i]>1 && c18_list[i]>0 && c18_list[i]<3.14159 && c23_list[i]>0.2 && c23_list[i]<0.4)){ h16->Fill(c23_list[i]);} 
}
/////////////////////////////////////////////////////////////////////
h15->Add(h14, -1.0);
h16->Add(h14, 1.0);
TH1F*h17 = (TH1F*) h15->Clone("h17");
h17->Divide(h15,h16);
/////////////////////////////////////////////////////////////////////
/////////////////////////////////////////////////////////////////////Asymmetry  0->pi & pi->2pi (negative helicity)

for (int i=0; i<c3_list.size(); i++) { 
if (c3_list[i]==-1 && c33_list[i]>1 && c18_list[i]>3.14159 && c18_list[i]<6.28318 && c23_list[i]>0.2 && c23_list[i]<0.4){ h18->Fill(c23_list[i]);} 
}
TH1F*h19 = new TH1F("","",5,0, 1);

for (int i=0; i<c3_list.size(); i++) { 
if (c3_list[i]==-1 && c33_list[i]>1 && c18_list[i]>0 && c18_list[i]<3.14159 && c23_list[i]>0.2 && c23_list[i]<0.4){ h19->Fill(c23_list[i]);} 
}
for (int i=0; i<c3_list.size(); i++) { 
if (c3_list[i]==-1 && c33_list[i]>1 && c18_list[i]>0 && c18_list[i]<3.14159 && c23_list[i]>0.2 && c23_list[i]<0.4){ h20->Fill(c23_list[i]);} 
}
/////////////////////////////////////////////////////////////////////
h19->Add(h18, -1.0);
h20->Add(h18, 1.0);
TH1F*h21 = (TH1F*) h19->Clone("h21");
h21->Divide(h19,h20);
/////////////////////////////////////////////////////////////////////
TH1F*h22 = new TH1F("","",5,0, 1);
h22->Add(h17); 
h22->Add(h21, -1.0); 




/////////////////////////////////////////////////////////////////////
/////////////////////////////////////////////////////////////////////Asymmetry 0->pi & pi->2pi (positive helicity)
for (int i=0; i<c3_list.size(); i++) { 
if (c3_list[i]==1 && c33_list[i]>1 && c18_list[i]>3.14159 && c18_list[i]<6.28318 && c23_list[i]>0.4 && c23_list[i]<0.6){ h23->Fill(c23_list[i]);} 
}
TH1F*h24 = new TH1F("","",5,0, 1);

for (int i=0; i<c3_list.size(); i++) { 
if (c3_list[i]==1 && c33_list[i]>1 && c18_list[i]>0 && c18_list[i]<3.14159 && c23_list[i]>0.4 && c23_list[i]<0.6)){ h24->Fill(c23_list[i]);} 
}
for (int i=0; i<c3_list.size(); i++) { 
if (c3_list[i]==1 && c33_list[i]>1 && c18_list[i]>0 && c18_list[i]<3.14159 && c23_list[i]>0.4 && c23_list[i]<0.6)){ h25->Fill(c23_list[i]);} 
}
/////////////////////////////////////////////////////////////////////
h24->Add(h23, -1.0);
h25->Add(h23, 1.0);
TH1F*h26 = (TH1F*) h24->Clone("h26");
h26->Divide(h24,h25);
/////////////////////////////////////////////////////////////////////
/////////////////////////////////////////////////////////////////////Asymmetry  0->pi & pi->2pi (negative helicity)
for (int i=0; i<c3_list.size(); i++) { 
if (c3_list[i]==-1 && c33_list[i]>1 && c18_list[i]>3.14159 && c18_list[i]<6.28318 && c23_list[i]>0.4 && c23_list[i]<0.6){ h27->Fill(c23_list[i]);} 
}
TH1F*h28 = new TH1F("","",5,0, 1);

for (int i=0; i<c3_list.size(); i++) { 
if (c3_list[i]==-1 && c33_list[i]>1 && c18_list[i]>0 && c18_list[i]<3.14159 && c23_list[i]>0.4 && c23_list[i]<0.6){ h28->Fill(c23_list[i]);} 
}
for (int i=0; i<c3_list.size(); i++) { 
if (c3_list[i]==-1 && c33_list[i]>1 && c18_list[i]>0 && c18_list[i]<3.14159 && c23_list[i]>0.4 && c23_list[i]<0.6){ h29->Fill(c23_list[i]);} 
}
/////////////////////////////////////////////////////////////////////
h28->Add(h27, -1.0);
h29->Add(h27, 1.0);
TH1F*h30 = (TH1F*) h28->Clone("h30");
h30->Divide(h28,h29);
/////////////////////////////////////////////////////////////////////
TH1F*h31 = new TH1F("","",5,0, 1);
h31->Add(h26); 
h31->Add(h30, -1.0); 



/////////////////////////////////////////////////////////////////////
/////////////////////////////////////////////////////////////////////Asymmetry 0->pi & pi->2pi (positive helicity)
for (int i=0; i<c3_list.size(); i++) { 
if (c3_list[i]==1 && c33_list[i]>1 && c18_list[i]>3.14159 && c18_list[i]<6.28318 && c23_list[i]>0.6 && c23_list[i]<0.8){ h32->Fill(c23_list[i]);} 
}
TH1F*h33 = new TH1F("","",5,0, 1);

for (int i=0; i<c3_list.size(); i++) { 
if (c3_list[i]==1 && c33_list[i]>1 && c18_list[i]>0 && c18_list[i]<3.14159 && c23_list[i]>0.6 && c23_list[i]<0.8)){ h33->Fill(c23_list[i]);} 
}
for (int i=0; i<c3_list.size(); i++) { 
if (c3_list[i]==1 && c33_list[i]>1 && c18_list[i]>0 && c18_list[i]<3.14159 && c23_list[i]>0.6 && c23_list[i]<0.8)){ h34->Fill(c23_list[i]);} 
}
/////////////////////////////////////////////////////////////////////
h33->Add(h32, -1.0);
h34->Add(h32, 1.0);
TH1F*h35 = (TH1F*) h33->Clone("h35");
h35->Divide(h33,h34);
/////////////////////////////////////////////////////////////////////
/////////////////////////////////////////////////////////////////////Asymmetry  0->pi & pi->2pi (negative helicity)
for (int i=0; i<c3_list.size(); i++) { 
if (c3_list[i]==-1 && c33_list[i]>1 && c18_list[i]>3.14159 && c18_list[i]<6.28318 && c23_list[i]>0.6 && c23_list[i]<0.8){ h36->Fill(c23_list[i]);} 
}
TH1F*h37 = new TH1F("","",5,0, 1);

for (int i=0; i<c3_list.size(); i++) { 
if (c3_list[i]==-1 && c33_list[i]>1 && c18_list[i]>0 && c18_list[i]<3.14159 && c23_list[i]>0.6 && c23_list[i]<0.8){ h37->Fill(c23_list[i]);} 
}
for (int i=0; i<c3_list.size(); i++) { 
if (c3_list[i]==-1 && c33_list[i]>1 && c18_list[i]>0 && c18_list[i]<3.14159 && c23_list[i]>0.6 && c23_list[i]<0.8){ h38->Fill(c23_list[i]);} 
}
/////////////////////////////////////////////////////////////////////
h37->Add(h36, -1.0);
h38->Add(h36, 1.0);
TH1F*h39 = (TH1F*) h37->Clone("h39");
h39->Divide(h37,h38);
/////////////////////////////////////////////////////////////////////
TH1F*h40 = new TH1F("","",5,0, 1);
h40->Add(h35); 
h40->Add(h39, -1.0); 



/////////////////////////////////////////////////////////////////////
/////////////////////////////////////////////////////////////////////Asymmetry 0->pi & pi->2pi (positive helicity)
for (int i=0; i<c3_list.size(); i++) { 
if (c3_list[i]==1 && c33_list[i]>1 && c18_list[i]>3.14159 && c18_list[i]<6.28318 && c23_list[i]>0.8){ h41->Fill(c23_list[i]);} 
}
TH1F*h42 = new TH1F("","",5,0, 1);

for (int i=0; i<c3_list.size(); i++) { 
if (c3_list[i]==1 && c33_list[i]>1 && c18_list[i]>0 && c18_list[i]<3.14159 && c23_list[i]>0.8)){ h42->Fill(c23_list[i]);} 
}
for (int i=0; i<c3_list.size(); i++) { 
if (c3_list[i]==1 && c33_list[i]>1 && c18_list[i]>0 && c18_list[i]<3.14159 && c23_list[i]>0.8)){ h43->Fill(c23_list[i]);} 
}
/////////////////////////////////////////////////////////////////////
h42->Add(h41, -1.0);
h43->Add(h41, 1.0);
TH1F*h44 = (TH1F*) h42->Clone("h44");
h44->Divide(h42,h43);
/////////////////////////////////////////////////////////////////////
/////////////////////////////////////////////////////////////////////Asymmetry  0->pi & pi->2pi (negative helicity)
for (int i=0; i<c3_list.size(); i++) { 
if (c3_list[i]==-1 && c33_list[i]>1 && c18_list[i]>3.14159 && c18_list[i]<6.28318 && c23_list[i]>0.8){ h45->Fill(c23_list[i]);} 
}
TH1F*h46 = new TH1F("","",5,0, 1);

for (int i=0; i<c3_list.size(); i++) { 
if (c3_list[i]==-1 && c33_list[i]>1 && c18_list[i]>0 && c18_list[i]<3.14159 && c23_list[i]>0.8){ h46->Fill(c23_list[i]);} 
}
for (int i=0; i<c3_list.size(); i++) { 
if (c3_list[i]==-1 && c33_list[i]>1 && c18_list[i]>0 && c18_list[i]<3.14159 && c23_list[i]>0.8){ h47->Fill(c23_list[i]);} 
}
/////////////////////////////////////////////////////////////////////
h46->Add(h45, -1.0);
h47->Add(h45, 1.0);
TH1F*h48 = (TH1F*) h46->Clone("h48");
h48->Divide(h46,h47);
/////////////////////////////////////////////////////////////////////
TH1F*h49 = new TH1F("","",5,0, 1);
h49->Add(h44); 
h49->Add(h48, -1.0); 

TH1F*h50 = new TH1F("","",5,0, 1);
h50->Add(h13);
h50->Add(h22);
h50->Add(h31);
h50->Add(h40);
h50->Add(h49);
h50->Print("all");



/////////////////////////////////////////////////////////////////////
c01->cd(1);
gStyle->SetOptStat(0);
gStyle->SetOptFit(); 
h4->GetXaxis()->SetTitle("pTpT");
h4->GetXaxis()->SetTitleSize(0.05);
h4->GetXaxis()->SetLabelSize(0.03);
h4->GetXaxis()->SetTitleOffset(1);
h4->GetYaxis()->SetTitle("Asymmetry(Positive Helicity 0<pTpT<0.2)");
h4->GetYaxis()->SetTitleSize(0.05);
h4->GetYaxis()->SetLabelSize(0.03);
//h4->GetYaxis()->SetRangeUser(-0.03,0.03);
h4->SetLineWidth(1.5);

h4->SetBinError(1,0.014476907);
h4->SetBinError(2,0.01360019);
h4->SetBinError(3,0.012668813);
h4->SetBinError(4,0.011523619);
h4->SetBinError(5,0.010530175);

h4->SetLineWidth(1.5);
h4->SetMarkerStyle(20);
h4->SetMarkerColor(4);
h4->Draw("");
/////////////////////////////////////////////////////////////////////
c02->cd(1);
gStyle->SetOptStat(0);
gStyle->SetOptFit(); 
h8->GetXaxis()->SetTitle("pTpT");
h8->GetXaxis()->SetTitleSize(0.05);
h8->GetXaxis()->SetLabelSize(0.03);
h8->GetXaxis()->SetTitleOffset(1);
h8->GetYaxis()->SetTitle("Asymmetry(Negative Helicity 0<pTpT<0.2)");
h8->GetYaxis()->SetTitleSize(0.05);
h8->GetYaxis()->SetLabelSize(0.03);
//h8->GetYaxis()->SetRangeUser(-0.03,0.03);
h8->SetLineWidth(1.5);

h8->SetBinError(1,0.014476907);
h8->SetBinError(2,0.01360019);
h8->SetBinError(3,0.012668813);
h8->SetBinError(4,0.011523619);
h8->SetBinError(5,0.010530175);

h8->SetLineWidth(1.5);
h8->SetMarkerStyle(20);
h8->SetMarkerColor(4);
h8->Draw("");
/////////////////////////////////////////////////////////////////////
c04->cd(1);
gStyle->SetOptStat(0);
gStyle->SetOptFit(); 
h13->GetXaxis()->SetTitle("pTpT");
h13->GetXaxis()->SetTitleSize(0.05);
h13->GetXaxis()->SetLabelSize(0.03);
h13->GetXaxis()->SetTitleOffset(1);
h13->GetYaxis()->SetTitle("Asymmetry(Sum Helicity 0.2<pTpT<0.4)");
h13->GetYaxis()->SetTitleSize(0.05);
h13->GetYaxis()->SetLabelSize(0.03);
//h12->GetYaxis()->SetRangeUser(-0.03,0.03);
h13->SetLineWidth(1.5);

h13->SetBinError(1,0.014476907);
h13->SetBinError(2,0.01360019);
h13->SetBinError(3,0.012668813);
h13->SetBinError(4,0.011523619);
h13->SetBinError(5,0.010530175);

h13->SetLineWidth(1.5);
h13->SetMarkerStyle(20);
h13->SetMarkerColor(4);
h13->Draw("");
/////////////////////////////////////////////////////////////////////
c05->cd(1);
gStyle->SetOptStat(0);
gStyle->SetOptFit(); 
h17->GetXaxis()->SetTitle("pTpT");
h17->GetXaxis()->SetTitleSize(0.05);
h17->GetXaxis()->SetLabelSize(0.03);
h17->GetXaxis()->SetTitleOffset(1);
h17->GetYaxis()->SetTitle("Asymmetry(Positive Helicity 0.2<pTpT<0.4)");
h17->GetYaxis()->SetTitleSize(0.05);
h17->GetYaxis()->SetLabelSize(0.03);
//h12->GetYaxis()->SetRangeUser(-0.03,0.03);
h17->SetLineWidth(1.5);

h17->SetBinError(1,0.014476907);
h17->SetBinError(2,0.01360019);
h17->SetBinError(3,0.012668813);
h17->SetBinError(4,0.011523619);
h17->SetBinError(5,0.010530175);

h17->SetLineWidth(1.5);
h17->SetMarkerStyle(20);
h17->SetMarkerColor(4);
h17->Draw("");
/////////////////////////////////////////////////////////////////////
c06->cd(1);
gStyle->SetOptStat(0);
gStyle->SetOptFit(); 
h21->GetXaxis()->SetTitle("pTpT");
h21->GetXaxis()->SetTitleSize(0.05);
h21->GetXaxis()->SetLabelSize(0.03);
h21->GetXaxis()->SetTitleOffset(1);
h21->GetYaxis()->SetTitle("Asymmetry(Negative Helicity 0.2<pTpT<0.4)");
h21->GetYaxis()->SetTitleSize(0.05);
h21->GetYaxis()->SetLabelSize(0.03);
//h12->GetYaxis()->SetRangeUser(-0.03,0.03);
h21->SetLineWidth(1.5);

h21->SetBinError(1,0.014476907);
h21->SetBinError(2,0.01360019);
h21->SetBinError(3,0.012668813);
h21->SetBinError(4,0.011523619);
h21->SetBinError(5,0.010530175);

h21->SetLineWidth(1.5);
h21->SetMarkerStyle(20);
h21->SetMarkerColor(4);
h21->Draw("");
/////////////////////////////////////////////////////////////////////
c07->cd(1);
gStyle->SetOptStat(0);
gStyle->SetOptFit(); 
h22->GetXaxis()->SetTitle("pTpT");
h22->GetXaxis()->SetTitleSize(0.05);
h22->GetXaxis()->SetLabelSize(0.03);
h22->GetXaxis()->SetTitleOffset(1);
h22->GetYaxis()->SetTitle("Asymmetry(Sum Helicity 0.2<pTpT<0.4)");
h22->GetYaxis()->SetTitleSize(0.05);
h22->GetYaxis()->SetLabelSize(0.03);
//h12->GetYaxis()->SetRangeUser(-0.03,0.03);
h22->SetLineWidth(1.5);

h22->SetBinError(1,0.014476907);
h22->SetBinError(2,0.01360019);
h22->SetBinError(3,0.012668813);
h22->SetBinError(4,0.011523619);
h22->SetBinError(5,0.010530175);

h22->SetLineWidth(1.5);
h22->SetMarkerStyle(20);
h22->SetMarkerColor(4);
h22->Draw("");
/////////////////////////////////////////////////////////////////////
c08->cd(1);
gStyle->SetOptStat(0);
gStyle->SetOptFit(); 
h26->GetXaxis()->SetTitle("pTpT");
h26->GetXaxis()->SetTitleSize(0.05);
h26->GetXaxis()->SetLabelSize(0.03);
h26->GetXaxis()->SetTitleOffset(1);
h26->GetYaxis()->SetTitle("Asymmetry(Positive Helicity 0.4<pTpT<0.6)");
h26->GetYaxis()->SetTitleSize(0.05);
h26->GetYaxis()->SetLabelSize(0.03);
//h12->GetYaxis()->SetRangeUser(-0.03,0.03);
h26->SetLineWidth(1.5);

h26->SetBinError(1,0.014476907);
h26->SetBinError(2,0.01360019);
h26->SetBinError(3,0.012668813);
h26->SetBinError(4,0.011523619);
h26->SetBinError(5,0.010530175);

h26->SetLineWidth(1.5);
h26->SetMarkerStyle(20);
h26->SetMarkerColor(4);
h26->Draw("");
/////////////////////////////////////////////////////////////////////
c09->cd(1);
gStyle->SetOptStat(0);
gStyle->SetOptFit(); 
h30->GetXaxis()->SetTitle("pTpT");
h30->GetXaxis()->SetTitleSize(0.05);
h30->GetXaxis()->SetLabelSize(0.03);
h30->GetXaxis()->SetTitleOffset(1);
h30->GetYaxis()->SetTitle("Asymmetry(Negative Helicity 0.4<pTpT<0.6)");
h30->GetYaxis()->SetTitleSize(0.05);
h30->GetYaxis()->SetLabelSize(0.03);
//h12->GetYaxis()->SetRangeUser(-0.03,0.03);
h30->SetLineWidth(1.5);

h30->SetBinError(1,0.014476907);
h30->SetBinError(2,0.01360019);
h30->SetBinError(3,0.012668813);
h30->SetBinError(4,0.011523619);
h30->SetBinError(5,0.010530175);

h30->SetLineWidth(1.5);
h30->SetMarkerStyle(20);
h30->SetMarkerColor(4);
h30->Draw("");
/////////////////////////////////////////////////////////////////////
c010->cd(1);
gStyle->SetOptStat(0);
gStyle->SetOptFit(); 
h31->GetXaxis()->SetTitle("pTpT");
h31->GetXaxis()->SetTitleSize(0.05);
h31->GetXaxis()->SetLabelSize(0.03);
h31->GetXaxis()->SetTitleOffset(1);
h31->GetYaxis()->SetTitle("Asymmetry(Sum Helicity 0.4<pTpT<0.6)");
h31->GetYaxis()->SetTitleSize(0.05);
h31->GetYaxis()->SetLabelSize(0.03);
//h12->GetYaxis()->SetRangeUser(-0.03,0.03);
h31->SetLineWidth(1.5);

h31->SetBinError(1,0.014476907);
h31->SetBinError(2,0.01360019);
h31->SetBinError(3,0.012668813);
h31->SetBinError(4,0.011523619);
h31->SetBinError(5,0.010530175);

h31->SetLineWidth(1.5);
h31->SetMarkerStyle(20);
h31->SetMarkerColor(4);
h31->Draw("");
/////////////////////////////////////////////////////////////////////
c011->cd(1);
gStyle->SetOptStat(0);
gStyle->SetOptFit(); 
h35->GetXaxis()->SetTitle("pTpT");
h35->GetXaxis()->SetTitleSize(0.05);
h35->GetXaxis()->SetLabelSize(0.03);
h35->GetXaxis()->SetTitleOffset(1);
h35->GetYaxis()->SetTitle("Asymmetry(Positive Helicity 0.6<pTpT<0.8)");
h35->GetYaxis()->SetTitleSize(0.05);
h35->GetYaxis()->SetLabelSize(0.03);
//h12->GetYaxis()->SetRangeUser(-0.03,0.03);
h35->SetLineWidth(1.5);

h35->SetBinError(1,0.014476907);
h35->SetBinError(2,0.01360019);
h35->SetBinError(3,0.012668813);
h35->SetBinError(4,0.011523619);
h35->SetBinError(5,0.010530175);

h35->SetLineWidth(1.5);
h35->SetMarkerStyle(20);
h35->SetMarkerColor(4);
h35->Draw("");
/////////////////////////////////////////////////////////////////////
c012->cd(1);
gStyle->SetOptStat(0);
gStyle->SetOptFit(); 
h39->GetXaxis()->SetTitle("pTpT");
h39->GetXaxis()->SetTitleSize(0.05);
h39->GetXaxis()->SetLabelSize(0.03);
h39->GetXaxis()->SetTitleOffset(1);
h39->GetYaxis()->SetTitle("Asymmetry(Negative Helicity 0.6<pTpT<0.8)");
h39->GetYaxis()->SetTitleSize(0.05);
h39->GetYaxis()->SetLabelSize(0.03);
//h12->GetYaxis()->SetRangeUser(-0.03,0.03);
h39->SetLineWidth(1.5);

h39->SetBinError(1,0.014476907);
h39->SetBinError(2,0.01360019);
h39->SetBinError(3,0.012668813);
h39->SetBinError(4,0.011523619);
h39->SetBinError(5,0.010530175);

h39->SetLineWidth(1.5);
h39->SetMarkerStyle(20);
h39->SetMarkerColor(4);
h39->Draw("");
/////////////////////////////////////////////////////////////////////
c013->cd(1);
gStyle->SetOptStat(0);
gStyle->SetOptFit(); 
h40->GetXaxis()->SetTitle("pTpT");
h40->GetXaxis()->SetTitleSize(0.05);
h40->GetXaxis()->SetLabelSize(0.03);
h40->GetXaxis()->SetTitleOffset(1);
h40->GetYaxis()->SetTitle("Asymmetry(Sum Helicity 0.6<pTpT<0.8)");
h40->GetYaxis()->SetTitleSize(0.05);
h40->GetYaxis()->SetLabelSize(0.03);
//h12->GetYaxis()->SetRangeUser(-0.03,0.03);
h40->SetLineWidth(1.5);

h40->SetBinError(1,0.014476907);
h40->SetBinError(2,0.01360019);
h40->SetBinError(3,0.012668813);
h40->SetBinError(4,0.011523619);
h40->SetBinError(5,0.010530175);

h40->SetLineWidth(1.5);
h40->SetMarkerStyle(20);
h40->SetMarkerColor(4);
h40->Draw("");
/////////////////////////////////////////////////////////////////////
c014->cd(1);
gStyle->SetOptStat(0);
gStyle->SetOptFit(); 
h44->GetXaxis()->SetTitle("pTpT");
h44->GetXaxis()->SetTitleSize(0.05);
h44->GetXaxis()->SetLabelSize(0.03);
h44->GetXaxis()->SetTitleOffset(1);
h44->GetYaxis()->SetTitle("Asymmetry(Positive Helicity pTpT>0.8)");
h44->GetYaxis()->SetTitleSize(0.05);
h44->GetYaxis()->SetLabelSize(0.03);
//h12->GetYaxis()->SetRangeUser(-0.03,0.03);
h44->SetLineWidth(1.5);

h44->SetBinError(1,0.014476907);
h44->SetBinError(2,0.01360019);
h44->SetBinError(3,0.012668813);
h44->SetBinError(4,0.011523619);
h44->SetBinError(5,0.010530175);

h44->SetLineWidth(1.5);
h44->SetMarkerStyle(20);
h44->SetMarkerColor(4);
h44->Draw("");
/////////////////////////////////////////////////////////////////////
c015->cd(1);
gStyle->SetOptStat(0);
gStyle->SetOptFit(); 
h48->GetXaxis()->SetTitle("pTpT");
h48->GetXaxis()->SetTitleSize(0.05);
h48->GetXaxis()->SetLabelSize(0.03);
h48->GetXaxis()->SetTitleOffset(1);
h48->GetYaxis()->SetTitle("Asymmetry(Negative Helicity pTpT>0.8)");
h48->GetYaxis()->SetTitleSize(0.05);
h48->GetYaxis()->SetLabelSize(0.03);
//h12->GetYaxis()->SetRangeUser(-0.03,0.03);
h48->SetLineWidth(1.5);

h48->SetBinError(1,0.014476907);
h48->SetBinError(2,0.01360019);
h48->SetBinError(3,0.012668813);
h48->SetBinError(4,0.011523619);
h48->SetBinError(5,0.010530175);

h48->SetLineWidth(1.5);
h48->SetMarkerStyle(20);
h48->SetMarkerColor(4);
h48->Draw("");
/////////////////////////////////////////////////////////////////////
c016->cd(1);
gStyle->SetOptStat(0);
gStyle->SetOptFit(); 
h49->GetXaxis()->SetTitle("pTpT");
h49->GetXaxis()->SetTitleSize(0.05);
h49->GetXaxis()->SetLabelSize(0.03);
h49->GetXaxis()->SetTitleOffset(1);
h49->GetYaxis()->SetTitle("Asymmetry(Sum Helicity pTpT>0.8)");
h49->GetYaxis()->SetTitleSize(0.05);
h49->GetYaxis()->SetLabelSize(0.03);
//h12->GetYaxis()->SetRangeUser(-0.03,0.03);
h49->SetLineWidth(1.5);

h49->SetBinError(1,0.014476907);
h49->SetBinError(2,0.01360019);
h49->SetBinError(3,0.012668813);
h49->SetBinError(4,0.011523619);
h49->SetBinError(5,0.010530175);

h49->SetLineWidth(1.5);
h49->SetMarkerStyle(20);
h49->SetMarkerColor(4);
h49->Draw("");
/////////////////////////////////////////////////////////////////////
c017->cd(1);
gStyle->SetOptStat(0);
gStyle->SetOptFit(); 
h50->GetXaxis()->SetTitle("pTpT");
h50->GetXaxis()->SetTitleSize(0.05);
h50->GetXaxis()->SetLabelSize(0.03);
h50->GetXaxis()->SetTitleOffset(1);
h50->GetYaxis()->SetTitle("Asymmetry (Mx>1)");
h50->GetYaxis()->SetTitleSize(0.05);
h50->GetYaxis()->SetLabelSize(0.03);
//h12->GetYaxis()->SetRangeUser(-0.03,0.03);
h50->SetLineWidth(1.5);

h50->SetBinError(1,0.009526883947251466);
h50->SetBinError(2,0.007508982138529323);
h50->SetBinError(3,0.00871604573000593);
h50->SetBinError(4,0.012555429628314654);
h50->SetBinError(5,0.02246474267715528);

h50->SetLineWidth(1.5);
h50->SetMarkerStyle(20);
h50->SetMarkerSize(2);
h50->SetMarkerColor(4);
h50->Draw("");
/////////////////////////////////////////////////////////////////////
c01->Print("NewAsymMethod1.pdf");
c01->Print("NewAsymMethod1.pdf]");
c02->Print("NewAsymMethod2.pdf");
c02->Print("NewAsymMethod2.pdf]");
c04->Print("NewAsymMethod4.pdf");
c04->Print("NewAsymMethod4.pdf]");
c05->Print("NewAsymMethod5.pdf");
c05->Print("NewAsymMethod5.pdf]");
c06->Print("NewAsymMethod6.pdf");
c06->Print("NewAsymMethod6.pdf]");
c07->Print("NewAsymMethod7.pdf");
c07->Print("NewAsymMethod7.pdf]");
c08->Print("NewAsymMethod8.pdf");
c08->Print("NewAsymMethod8.pdf]");
c09->Print("NewAsymMethod9.pdf");
c09->Print("NewAsymMethod9.pdf]");
c010->Print("NewAsymMethod10.pdf");
c010->Print("NewAsymMethod10.pdf]");
c011->Print("NewAsymMethod11.pdf");
c011->Print("NewAsymMethod11.pdf]");
c012->Print("NewAsymMethod12.pdf");
c012->Print("NewAsymMethod12.pdf]");
c013->Print("NewAsymMethod13.pdf");
c013->Print("NewAsymMethod13.pdf]");
c014->Print("NewAsymMethod14.pdf");
c014->Print("NewAsymMethod14.pdf]");
c015->Print("NewAsymMethod15.pdf");
c015->Print("NewAsymMethod15.pdf]");
c016->Print("NewAsymMethod16.pdf");
c016->Print("NewAsymMethod16.pdf]");
c017->Print("NewAsymMethod17.pdf");
c017->Print("NewAsymMethod17.pdf]");

}

