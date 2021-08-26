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



void Proton()
{
double c1, c2, c3, c4, c5, c6, c7, c8, c9, c10, c11, c12, c13, c14, c15, c16, c17, c18, c19, c20;
vector <double> c3_list, c4_list, c5_list, c6_list, c7_list, c8_list, c9_list, c10_list, c11_list, c12_list, c13_list, c18_list, c15_list, c14_list, c16_list, c17_list, c19_list, c20_list ; //creates vectors to run through list

FILE * fp = fopen("proton-table.txt", "r"); //opens txt file to read in

int j, k;
//3 canvases below to plot graphs on and make them easy to see
TCanvas*c01 = new TCanvas("c01", "PKplus", 1600,1100);
c01->Divide(2,2);
c01->Print("proton.pdf[");
TCanvas*c02 = new TCanvas("c02", "PKplus", 1600,1100);
c02->Divide(2,2);
c02->Print("proton2.pdf[");
TCanvas*c03 = new TCanvas("c03", "PKplus", 1600,1100);
c03->Divide(2,2);
c03->Print("proton3.pdf[");
TCanvas*c04 = new TCanvas("c04", "PKplus", 1600,1100);
c04->Divide(2,2);
c04->Print("proton4.pdf[");
TCanvas*c05 = new TCanvas("c05", "PKplus", 1600,1100);
c05->Divide(1,1);
c05->Print("proton5.pdf[");
TCanvas*c06 = new TCanvas("c06", "PKplus", 1600,1100);
c06->Divide(2,2);
c06->Print("proton6.pdf[");
TCanvas*c07 = new TCanvas("c07", "PKplus", 1600,1100);
c07->Divide(2,2);
c07->Print("proton7.pdf[");

//calls to histograms
gStyle->SetErrorX(0);
TH1F*h1 = new TH1F("","",20,0, 6.4); //20 bins, x-axis from 0-7
TH1F*h2 = new TH1F("","",20,0, 6.4);
TH1F*h3 = new TH1F("","",20,0, 6.4);
TH1F*h5 = new TH1F("","",20,0, 6.4);
TH1F*h6 = new TH1F("","",20,0, 1);
TH1F*h7 = new TH1F("","",20,-1.75,1);
TH1F*h8 = new TH1F("","",20,1.9,8.2);
TH1F*h9 = new TH1F("","",20,7,30);
TH1F*h11 = new TH1F("","",20,0.2,6.25);
TH1F*h12 = new TH1F("","",20,5.25,30);
TH1F*h13 = new TH1F("","",20,1,8.5);
TH1F*h14 = new TH1F("","",20,1.8,4);
TH1F*h15 = new TH1F("","",20,0,3);
TH1F*h16 = new TH1F("","",20,0,0.8);
TH1F*h17 = new TH1F("","",20,0.2,0.825);
TH1F*h18 = new TH1F("","",20,0,1.2);
TH1F*h19 = new TH1F("","",20,0.345,0.8);
TH1F*h20 = new TH1F("","",20,-1,2.1);
TH1F*h21 = new TH1F("","",20,-8,4.25);
TH1F*h22 = new TH1F("","",20,-8,4.5);

//below scans in every column of text file for all 11603 rows and gives the columns names defined above
for (k=0; k<1038989; k++) { 
fscanf(fp, "%lf %lf %lf %lf %lf %lf %lf ", &c1, &c2, &c3, &c4, &c5, &c6, &c7);

fscanf(fp, " %lf %lf %lf %lf %lf %lf %lf %lf %lf ", &c8, &c9, &c10, &c11, &c12, &c13, &c14, &c15, &c16);

fscanf(fp, " %lf %lf %lf %lf ", &c17, &c18, &c19, &c20);

//fills histograms with data from different columns (columns with variable names are in processing2.groovy)

h1->Fill(c18);
h6->Fill(c15);
h7->Fill(c14);
h8->Fill(c4);
h9->Fill(c5);
h11->Fill(c6);
h12->Fill(c7);
h13->Fill(c8);
h14->Fill(c9);
h15->Fill(c10);
h16->Fill(c11);
h17->Fill(c12);
h18->Fill(c13);
h19->Fill(c16);
h20->Fill(c17);
h21->Fill(c19);
h22->Fill(c20);

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
c16_list.push_back(c16);
c18_list.push_back(c18);
c15_list.push_back(c15);
c14_list.push_back(c14);
}

fclose(fp); 

std::cout << "c3: " << c3_list.size() << '\n'; 
for (int i=0; i<c3_list.size(); i++) { 
//cout << c3_list[i] << " "; 
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

TF1 *f1= new TF1("f1","[0]+([1]*sin(x))+([2]*(sin(2*x)))",0,6.4); 
h4->Add(h3, -1.0);
h5->Add(h3, 1.0);

TH1F*h10 = (TH1F*) h4->Clone("h10");
h10->Divide(h4,h5);


//below is just histogram modifications
c01->cd(1);
h1->GetXaxis()->SetTitle("phi proton");
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
h2->GetXaxis()->SetTitle("phi (positive helicity)");
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
h3->GetXaxis()->SetTitle("phi (negative helicity)");
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
h4->GetXaxis()->SetTitle("difference of helicities");
h4->GetXaxis()->SetTitleSize(0.03);
h4->GetXaxis()->SetTitleOffset(1.3);
h4->GetXaxis()->SetLabelSize(0.04);
h4->GetYaxis()->SetTitle("Counts");
h4->GetYaxis()->SetTitleSize(0.035);
h4->GetYaxis()->SetLabelSize(0.025);
h4->GetYaxis()->SetTitleOffset(0.85);
h4->SetLineWidth(1.5);
h4->SetStats(0);
h4->Draw();
//h4->Print("all");

c02->cd(2); 
h5->GetXaxis()->SetTitle("sum of helicities");
h5->GetXaxis()->SetTitleSize(0.03);
h5->GetXaxis()->SetTitleOffset(1.3);
h5->GetXaxis()->SetLabelSize(0.04);
h5->GetYaxis()->SetTitle("Counts");
h5->GetYaxis()->SetTitleSize(0.035);
h5->GetYaxis()->SetLabelSize(0.025);
h5->GetYaxis()->SetTitleOffset(0.85);
h5->SetLineWidth(1.5);
h5->SetStats(0);
h5->Draw();
//h5->Print("all");

c02->cd(3); 
h6->GetXaxis()->SetTitle("pT");
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
h7->GetXaxis()->SetTitle("xF");
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
h8->GetXaxis()->SetTitle("e_p");
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

c03->cd(2); 
h9->GetXaxis()->SetTitle("e_theta");
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


c03->cd(3);
h11->GetXaxis()->SetTitle("p_p");
h11->GetXaxis()->SetTitleSize(0.03);
h11->GetXaxis()->SetLabelSize(0.02);
h11->GetXaxis()->SetTitleOffset(1);
h11->GetYaxis()->SetTitle("Counts");
h11->GetYaxis()->SetTitleSize(0.045);
h11->GetYaxis()->SetLabelSize(0.03);
h11->GetYaxis()->SetTitleOffset(0.85);
h11->SetLineWidth(1.5);
h11->SetStats(0);
h11->Draw();


c04->cd(1);
h12->GetXaxis()->SetTitle("p_theta");
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
h13->GetXaxis()->SetTitle("Q^{2}");
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


c04->cd(3);
h14->GetXaxis()->SetTitle("W");
h14->GetXaxis()->SetTitleSize(0.03);
h14->GetXaxis()->SetLabelSize(0.02);
h14->GetXaxis()->SetTitleOffset(1);
h14->GetYaxis()->SetTitle("Counts");
h14->GetYaxis()->SetTitleSize(0.035);
h14->GetYaxis()->SetLabelSize(0.02);
h14->GetYaxis()->SetTitleOffset(0.85);
h14->SetLineWidth(1.5);
h14->SetStats(0);
h14->Draw();

c04->cd(4);
h15->GetXaxis()->SetTitle("Mx");
h15->GetXaxis()->SetTitleSize(0.03);
h15->GetXaxis()->SetLabelSize(0.02);
h15->GetXaxis()->SetTitleOffset(1);
h15->GetYaxis()->SetTitle("Counts");
h15->GetYaxis()->SetTitleSize(0.035);
h15->GetYaxis()->SetLabelSize(0.02);
h15->GetYaxis()->SetTitleOffset(0.85);
h15->SetLineWidth(1.5);
h15->SetStats(0);
h15->Draw();


c06->cd(1);
h16->GetXaxis()->SetTitle("x");
h16->GetXaxis()->SetTitleSize(0.03);
h16->GetXaxis()->SetLabelSize(0.02);
h16->GetXaxis()->SetTitleOffset(1);
h16->GetYaxis()->SetTitle("Counts");
h16->GetYaxis()->SetTitleSize(0.035);
h16->GetYaxis()->SetLabelSize(0.02);
h16->GetYaxis()->SetTitleOffset(0.85);
h16->SetLineWidth(1.5);
h16->SetStats(0);
h16->Draw();

c06->cd(2);
h17->GetXaxis()->SetTitle("y");
h17->GetXaxis()->SetTitleSize(0.03);
h17->GetXaxis()->SetLabelSize(0.02);
h17->GetXaxis()->SetTitleOffset(1);
h17->GetYaxis()->SetTitle("Counts");
h17->GetYaxis()->SetTitleSize(0.035);
h17->GetYaxis()->SetLabelSize(0.02);
h17->GetYaxis()->SetTitleOffset(0.85);
h17->SetLineWidth(1.5);
h17->SetStats(0);
h17->Draw();

c06->cd(3);
h18->GetXaxis()->SetTitle("z");
h18->GetXaxis()->SetTitleSize(0.03);
h18->GetXaxis()->SetLabelSize(0.02);
h18->GetXaxis()->SetTitleOffset(1);
h18->GetYaxis()->SetTitle("Counts");
h18->GetYaxis()->SetTitleSize(0.035);
h18->GetYaxis()->SetLabelSize(0.02);
h18->GetYaxis()->SetTitleOffset(0.85);
h18->SetLineWidth(1.5);
h18->SetStats(0);
h18->Draw();

c06->cd(4);
h19->GetXaxis()->SetTitle("zeta");
h19->GetXaxis()->SetTitleSize(0.03);
h19->GetXaxis()->SetLabelSize(0.02);
h19->GetXaxis()->SetTitleOffset(1);
h19->GetYaxis()->SetTitle("Counts");
h19->GetYaxis()->SetTitleSize(0.035);
h19->GetYaxis()->SetLabelSize(0.02);
h19->GetYaxis()->SetTitleOffset(0.85);
h19->SetLineWidth(1.5);
h19->SetStats(0);
h19->Draw();

c07->cd(1);
h20->GetXaxis()->SetTitle("eta");
h20->GetXaxis()->SetTitleSize(0.03);
h20->GetXaxis()->SetLabelSize(0.02);
h20->GetXaxis()->SetTitleOffset(1);
h20->GetYaxis()->SetTitle("Counts");
h20->GetYaxis()->SetTitleSize(0.035);
h20->GetYaxis()->SetLabelSize(0.02);
h20->GetYaxis()->SetTitleOffset(0.85);
h20->SetLineWidth(1.5);
h20->SetStats(0);
h20->Draw();

c07->cd(2);
h21->GetXaxis()->SetTitle("vz_e");
h21->GetXaxis()->SetTitleSize(0.03);
h21->GetXaxis()->SetLabelSize(0.02);
h21->GetXaxis()->SetTitleOffset(1);
h21->GetYaxis()->SetTitle("Counts");
h21->GetYaxis()->SetTitleSize(0.035);
h21->GetYaxis()->SetLabelSize(0.02);
h21->GetYaxis()->SetTitleOffset(0.85);
h21->SetLineWidth(1.5);
h21->SetStats(0);
h21->Draw();

c07->cd(3);
h22->GetXaxis()->SetTitle("vz_p");
h22->GetXaxis()->SetTitleSize(0.03);
h22->GetXaxis()->SetLabelSize(0.02);
h22->GetXaxis()->SetTitleOffset(1);
h22->GetYaxis()->SetTitle("Counts");
h22->GetYaxis()->SetTitleSize(0.035);
h22->GetYaxis()->SetLabelSize(0.02);
h22->GetYaxis()->SetTitleOffset(0.85);
h22->SetLineWidth(1.5);
h22->SetStats(0);
h22->Draw();

//////////
c05->cd(1);
gStyle->SetOptStat(0);
gStyle->SetOptFit(); 
h10->GetXaxis()->SetTitle("Phi");
h10->GetXaxis()->SetTitleSize(0.03);
h10->GetXaxis()->SetLabelSize(0.02);
h10->GetXaxis()->SetTitleOffset(1);
h10->GetYaxis()->SetTitle("Asymmetry Value");
h10->GetYaxis()->SetTitleSize(0.03);
h10->GetYaxis()->SetLabelSize(0.02);
h10->GetYaxis()->SetTitleOffset(1.3);
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
//h10->Print("all");

gPad->Modified();
gPad->Update();

c01->Print("proton.pdf");
c01->Print("proton.pdf]");
c02->Print("proton2.pdf");
c02->Print("proton2.pdf]");
c03->Print("proton3.pdf");
c03->Print("proton3.pdf]");
c04->Print("proton4.pdf");
c04->Print("proton4.pdf]");
c05->Print("proton5.pdf");
c05->Print("proton5.pdf]");
c06->Print("proton6.pdf");
c06->Print("proton6.pdf]");
c07->Print("proton7.pdf");
c07->Print("proton7.pdf]");
}

