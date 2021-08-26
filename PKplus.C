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



void PKplus()
{
double c1, c2, c3, c4, c5, c6, c7, c8, c9, c10, c11, c12, c13, c14, c15, c16, c17, c18, c19, c20, c21, c22, c23, c24, c25, c26, c27, c28, c29, c30, c31, c32, c33;
vector <double> c3_list, c16_list, c17_list, c24_list, c25_list, c18_list, c22_list, c23_list, c26_list, c27_list, c28_list, c29_list, c30_list, c31_list, c32_list, c33_list ; //creates vectors to run through list

FILE * fp = fopen("dihadron_dummy_outd3.txt", "r"); //opens txt file to read in

int j, k;
//3 canvases below to plot graphs on and make them easy to see
TCanvas*c01 = new TCanvas("c01", "PKplus", 1600,1100);
c01->Divide(2,2);
c01->Print("PKplus.pdf[");
TCanvas*c02 = new TCanvas("c02", "PKplus", 1600,1100);
c02->Divide(2,2);
c02->Print("PKplus2.pdf[");
TCanvas*c03 = new TCanvas("c03", "PKplus", 1600,1100);
c03->Divide(2,2);
c03->Print("PKplus3.pdf[");
TCanvas*c04 = new TCanvas("c04", "PKplus", 1600,1100);
c04->Divide(2,1);
c04->Print("PKplus4.pdf[");
TCanvas*c05 = new TCanvas("c05", "A1", 1600,1100);
c05->Divide(1,1);
c05->Print("PKplus5.pdf[");
TCanvas*c06 = new TCanvas("c06", "PKplus", 1600,1100);
c06->Divide(2,2);
c06->Print("PKplus6.pdf[");
TCanvas*c07 = new TCanvas("c07", "PKplus", 1600,1100);
c07->Divide(2,2);
c07->Print("PKplus7.pdf[");
TCanvas*c08 = new TCanvas("c08", "A2", 1600,1100);
c08->Divide(1,1);
c08->Print("PKplus8.pdf[");
TCanvas*c09 = new TCanvas("c09", "A3", 1600,1100);
c09->Divide(1,1);
c09->Print("PKplus9.pdf[");

//calls to histograms
gStyle->SetErrorX(0);
TH1F*h1 = new TH1F("","",20,0, 6.4); 
TH1F*h2 = new TH1F("","",20,0, 6.4);
TH1F*h3 = new TH1F("","",20,0, 6.4);
TH1F*h4 = new TH1F("","",20,0, 6.4);
TH1F*h5 = new TH1F("","",20,0, 6.4);
TH1F*h7 = new TH1F("","",20,0, 6.4);
TH1F*h8 = new TH1F("","",20,0, 1);
TH1F*h9 = new TH1F("","",20,0, 1);
TH1F*h11 = new TH1F("","",20,0, 1);
TH1F*h12 = new TH1F("","",20,0.1, 0.8);
TH1F*h13 = new TH1F("","",20,0.1, 1);
TH1F*h14 = new TH1F("","",20,-11, -1);
TH1F*h15 = new TH1F("","",20,-0.85, 0.5);
TH1F*h16 = new TH1F("","",20,-0.4, 0.85);
TH1F*h17 = new TH1F("","",100,0.6, 3);
TH1F*h18 = new TH1F("","",100,0.9, 3.5);
TH1F*h19 = new TH1F("","",100,1.8, 4.2);
TH1F*h20 = new TH1F("","",100,-0.3, 2.3);
TH1F*h22 = new TH1F("","",20,0, 6.4);
TH1F*h23 = new TH1F("","",20,0, 6.4);
TH1F*h25 = new TH1F("","",20,0, 6.4);
TH1F*h27 = new TH1F("","",20,0, 6.4);
TH1F*h28 = new TH1F("","",20,0, 6.4);
TH1F*h30 = new TH1F("","",20,0, 6.4);
TH1F*h41 = new TH1F("","",20,0, 6.4);
TH1F*h42 = new TH1F("","",20,0, 6.4);
TH1F*h44 = new TH1F("","",20,0, 6.4);

char line[264];
while (fgets(line,264,fp)) { 
fscanf(fp, "%lf %lf %lf %lf %lf %lf %lf ", &c1, &c2, &c3, &c4, &c5, &c6, &c7);

fscanf(fp, " %lf %lf %lf %lf %lf %lf %lf %lf %lf ", &c8, &c9, &c10, &c11, &c12, &c13, &c14, &c15, &c16);

fscanf(fp, " %lf %lf %lf %lf %lf %lf %lf %lf %lf ", &c17, &c18, &c19, &c20, &c21, &c22, &c23, &c24, &c25);

fscanf(fp, " %lf %lf %lf %lf %lf %lf %lf %lf ", &c26, &c27, &c28, &c29, &c30, &c31, &c32, &c33);


h1->Fill(c17);
h2->Fill(c16);
h3->Fill(c18);

h8->Fill(c24);
h9->Fill(c25);

h11->Fill(c23);
h12->Fill(c26);
h13->Fill(c27);
h14->Fill(c22);
h15->Fill(c28);
h16->Fill(c29);
h17->Fill(c30);
h18->Fill(c31);
h19->Fill(c32);
h20->Fill(c33);

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
 


for (int i=0; i<c33_list.size(); i++) { 
if (c3_list[i]==1 && 0<c33_list[i]<0.33){ h41->Fill(c18_list[i]);} 
else if (c3_list[i]==-1 && 0<c33_list[i] && c33_list[i]<0.33){ h42->Fill(c18_list[i]);} 
}
TH1F*h43 = new TH1F("","",20,0, 6.4);

for (int i=0; i<c33_list.size(); i++) { 
if (c3_list[i]==1 && 0<c33_list[i]<0.33){ h43->Fill(c18_list[i]);} 
}
for (int i=0; i<c33_list.size(); i++) { 
if (c3_list[i]==1 && 0<c33_list[i]<0.33){ h44->Fill(c18_list[i]);} 
}
/////////////////////////////////////////////////////////////////////Asymmetry Fit DPHI 
TF1 *f1= new TF1("f1","[0]+([1]*sin(x))+([2]*(sin(2*x)))",0,6.4); 
/////////////////////////////////////////////////////////////////////Asymmetry Histo (h10 A1)
h6->Add(h5, -1.0);
h7->Add(h5, 1.0);
TH1F*h40 = (TH1F*) h6->Clone("h10");
h40->Divide(h6,h7);
/////////////////////////////////////////////////////////////////////Helicity cuts and Missing Mass cuts Third Peak (h10 A1)
for (int i=0; i<c33_list.size(); i++) { 
if (c3_list[i]==1 && 0<c33_list[i]<0.33){ h4->Fill(c18_list[i]);} 
else if (c3_list[i]==-1 && 0<c33_list[i] && c33_list[i]<0.33){ h5->Fill(c18_list[i]);} 
}
TH1F*h6 = new TH1F("","",20,0, 6.4);

for (int i=0; i<c33_list.size(); i++) { 
if (c3_list[i]==1 && 0<c33_list[i]<0.33){ h6->Fill(c18_list[i]);} 
}
for (int i=0; i<c33_list.size(); i++) { 
if (c3_list[i]==1 && 0<c33_list[i]<0.33){ h7->Fill(c18_list[i]);} 
}
/////////////////////////////////////////////////////////////////////Asymmetry Fit DPHI 
TF1 *f1= new TF1("f1","[0]+([1]*sin(x))+([2]*(sin(2*x)))",0,6.4); 
/////////////////////////////////////////////////////////////////////Asymmetry Histo (h10 A1)
h6->Add(h5, -1.0);
h7->Add(h5, 1.0);
TH1F*h10 = (TH1F*) h6->Clone("h10");
h10->Divide(h6,h7);

/////////////////////////////////////////////////////////////////////Helicity cuts and Missing Mass cuts Third Peak (h21 A2)
for (int i=0; i<c33_list.size(); i++) { 
if (c3_list[i]==1 && 0.4<c33_list[i]<0.65){ h22->Fill(c18_list[i]);} 
else if (c3_list[i]==-1 && 0.4<c33_list[i]<0.65){ h23->Fill(c18_list[i]);} 
}
TH1F*h24 = new TH1F("","",20,0, 6.4);

for (int i=0; i<c33_list.size(); i++) { 
if (c3_list[i]==1 && 0.4<c33_list[i]<0.65){ h24->Fill(c18_list[i]);} 
}
for (int i=0; i<c33_list.size(); i++) { 
if (c3_list[i]==1 && 0.4<c33_list[i]<0.65){ h25->Fill(c18_list[i]);} 
}
/////////////////////////////////////////////////////////////////////Asymmetry Histo (h21 A2)
h24->Add(h23, -1.0);
h25->Add(h23, 1.0);
TH1F*h21 = (TH1F*) h24->Clone("h21");
h21->Divide(h24,h25);
/////////////////////////////////////////////////////////////////////Helicity cuts and Missing Mass cuts Third Peak (h26 A3)
for (int i=0; i<c33_list.size(); i++) { 
if (c3_list[i]==1 && 0.1<c33_list[i]<0.3){ h27->Fill(c18_list[i]);} 
else if (c3_list[i]==-1 && 0.1<c33_list[i]<0.3){ h28->Fill(c18_list[i]);} 
}
TH1F*h29 = new TH1F("","",20,0, 6.4);

for (int i=0; i<c33_list.size(); i++) { 
if (c3_list[i]==1 && 0.1<c33_list[i]<0.3){ h29->Fill(c18_list[i]);} 
}
for (int i=0; i<c33_list.size(); i++) { 
if (c3_list[i]==1 && 0.1<c33_list[i]<0.3){ h30->Fill(c18_list[i]);} 
}
/////////////////////////////////////////////////////////////////////Asymmetry Histo (h26 A3)
h29->Add(h28, -1.0);
h30->Add(h28, 1.0);
TH1F*h26 = (TH1F*) h29->Clone("h26");
h26->Divide(h29,h30);
/////////////////////////////////////////////////////////////////////


c01->cd(1);
h1->GetXaxis()->SetTitle("Proton Phi");
h1->GetXaxis()->SetTitleSize(0.03);
h1->GetXaxis()->SetTitleOffset(1.3);
h1->GetXaxis()->SetLabelSize(0.04);
h1->GetYaxis()->SetTitle("Counts");
h1->GetYaxis()->SetTitleSize(0.04);
h1->GetYaxis()->SetLabelSize(0.025);
h1->GetYaxis()->SetTitleOffset(0.85);
h1->SetLineWidth(1.5); 
h1->SetStats(0);
h1->Draw();

c01->cd(2); 
h2->GetXaxis()->SetTitle("Kaon Phi");
h2->GetXaxis()->SetTitleSize(0.03);
h2->GetXaxis()->SetTitleOffset(1.3);
h2->GetXaxis()->SetLabelSize(0.04);
h2->GetYaxis()->SetTitle("Counts");
h2->GetYaxis()->SetTitleSize(0.035);
h2->GetYaxis()->SetLabelSize(0.03);
h2->GetYaxis()->SetTitleOffset(0.8);
h2->SetLineWidth(1.5);
h2->SetStats(0);
h2->Draw();

c01->cd(3); 
h3->GetXaxis()->SetTitle("Delta Phi");
h3->GetXaxis()->SetTitleSize(0.03);
h3->GetXaxis()->SetTitleOffset(1.3);
h3->GetXaxis()->SetLabelSize(0.04);
h3->GetYaxis()->SetTitle("Counts");
h3->GetYaxis()->SetTitleSize(0.035);
h3->GetYaxis()->SetLabelSize(0.03);
h3->GetYaxis()->SetTitleOffset(0.8);
h3->SetLineWidth(1.5);
h3->SetStats(0);
h3->Draw();

c02->cd(1); 
h4->GetXaxis()->SetTitle("Delta Phi (positive helicity)");
h4->GetXaxis()->SetTitleSize(0.03);
h4->GetXaxis()->SetTitleOffset(1.3);
h4->GetXaxis()->SetLabelSize(0.04);
h4->GetYaxis()->SetTitle("Counts");
h4->GetYaxis()->SetTitleSize(0.035);
h4->GetYaxis()->SetLabelSize(0.025);
h4->GetYaxis()->SetTitleOffset(0.87);
h4->SetLineWidth(1.5);
h4->SetStats(0);
h4->Draw();

c02->cd(2); 
h5->GetXaxis()->SetTitle("delta_phi (negative helicity)");
h5->GetXaxis()->SetTitleSize(0.03);
h5->GetXaxis()->SetTitleOffset(1.3);
h5->GetXaxis()->SetLabelSize(0.04);
h5->GetYaxis()->SetTitle("Counts");
h5->GetYaxis()->SetTitleSize(0.035);
h5->GetYaxis()->SetLabelSize(0.025);
h5->GetYaxis()->SetTitleOffset(0.87);
h5->SetLineWidth(1.5);
h5->SetStats(0);
h5->Draw();
/////////////////////////////////////////////////////////////////////N1 and N2 print out for error bars (delta_phi)
ofstream outputfile("N+N-.txt");
int N = h4->GetNbinsX() + 1;
int M = h5->GetNbinsX() + 1; 
for(int i=0, int j=0 ; i<N && j<M ; ++i && ++j){
outputfile << "\t" << h5->GetBinContent(j) << "\t" << h4->GetBinContent(i) << endl; }
outputfile.close(); 
/////////////////////////////////////////////////////////////////////
c02->cd(3); 
h6->GetXaxis()->SetTitle("difference of two helicities");
h6->GetXaxis()->SetTitleSize(0.03);
h6->GetXaxis()->SetTitleOffset(1.3);
h6->GetXaxis()->SetLabelSize(0.04);
h6->GetYaxis()->SetTitle("Counts");
h6->GetYaxis()->SetTitleSize(0.035);
h6->GetYaxis()->SetLabelSize(0.03);
h6->GetYaxis()->SetTitleOffset(0.8);
h6->SetLineWidth(1.5);
h6->SetStats(0);
h6->Draw();

c02->cd(4); 
h7->GetXaxis()->SetTitle("sum of two helicities");
h7->GetXaxis()->SetTitleSize(0.03);
h7->GetXaxis()->SetTitleOffset(1.3);
h7->GetXaxis()->SetLabelSize(0.04);
h7->GetYaxis()->SetTitle("Counts");
h7->GetYaxis()->SetTitleSize(0.035);
h7->GetYaxis()->SetLabelSize(0.03);
h7->GetYaxis()->SetTitleOffset(0.8);
h7->SetLineWidth(1.5);
h7->SetStats(0);
h7->Draw();

c03->cd(1); 
h8->GetXaxis()->SetTitle("pT Proton");
h8->GetXaxis()->SetTitleSize(0.03);
h8->GetXaxis()->SetTitleOffset(1.3);
h8->GetXaxis()->SetLabelSize(0.04);
h8->GetYaxis()->SetTitle("Counts");
h8->GetYaxis()->SetTitleSize(0.045);
h8->GetYaxis()->SetLabelSize(0.03);
h8->GetYaxis()->SetTitleOffset(0.85);
h8->SetLineWidth(1.5);
h8->SetStats(0);
h8->Draw();
h8->Print("all");

c03->cd(2); 
h9->GetXaxis()->SetTitle("pT Kaon");
h9->GetXaxis()->SetTitleSize(0.03);
h9->GetXaxis()->SetLabelSize(0.04);
h9->GetXaxis()->SetTitleOffset(1);
h9->GetYaxis()->SetTitle("Counts");
h9->GetYaxis()->SetTitleSize(0.045);
h9->GetYaxis()->SetLabelSize(0.03);
h9->GetYaxis()->SetTitleOffset(0.85);
h9->SetLineWidth(1.5);
h9->SetStats(0);
h9->Draw();
h9->Print("all");
/////////////////////////////////////////////////////////////////////pTpT
c03->cd(3);
h11->Fill(10069,0.000625);
h11->Fill(34586,0.005625);
h11->Fill(64009,0.015625);
h11->Fill(89662,0.030625);
h11->Fill(107522,0.050625);
h11->Fill(118863,0.075625);
h11->Fill(123746,0.105625);
h11->Fill(121677,0.140625);
h11->Fill(115521,0.180625);
h11->Fill(104121,0.225625);
h11->Fill(90588,0.275625);
h11->Fill(75996,0.330625);
h11->Fill(61662,0.390625);
h11->Fill(48757,0.455625);
h11->Fill(37348,0.525625);
h11->Fill(27825,0.600625);
h11->Fill(20309,0.680625);
h11->Fill(14444,0.765625);
h11->Fill(10226,0.855625);
h11->Fill(7079,0.950625);
h11->Fill(11907,1.050625);

h11->GetXaxis()->SetTitle("pTpT");
h11->GetXaxis()->SetTitleSize(0.03);
h11->GetXaxis()->SetLabelSize(0.04);
h11->GetXaxis()->SetTitleOffset(1);
h11->GetYaxis()->SetTitle("Counts");
h11->GetYaxis()->SetTitleSize(0.045);
h11->GetYaxis()->SetLabelSize(0.03);
h11->GetYaxis()->SetTitleOffset(0.85);
h11->SetLineWidth(1.5);
h11->SetStats(0);
h11->Draw();
/////////////////////////////////////////////////////////////////////
c04->cd(1);
h12->GetXaxis()->SetTitle("z Proton");
h12->GetXaxis()->SetTitleSize(0.03);
h12->GetXaxis()->SetLabelSize(0.02);
h12->GetXaxis()->SetTitleOffset(1);
h12->GetYaxis()->SetTitle("Counts");
h12->GetYaxis()->SetTitleSize(0.035);
h12->GetYaxis()->SetLabelSize(0.02);
h12->GetYaxis()->SetTitleOffset(0.85);
h12->SetLineWidth(1.5);
h12->SetStats(0);
h12->Draw();

c04->cd(2);
h13->GetXaxis()->SetTitle("z Kaon");
h13->GetXaxis()->SetTitleSize(0.03);
h13->GetXaxis()->SetLabelSize(0.02);
h13->GetXaxis()->SetTitleOffset(1);
h13->GetYaxis()->SetTitle("Counts");
h13->GetYaxis()->SetTitleSize(0.035);
h13->GetYaxis()->SetLabelSize(0.02);
h13->GetYaxis()->SetTitleOffset(0.85);
h13->SetLineWidth(1.5);
h13->SetStats(0);
h13->Draw();

c06->cd(1);
h14->GetXaxis()->SetTitle("xF");
h14->GetXaxis()->SetTitleSize(0.03);
h14->GetXaxis()->SetLabelSize(0.02);
h14->GetXaxis()->SetTitleOffset(1);
h14->GetYaxis()->SetTitle("Counts");
h14->GetYaxis()->SetTitleSize(0.035);
h14->GetYaxis()->SetLabelSize(0.03);
h14->GetYaxis()->SetTitleOffset(0.85);
h14->SetLineWidth(1.5);
h14->SetStats(0);
h14->Draw();

c06->cd(2);
h15->GetXaxis()->SetTitle("xF Proton");
h15->GetXaxis()->SetTitleSize(0.03);
h15->GetXaxis()->SetLabelSize(0.02);
h15->GetXaxis()->SetTitleOffset(1);
h15->GetYaxis()->SetTitle("Counts");
h15->GetYaxis()->SetTitleSize(0.035);
h15->GetYaxis()->SetLabelSize(0.03);
h15->GetYaxis()->SetTitleOffset(0.85);
h15->SetLineWidth(1.5);
h15->SetStats(0);
h15->Draw();

c06->cd(3);
h16->GetXaxis()->SetTitle("xF Kaon");
h16->GetXaxis()->SetTitleSize(0.03);
h16->GetXaxis()->SetLabelSize(0.02);
h16->GetXaxis()->SetTitleOffset(1);
h16->GetYaxis()->SetTitle("Counts");
h16->GetYaxis()->SetTitleSize(0.035);
h16->GetYaxis()->SetLabelSize(0.03);
h16->GetYaxis()->SetTitleOffset(0.85);
h16->SetLineWidth(1.5);
h16->SetStats(0);
h16->Draw();

c07->cd(1);
h17->GetXaxis()->SetTitle("Mx eProton");
h17->GetXaxis()->SetTitleSize(0.03);
h17->GetXaxis()->SetLabelSize(0.02);
h17->GetXaxis()->SetTitleOffset(1);
h17->GetYaxis()->SetTitle("Counts");
h17->GetYaxis()->SetTitleSize(0.035);
h17->GetYaxis()->SetLabelSize(0.03);
h17->GetYaxis()->SetTitleOffset(0.85);
h17->SetLineWidth(1.5);
h17->SetStats(0);
h17->Draw();

c07->cd(2);
h18->GetXaxis()->SetTitle("Mx eKaon");
h18->GetXaxis()->SetTitleSize(0.03);
h18->GetXaxis()->SetLabelSize(0.02);
h18->GetXaxis()->SetTitleOffset(1);
h18->GetYaxis()->SetTitle("Counts");
h18->GetYaxis()->SetTitleSize(0.035);
h18->GetYaxis()->SetLabelSize(0.03);
h18->GetYaxis()->SetTitleOffset(0.85);
h18->SetLineWidth(1.5);
h18->SetStats(0);
h18->Draw();

c07->cd(3);
h19->GetXaxis()->SetTitle("Mx e");
h19->GetXaxis()->SetTitleSize(0.03);
h19->GetXaxis()->SetLabelSize(0.02);
h19->GetXaxis()->SetTitleOffset(1);
h19->GetYaxis()->SetTitle("Counts");
h19->GetYaxis()->SetTitleSize(0.035);
h19->GetYaxis()->SetLabelSize(0.03);
h19->GetYaxis()->SetTitleOffset(0.85);
h19->SetLineWidth(1.5);
h19->SetStats(0);
h19->Draw();

c07->cd(4);
h20->GetXaxis()->SetTitle("Mx eProtonKaon");
h20->GetXaxis()->SetTitleSize(0.03);
h20->GetXaxis()->SetLabelSize(0.02);
h20->GetXaxis()->SetTitleOffset(1);
h20->GetYaxis()->SetTitle("Counts");
h20->GetYaxis()->SetTitleSize(0.035);
h20->GetYaxis()->SetLabelSize(0.02);
h20->GetYaxis()->SetTitleOffset(0.9);
h20->SetLineWidth(1.5);
h20->SetStats(0);
h20->Draw();

/////////////////////////////////////////////////////////////////////A1
c05->cd(1);
gStyle->SetOptStat(0);
gStyle->SetOptFit(); 
h10->GetXaxis()->SetTitle("DeltaPhi");
h10->GetXaxis()->SetTitleSize(0.03);
h10->GetXaxis()->SetLabelSize(0.02);
h10->GetXaxis()->SetTitleOffset(1);
h10->GetYaxis()->SetTitle("Asymmetry Value (Mx>1)");
h10->GetYaxis()->SetTitleSize(0.03);
h10->GetYaxis()->SetLabelSize(0.02);
h10->GetYaxis()->SetTitleOffset(1.3);
h10->GetYaxis()->SetRangeUser(-0.03,0.03);
h10->SetLineWidth(1.5);

h10->SetBinError(1,0.005268);
h10->SetBinError(2,0.004994);
h10->SetBinError(3,0.004619);
h10->SetBinError(4,0.004231);
h10->SetBinError(5,0.003889);
h10->SetBinError(6,0.003544);
h10->SetBinError(7,0.003201);
h10->SetBinError(8,0.002836);
h10->SetBinError(9,0.002598);
h10->SetBinError(10,0.002489);
h10->SetBinError(11,0.002525);
h10->SetBinError(12,0.002695);
h10->SetBinError(13,0.003003);
h10->SetBinError(14,0.003321);
h10->SetBinError(15,0.003677);
h10->SetBinError(16,0.004086);
h10->SetBinError(17,0.004511);
h10->SetBinError(18,0.004895);
h10->SetBinError(19,0.005258);
h10->SetBinError(20,0.006717);

h10->Fit("f1", "R");
h10->SetLineWidth(1.5);
h10->SetMarkerStyle(20);
h10->SetMarkerColor(4);
cout << "Chi2: " << h10->GetFunction("f1")->GetChisquare(); 
cout << " Reduced Chi2: " << h10->GetFunction("f1")->GetChisquare()/(17); 
h10->Draw("");
/////////////////////////////////////////////////////////////////////A2
c08->cd(1);
gStyle->SetOptStat(0);
gStyle->SetOptFit(); 
h21->GetXaxis()->SetTitle("DeltaPhi");
h21->GetXaxis()->SetTitleSize(0.03);
h21->GetXaxis()->SetLabelSize(0.02);
h21->GetXaxis()->SetTitleOffset(1);
h21->GetYaxis()->SetTitle("Asymmetry Value (0.55<Mx<0.65)");
h21->GetYaxis()->SetTitleSize(0.03);
h21->GetYaxis()->SetLabelSize(0.02);
h21->GetYaxis()->SetTitleOffset(1.3);
h21->GetYaxis()->SetRangeUser(-0.03,0.03);
h21->SetLineWidth(1.5);

h21->SetBinError(1,0.005268);
h21->SetBinError(2,0.004994);
h21->SetBinError(3,0.004619);
h21->SetBinError(4,0.004231);
h21->SetBinError(5,0.003889);
h21->SetBinError(6,0.003544);
h21->SetBinError(7,0.003201);
h21->SetBinError(8,0.002836);
h21->SetBinError(9,0.002598);
h21->SetBinError(10,0.002489);
h21->SetBinError(11,0.002525);
h21->SetBinError(12,0.002695);
h21->SetBinError(13,0.003003);
h21->SetBinError(14,0.003321);
h21->SetBinError(15,0.003677);
h21->SetBinError(16,0.004086);
h21->SetBinError(17,0.004511);
h21->SetBinError(18,0.004895);
h21->SetBinError(19,0.005258);
h21->SetBinError(20,0.006717);

h21->Fit("f1", "R");
h21->SetLineWidth(1.5);
h21->SetMarkerStyle(20);
h21->SetMarkerColor(4);
cout << "Chi2: " << h21->GetFunction("f1")->GetChisquare(); 
cout << " Reduced Chi2: " << h21->GetFunction("f1")->GetChisquare()/(17); 
h21->Draw("");
/////////////////////////////////////////////////////////////////////A3
c09->cd(1);
gStyle->SetOptStat(0);
gStyle->SetOptFit(); 
h26->GetXaxis()->SetTitle("DeltaPhi");
h26->GetXaxis()->SetTitleSize(0.03);
h26->GetXaxis()->SetLabelSize(0.02);
h26->GetXaxis()->SetTitleOffset(1);
h26->GetYaxis()->SetTitle("Asymmetry Value (0.55<Mx<0.65)");
h26->GetYaxis()->SetTitleSize(0.03);
h26->GetYaxis()->SetLabelSize(0.02);
h26->GetYaxis()->SetTitleOffset(1.3);
h26->GetYaxis()->SetRangeUser(-0.03,0.03);
h26->SetLineWidth(1.5);

h26->SetBinError(1,0.005268);
h26->SetBinError(2,0.004994);
h26->SetBinError(3,0.004619);
h26->SetBinError(4,0.004231);
h26->SetBinError(5,0.003889);
h26->SetBinError(6,0.003544);
h26->SetBinError(7,0.003201);
h26->SetBinError(8,0.002836);
h26->SetBinError(9,0.002598);
h26->SetBinError(10,0.002489);
h26->SetBinError(11,0.002525);
h26->SetBinError(12,0.002695);
h26->SetBinError(13,0.003003);
h26->SetBinError(14,0.003321);
h26->SetBinError(15,0.003677);
h26->SetBinError(16,0.004086);
h26->SetBinError(17,0.004511);
h26->SetBinError(18,0.004895);
h26->SetBinError(19,0.005258);
h26->SetBinError(20,0.006717);
h26->Fit("f1", "R");
h26->SetLineWidth(1.5);
h26->SetMarkerStyle(20);
h26->SetMarkerColor(4);
cout << "Chi2: " << h26->GetFunction("f1")->GetChisquare(); 
cout << " Reduced Chi2: " << h26->GetFunction("f1")->GetChisquare()/(17); 
h26->Draw("");

gPad->Modified();
gPad->Update();

c01->Print("PKplus.pdf");
c01->Print("PKplus.pdf]");
c02->Print("PKplus2.pdf");
c02->Print("PKplus2.pdf]");
c03->Print("PKplus3.pdf");
c03->Print("PKplus3.pdf]");
c04->Print("PKplus4.pdf");
c04->Print("PKplus4.pdf]");
c05->Print("PKplus5.pdf");
c05->Print("PKplus5.pdf]");
c06->Print("PKplus6.pdf");
c06->Print("PKplus6.pdf]");
c07->Print("PKplus7.pdf");
c07->Print("PKplus7.pdf]");
c08->Print("PKplus8.pdf");
c08->Print("PKplus8.pdf]");
c09->Print("PKplus9.pdf");
c09->Print("PKplus9.pdf]");
}

