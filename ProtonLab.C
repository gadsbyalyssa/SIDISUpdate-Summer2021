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



void ProtonLab()
{
double c1, c2, c3, c4, c5, c6, c7, c8, c9, c10, c11, c12, c13, c14, c15, c16, c17, c18, c19, c20, c21, c22;
vector <double> c3_list, c4_list, c5_list, c6_list, c7_list, c8_list, c9_list, c10_list, c11_list, c12_list, c13_list, c18_list, c15_list, c14_list, c16_list, c17_list, c19_list, c20_list, c21_list, c22_list ; //creates vectors to run through list

FILE * fp = fopen("Proton10.txt", "r"); //opens txt file to read in

int j, k;
//3 canvases below to plot graphs on and make them easy to see
TCanvas*c01 = new TCanvas("c01", "Proton", 1600,1000);
c01->Divide(2,2);
c01->Print("protonl.pdf[");
TCanvas*c02 = new TCanvas("c02", "Proton", 1600,1000);
c02->Divide(2,2);
c02->Print("protonl2.pdf[");
TCanvas*c03 = new TCanvas("c03", "Proton", 1600,1000);
c03->Divide(2,2);
c03->Print("protonl3.pdf[");
TCanvas*c04 = new TCanvas("c04", "Proton", 1600,1000);
c04->Divide(2,2);
c04->Print("protonl4.pdf[");
TCanvas*c05 = new TCanvas("c05", "Proton", 1600,1000);
c05->Divide(1,1);
c05->Print("protonl5.pdf[");
TCanvas*c06 = new TCanvas("c06", "Proton", 1600,1000);
c06->Divide(2,2);
c06->Print("protonl6.pdf[");
TCanvas*c07 = new TCanvas("c07", "Proton", 1600,1000);
c07->Divide(2,2);
c07->Print("protonl7.pdf[");
TCanvas*c08 = new TCanvas("c08", "Proton", 1600,1000);
c08->Divide(2,1);
c08->Print("protonl8.pdf[");
TCanvas*c09 = new TCanvas("c09", "Proton", 1600,1000);
c09->Divide(1,1);
c09->Print("protonl9.pdf[");
TCanvas*c010 = new TCanvas("c010", "Proton", 1600,1000);
c010->Divide(1,1);
c010->Print("protonl10.pdf[");
TCanvas*c011 = new TCanvas("c011", "Proton", 1600,1000);
c011->Divide(1,1);
c011->Print("protonl11.pdf[");
TCanvas*c012 = new TCanvas("c012", "Proton", 1600,1000);
c012->Divide(1,1);
c012->Print("protonl12.pdf[");
TCanvas*c013 = new TCanvas("c013", "Proton", 1600,1000);
c013->Divide(1,1);
c013->Print("protonl13.pdf[");
TCanvas*c014 = new TCanvas("c014", "Proton", 1600,1000);
c014->Divide(1,1);
c014->Print("protonl14.pdf[");
TCanvas*c015 = new TCanvas("c015", "Proton", 1600,1000);
c015->Divide(1,1);
c015->Print("protonl15.pdf[");

//calls to histograms
gStyle->SetErrorX(0);
gStyle->SetOptStat(1111);
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
TH1F*h23 = new TH1F("","",20,-150,150);
TH1F*h24 = new TH1F("","",20,-158,158);
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
TH1F*h43 = new TH1F("","",20,0, 6.4);
TH1F*h45 = new TH1F("","",20,0, 6.4);
TH1F*h46 = new TH1F("","",20,0, 6.4);
TH1F*h48 = new TH1F("","",20,0, 6.4);
TH1F*h50 = new TH1F("","",20,0, 6.4);
TH1F*h51 = new TH1F("","",20,0, 6.4);
TH1F*h53 = new TH1F("","",20,0, 6.4);
TH1F*h55 = new TH1F("","",20,0, 6.4);
TH1F*h56 = new TH1F("","",20,0, 6.4);
TH1F*h58 = new TH1F("","",20,0, 6.4);

char line[450];
while (fgets(&line,450,fp) ){ 
fscanf(fp, "%lf %lf %lf %lf %lf %lf %lf ", &c1, &c2, &c3, &c4, &c5, &c6, &c7);

fscanf(fp, " %lf %lf %lf %lf %lf %lf %lf %lf %lf ", &c8, &c9, &c10, &c11, &c12, &c13, &c14, &c15, &c16);

fscanf(fp, " %lf %lf %lf %lf %lf %lf ", &c17, &c18, &c19, &c20, &c21, &c22);

//fills histograms with data from different columns (columns with variable names are in procesg2.groovy)

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
h23->Fill(c21);
h24->Fill(c22);

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

TH1F*h10 = (TH1F*) h4->Clone("h10");
h10->Divide(h4,h5);
///////////////////////////////////////////////////////////////////////////////////////////A2 Mx>1.5
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

TF1 *f1= new TF1("f1","[0]+([1]*sin(x))",0,6.4); 
h32->Add(h31, -1.0);
h33->Add(h31, 1.0);

TH1F*h34 = (TH1F*) h32->Clone("h34");
h34->Divide(h32,h33);
///////////////////////////////////////////////////////////////////////////////////////////A4 1<Mx<1.5
for (int i=0; i<c3_list.size(); i++) { 
if (c3_list[i]==1 && c10_list[i]>1 && c10_list[i]<1.35){ h35->Fill(c18_list[i]);} 
else if (c3_list[i]==-1 && c10_list[i]>1 && c10_list[i]<1.35){ h36->Fill(c18_list[i]);} 
}

TH1F*h37 = new TH1F("","",20,0, 6.4);

for (int i=0; i<c3_list.size(); i++) { 
if (c3_list[i]==1 && c10_list[i]>1 && c10_list[i]<1.35){ h37->Fill(c18_list[i]);} 
}

for (int i=0; i<c3_list.size(); i++) { 
if (c3_list[i]==1 && c10_list[i]>1 && c10_list[i]<1.35){ h38->Fill(c18_list[i]);} 
}

TF1 *f1= new TF1("f1","[0]+([1]*sin(x))",0,6.4); 
h37->Add(h36, -1.0);
h38->Add(h36, 1.0);

TH1F*h39 = (TH1F*) h36->Clone("h39");
h39->Divide(h37,h38);
///////////////////////////////////////////////////////////////////////////////////////////A5 0.67<Mx<1.00
for (int i=0; i<c3_list.size(); i++) { 
if (c3_list[i]==1 && c10_list[i]>1.5){ h40->Fill(c18_list[i]);} 
else if (c3_list[i]==-1 && c10_list[i]>1.5){ h41->Fill(c18_list[i]);} 
}

TH1F*h42 = new TH1F("","",20,0, 6.4);

for (int i=0; i<c3_list.size(); i++) { 
if (c3_list[i]==1 && c10_list[i]>1.5){ h42->Fill(c18_list[i]);} 
}

for (int i=0; i<c3_list.size(); i++) { 
if (c3_list[i]==1 && c10_list[i]>1.5){ h43->Fill(c18_list[i]);} 
}

TF1 *f1= new TF1("f1","[0]+([1]*sin(x))",0,6.4); 
h42->Add(h41, -1.0);
h43->Add(h41, 1.0);

TH1F*h44 = (TH1F*) h42->Clone("h44");
h44->Divide(h42,h43);
///////////////////////////////////////////////////////////////////////////////////////////A6 1.00<Mx<1.33
for (int i=0; i<c3_list.size(); i++) { 
if (c3_list[i]==1 && c10_list[i]>1.00 && c10_list[i]<1.33){ h45->Fill(c18_list[i]);} 
else if (c3_list[i]==-1 && c10_list[i]>1.00 && c10_list[i]<1.33){ h46->Fill(c18_list[i]);} 
}

TH1F*h47 = new TH1F("","",20,0, 6.4);

for (int i=0; i<c3_list.size(); i++) { 
if (c3_list[i]==1 && c10_list[i]>1.00 && c10_list[i]<1.33){ h47->Fill(c18_list[i]);} 
}

for (int i=0; i<c3_list.size(); i++) { 
if (c3_list[i]==1 && c10_list[i]>1.00 && c10_list[i]<1.33){ h48->Fill(c18_list[i]);} 
}

TF1 *f1= new TF1("f1","[0]+([1]*sin(x))",0,6.4); 
h47->Add(h46, -1.0);
h48->Add(h46, 1.0);

TH1F*h49 = (TH1F*) h47->Clone("h49");
h49->Divide(h47,h48);
///////////////////////////////////////////////////////////////////////////////////////////A7 1.33<Mx<1.67
for (int i=0; i<c3_list.size(); i++) { 
if (c3_list[i]==1 && c10_list[i]>1.33 && c10_list[i]<1.67){ h50->Fill(c18_list[i]);} 
else if (c3_list[i]==-1 && c10_list[i]>1.33 && c10_list[i]<1.67){ h51->Fill(c18_list[i]);} 
}

TH1F*h52 = new TH1F("","",20,0, 6.4);

for (int i=0; i<c3_list.size(); i++) { 
if (c3_list[i]==1 && c10_list[i]>1.33 && c10_list[i]<1.67){ h52->Fill(c18_list[i]);} 
}

for (int i=0; i<c3_list.size(); i++) { 
if (c3_list[i]==1 && c10_list[i]>1.33 && c10_list[i]<1.67){ h53->Fill(c18_list[i]);} 
}

TF1 *f1= new TF1("f1","[0]+([1]*sin(x))",0,6.4); 
h52->Add(h51, -1.0);
h53->Add(h51, 1.0);

TH1F*h54 = (TH1F*) h52->Clone("h54");
h54->Divide(h52,h53);
///////////////////////////////////////////////////////////////////////////////////////////A7 1.67<Mx<2.00
for (int i=0; i<c3_list.size(); i++) { 
if (c3_list[i]==1 && c10_list[i]>1.67 && c10_list[i]<2.00){ h55->Fill(c18_list[i]);} 
else if (c3_list[i]==-1 && c10_list[i]>1.67 && c10_list[i]<2.00){ h56->Fill(c18_list[i]);} 
}

TH1F*h57 = new TH1F("","",20,0, 6.4);

for (int i=0; i<c3_list.size(); i++) { 
if (c3_list[i]==1 && c10_list[i]>1.67 && c10_list[i]<2.00){ h57->Fill(c18_list[i]);} 
}

for (int i=0; i<c3_list.size(); i++) { 
if (c3_list[i]==1 && c10_list[i]>1.67 && c10_list[i]<2.00){ h58->Fill(c18_list[i]);} 
}

TF1 *f1= new TF1("f1","[0]+([1]*sin(x))",0,6.4); 
h57->Add(h56, -1.0);
h58->Add(h56, 1.0);

TH1F*h59 = (TH1F*) h57->Clone("h59");
h59->Divide(h57,h58);
///////////////////////////////////////////////////////////////////////////////////////////
    ofstream outputfile("N+N-.txt");
    int N = h2->GetNbinsX() + 1;
    int M = h3->GetNbinsX() + 1;
    for(int i=0, int j=0 ; i<N && j<M ; ++i && ++j){
    outputfile << "\t" << h2->GetBinContent(j) << "\t" << h3->GetBinContent(i) << endl; }
    outputfile.close();
    
    
//below is just histogram modifications
c01->cd(1);
h1->GetXaxis()->SetTitle("phi proton");
h1->GetXaxis()->SetTitleSize(0.05);
h1->GetXaxis()->SetTitleOffset(1.3);
h1->GetXaxis()->SetLabelSize(0.04);
h1->GetYaxis()->SetTitle("Counts");
h1->GetYaxis()->SetTitleSize(0.04);
h1->GetYaxis()->SetLabelSize(0.025);
h1->GetYaxis()->SetTitleOffset(0.85);
h1->SetLineWidth(1.5); 
h1->SetStats(1111);
gStyle->SetOptStat(1111);
h1->Draw();
gStyle->SetOptStat(1111);


c01->cd(2); 
h2->GetXaxis()->SetTitle("phi (positive helicity)");
h2->GetXaxis()->SetTitleSize(0.05);
h2->GetXaxis()->SetTitleOffset(1.3);
h2->GetXaxis()->SetLabelSize(0.04);
h2->GetYaxis()->SetTitle("Counts");
h2->GetYaxis()->SetTitleSize(0.05);
h2->GetYaxis()->SetLabelSize(0.03);
h2->GetYaxis()->SetTitleOffset(0.8);
h2->SetLineWidth(1.5);
h2->SetStats(1111);
h2->Draw();
gStyle->SetOptStat(1111);

c01->cd(3); 
h3->GetXaxis()->SetTitle("phi (negative helicity)");
h3->GetXaxis()->SetTitleSize(0.05);
h3->GetXaxis()->SetTitleOffset(1.3);
h3->GetXaxis()->SetLabelSize(0.04);
h3->GetYaxis()->SetTitle("Counts");
h3->GetYaxis()->SetTitleSize(0.05);
h3->GetYaxis()->SetLabelSize(0.03);
h3->GetYaxis()->SetTitleOffset(2);
h3->SetLineWidth(1.5);
h3->SetStats(1111);
h3->Draw();
gStyle->SetOptStat(1111);

c02->cd(1); 
h4->GetXaxis()->SetTitle("difference of helicities");
h4->GetXaxis()->SetTitleSize(0.05);
h4->GetXaxis()->SetTitleOffset(1.3);
h4->GetXaxis()->SetLabelSize(0.04);
h4->GetYaxis()->SetTitle("Counts");
h4->GetYaxis()->SetTitleSize(0.05);
h4->GetYaxis()->SetLabelSize(0.025);
h4->GetYaxis()->SetTitleOffset(0.85);
h4->SetLineWidth(1.5);
h4->SetStats(1111);
h4->Draw();
//h4->Print("all");
gStyle->SetOptStat(1111);
c02->cd(2); 
h5->GetXaxis()->SetTitle("sum of helicities");
h5->GetXaxis()->SetTitleSize(0.05);
h5->GetXaxis()->SetTitleOffset(1.3);
h5->GetXaxis()->SetLabelSize(0.04);
h5->GetYaxis()->SetTitle("Counts");
h5->GetYaxis()->SetTitleSize(0.05);
h5->GetYaxis()->SetLabelSize(0.025);
h5->GetYaxis()->SetTitleOffset(0.85);
h5->SetLineWidth(1.5);
h5->SetStats(1111);
h5->Draw();
//h5->Print("all");

c02->cd(3); 
h6->GetXaxis()->SetTitle("pT");
h6->GetXaxis()->SetTitleSize(0.05);
h6->GetXaxis()->SetTitleOffset(1.3);
h6->GetXaxis()->SetLabelSize(0.04);
h6->GetYaxis()->SetTitle("Counts");
h6->GetYaxis()->SetTitleSize(0.05);
h6->GetYaxis()->SetLabelSize(0.03);
h6->GetYaxis()->SetTitleOffset(0.8);
h6->SetLineWidth(1.5);
h6->SetStats(1111);
h6->Draw();

c02->cd(4); 
h7->GetXaxis()->SetTitle("xF");
h7->GetXaxis()->SetTitleSize(0.05);
h7->GetXaxis()->SetTitleOffset(1.3);
h7->GetXaxis()->SetLabelSize(0.04);
h7->GetYaxis()->SetTitle("Counts");
h7->GetYaxis()->SetTitleSize(0.05);
h7->GetYaxis()->SetLabelSize(0.03);
h7->GetYaxis()->SetTitleOffset(0.8);
h7->SetLineWidth(1.5);
h7->SetStats(1111);
h7->Draw();

c03->cd(1); 
h8->GetXaxis()->SetTitle("e_p");
h8->GetXaxis()->SetTitleSize(0.05);
h8->GetXaxis()->SetTitleOffset(1.3);
h8->GetXaxis()->SetLabelSize(0.04);
h8->GetYaxis()->SetTitle("Counts");
h8->GetYaxis()->SetTitleSize(0.045);
h8->GetYaxis()->SetLabelSize(0.03);
h8->GetYaxis()->SetTitleOffset(0.85);
h8->SetLineWidth(1.5);
h8->SetStats(1111);
h8->Draw();

c03->cd(2); 
h9->GetXaxis()->SetTitle("e_theta");
h9->GetXaxis()->SetTitleSize(0.05);
h9->GetXaxis()->SetLabelSize(0.04);
h9->GetXaxis()->SetTitleOffset(1);
h9->GetYaxis()->SetTitle("Counts");
h9->GetYaxis()->SetTitleSize(0.045);
h9->GetYaxis()->SetLabelSize(0.03);
h9->GetYaxis()->SetTitleOffset(0.85);
h9->SetLineWidth(1.5);
h9->SetStats(1111);
h9->Draw();


c03->cd(3);
h11->GetXaxis()->SetTitle("p_p");
h11->GetXaxis()->SetTitleSize(0.05);
h11->GetXaxis()->SetLabelSize(0.02);
h11->GetXaxis()->SetTitleOffset(1);
h11->GetYaxis()->SetTitle("Counts");
h11->GetYaxis()->SetTitleSize(0.045);
h11->GetYaxis()->SetLabelSize(0.03);
h11->GetYaxis()->SetTitleOffset(0.85);
h11->SetLineWidth(1.5);
h11->SetStats(1111);
h11->Draw();


c04->cd(1);
h12->GetXaxis()->SetTitle("p_theta");
h12->GetXaxis()->SetTitleSize(0.05);
h12->GetXaxis()->SetLabelSize(0.02);
h12->GetXaxis()->SetTitleOffset(1);
h12->GetYaxis()->SetTitle("Counts");
h12->GetYaxis()->SetTitleSize(0.05);
h12->GetYaxis()->SetLabelSize(0.02);
h12->GetYaxis()->SetTitleOffset(0.85);
h12->SetLineWidth(1.5);
h12->SetStats(1111);
h12->Draw();


c04->cd(2);
h13->GetXaxis()->SetTitle("Q^{2}");
h13->GetXaxis()->SetTitleSize(0.05);
h13->GetXaxis()->SetLabelSize(0.02);
h13->GetXaxis()->SetTitleOffset(1);
h13->GetYaxis()->SetTitle("Counts");
h13->GetYaxis()->SetTitleSize(0.05);
h13->GetYaxis()->SetLabelSize(0.02);
h13->GetYaxis()->SetTitleOffset(0.85);
h13->SetLineWidth(1.5);
h13->SetStats(1111);
h13->Draw();


c04->cd(3);
h14->GetXaxis()->SetTitle("W");
h14->GetXaxis()->SetTitleSize(0.05);
h14->GetXaxis()->SetLabelSize(0.02);
h14->GetXaxis()->SetTitleOffset(1);
h14->GetYaxis()->SetTitle("Counts");
h14->GetYaxis()->SetTitleSize(0.05);
h14->GetYaxis()->SetLabelSize(0.02);
h14->GetYaxis()->SetTitleOffset(0.85);
h14->SetLineWidth(1.5);
h14->SetStats(1111);
h14->Draw();

c04->cd(4);
h15->GetXaxis()->SetTitle("Mx");
h15->GetXaxis()->SetTitleSize(0.05);
h15->GetXaxis()->SetLabelSize(0.02);
h15->GetXaxis()->SetTitleOffset(1);
h15->GetYaxis()->SetTitle("Counts");
h15->GetYaxis()->SetTitleSize(0.05);
h15->GetYaxis()->SetLabelSize(0.02);
h15->GetYaxis()->SetTitleOffset(0.85);
h15->SetLineWidth(1.5);
h15->SetStats(1111);
h15->Draw();
//h15->Print(all);


c06->cd(1);
h16->GetXaxis()->SetTitle("x");
h16->GetXaxis()->SetTitleSize(0.05);
h16->GetXaxis()->SetLabelSize(0.02);
h16->GetXaxis()->SetTitleOffset(1);
h16->GetYaxis()->SetTitle("Counts");
h16->GetYaxis()->SetTitleSize(0.05);
h16->GetYaxis()->SetLabelSize(0.02);
h16->GetYaxis()->SetTitleOffset(0.85);
h16->SetLineWidth(1.5);
h16->SetStats(1111);
h16->Draw();

c06->cd(2);
h17->GetXaxis()->SetTitle("y");
h17->GetXaxis()->SetTitleSize(0.05);
h17->GetXaxis()->SetLabelSize(0.02);
h17->GetXaxis()->SetTitleOffset(1);
h17->GetYaxis()->SetTitle("Counts");
h17->GetYaxis()->SetTitleSize(0.05);
h17->GetYaxis()->SetLabelSize(0.02);
h17->GetYaxis()->SetTitleOffset(0.85);
h17->SetLineWidth(1.5);
h17->SetStats(1111);
h17->Draw();

c06->cd(3);
h18->GetXaxis()->SetTitle("z");
h18->GetXaxis()->SetTitleSize(0.05);
h18->GetXaxis()->SetLabelSize(0.02);
h18->GetXaxis()->SetTitleOffset(1);
h18->GetYaxis()->SetTitle("Counts");
h18->GetYaxis()->SetTitleSize(0.05);
h18->GetYaxis()->SetLabelSize(0.02);
h18->GetYaxis()->SetTitleOffset(0.85);
h18->SetLineWidth(1.5);
h18->SetStats(1111);
h18->Draw();

c06->cd(4);
h19->GetXaxis()->SetTitle("zeta");
h19->GetXaxis()->SetTitleSize(0.05);
h19->GetXaxis()->SetLabelSize(0.02);
h19->GetXaxis()->SetTitleOffset(1);
h19->GetYaxis()->SetTitle("Counts");
h19->GetYaxis()->SetTitleSize(0.05);
h19->GetYaxis()->SetLabelSize(0.02);
h19->GetYaxis()->SetTitleOffset(0.85);
h19->SetLineWidth(1.5);
h19->SetStats(1111);
h19->Draw();

c07->cd(1);
h20->GetXaxis()->SetTitle("eta");
h20->GetXaxis()->SetTitleSize(0.05);
h20->GetXaxis()->SetLabelSize(0.02);
h20->GetXaxis()->SetTitleOffset(1);
h20->GetYaxis()->SetTitle("Counts");
h20->GetYaxis()->SetTitleSize(0.05);
h20->GetYaxis()->SetLabelSize(0.02);
h20->GetYaxis()->SetTitleOffset(0.85);
h20->SetLineWidth(1.5);
h20->SetStats(1111);
h20->Draw();

c07->cd(2);
h21->GetXaxis()->SetTitle("vz_e");
h21->GetXaxis()->SetTitleSize(0.05);
h21->GetXaxis()->SetLabelSize(0.02);
h21->GetXaxis()->SetTitleOffset(1);
h21->GetYaxis()->SetTitle("Counts");
h21->GetYaxis()->SetTitleSize(0.05);
h21->GetYaxis()->SetLabelSize(0.02);
h21->GetYaxis()->SetTitleOffset(0.85);
h21->SetLineWidth(1.5);
h21->SetStats(1111);
h21->Draw();

c07->cd(3);
h22->GetXaxis()->SetTitle("vz_p");
h22->GetXaxis()->SetTitleSize(0.05);
h22->GetXaxis()->SetLabelSize(0.02);
h22->GetXaxis()->SetTitleOffset(1);
h22->GetYaxis()->SetTitle("Counts");
h22->GetYaxis()->SetTitleSize(0.05);
h22->GetYaxis()->SetLabelSize(0.02);
h22->GetYaxis()->SetTitleOffset(0.85);
h22->SetLineWidth(1.5);
h22->SetStats(1111);
gStyle->SetOptStat(1111);
h22->Draw();
gStyle->SetOptStat(1111);

c08->cd(1);
h23->GetXaxis()->SetTitle("p_phi");
h23->GetXaxis()->SetTitleSize(0.05);
h23->GetXaxis()->SetLabelSize(0.02);
h23->GetXaxis()->SetTitleOffset(1);
h23->GetYaxis()->SetTitle("Counts");
h23->GetYaxis()->SetTitleSize(0.05);
h23->GetYaxis()->SetLabelSize(0.02);
h23->GetYaxis()->SetTitleOffset(0.85);
h23->SetLineWidth(1.5);
h23->SetStats(1111);
h23->Draw();
gStyle->SetOptStat(1111);

c08->cd(2);
h24->GetXaxis()->SetTitle("e_phi");
h24->GetXaxis()->SetTitleSize(0.05);
h24->GetXaxis()->SetLabelSize(0.02);
h24->GetXaxis()->SetTitleOffset(1);
h24->GetYaxis()->SetTitle("Counts");
h24->GetYaxis()->SetTitleSize(0.05);
h24->GetYaxis()->SetLabelSize(0.02);
h24->GetYaxis()->SetTitleOffset(0.85);
h24->SetLineWidth(1.5);
h24->SetStats(1111);
h24->Draw();
gStyle->SetOptStat(1111);
/////////////////////////////////////////////////////////////////////////////////h10
c05->cd(1);
gStyle->SetOptStat(0);
gStyle->SetOptFit(); 
h10->GetXaxis()->SetTitle("Phi");
h10->GetXaxis()->SetTitleSize(0.05);
h10->GetXaxis()->SetLabelSize(0.05);
h10->GetXaxis()->SetTitleOffset(1);
h10->GetYaxis()->SetTitle("Asymmetry Value");
h10->GetYaxis()->SetTitleSize(0.05);
h10->GetYaxis()->SetLabelSize(0.02);
//h10->GetYaxis()->SetTitleOffset(1.3);
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
c09->cd(1);
gStyle->SetOptStat(0);
gStyle->SetOptFit();  
h29->GetXaxis()->SetTitle("Phi");
h29->GetXaxis()->SetTitleSize(0.05);
h29->GetXaxis()->SetLabelSize(0.05);
h29->GetXaxis()->SetTitleOffset(1);
h29->GetYaxis()->SetTitle("Asymmetry Value (Mx>1.35)");
h29->GetYaxis()->SetTitleSize(0.05);
h29->GetYaxis()->SetLabelSize(0.02);
//h29->GetYaxis()->SetTitleOffset(1.3);
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
/////////////////////////////////////////////////////////////////////////////////h34
c010->cd(1);
gStyle->SetOptStat(0);
gStyle->SetOptFit(); 
h34->GetXaxis()->SetTitle("Phi");
h34->GetXaxis()->SetTitleSize(0.05);
h34->GetXaxis()->SetLabelSize(0.05);
h34->GetXaxis()->SetTitleOffset(1);
h34->GetYaxis()->SetTitle("Asymmetry Value (0<Mx<1)");
h34->GetYaxis()->SetTitleSize(0.05);
h34->GetYaxis()->SetLabelSize(0.02);
//h34->GetYaxis()->SetTitleOffset(1.3);
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
c011->cd(1);
gStyle->SetOptStat(0);
gStyle->SetOptFit();  
h39->GetXaxis()->SetTitle("Phi");
h39->GetXaxis()->SetTitleSize(0.05);
h39->GetXaxis()->SetLabelSize(0.05);
h39->GetXaxis()->SetTitleOffset(1);
h39->GetYaxis()->SetTitle("Asymmetry Value (1<Mx<1.35)");
h39->GetYaxis()->SetTitleSize(0.05);
h39->GetYaxis()->SetLabelSize(0.02);
//h39->GetYaxis()->SetTitleOffset(1.3);
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
/////////////////////////////////////////////////////////////////////////////////h44
c012->cd(1);
gStyle->SetOptStat(0);
gStyle->SetOptFit(); 
h44->GetXaxis()->SetTitle("Phi");
h44->GetXaxis()->SetTitleSize(0.05);
h44->GetXaxis()->SetLabelSize(0.05);
h44->GetXaxis()->SetTitleOffset(1);
h44->GetYaxis()->SetTitle("Asymmetry Value (0.67<Mx<1.00)");
h44->GetYaxis()->SetTitleSize(0.05);
h44->GetYaxis()->SetLabelSize(0.02);
//h44->GetYaxis()->SetTitleOffset(1.3);
h44->GetYaxis()->SetRangeUser(-0.03,0.03);
h44->SetLineWidth(1.5);

h44->SetBinError(1,0.0067263);
h44->SetBinError(2,0.00630441);
h44->SetBinError(3,0.00581554);
h44->SetBinError(4,0.00526078);
h44->SetBinError(5,0.00479709);
h44->SetBinError(6,0.00427209);
h44->SetBinError(7,0.0037528);
h44->SetBinError(8,0.003229287);
h44->SetBinError(9,0.00277891);
h44->SetBinError(10,0.0024439);
h44->SetBinError(11,0.00260994);
h44->SetBinError(12,0.00302892);
h44->SetBinError(13,0.00352857);
h44->SetBinError(14,0.00402937);
h44->SetBinError(15,0.00457995);
h44->SetBinError(16,0.00517276);
h44->SetBinError(17,0.00574307);
h44->SetBinError(18,0.00630403);
h44->SetBinError(19,0.0067284);
h44->SetBinError(20,0.00866486);

h44->Fit("f1", "R");
h44->SetLineWidth(1.5);
h44->SetMarkerStyle(20);
h44->SetMarkerColor(4);
cout << "Chi2: " << h44->GetFunction("f1")->GetChisquare(); 
cout << " Reduced Chi2: " << h44->GetFunction("f1")->GetChisquare()/(17); 
h44->Draw("");
/////////////////////////////////////////////////////////////////////////////////h49
c013->cd(1);
gStyle->SetOptStat(0);
gStyle->SetOptFit();  
h49->GetXaxis()->SetTitle("Phi");
h49->GetXaxis()->SetTitleSize(0.05);
h49->GetXaxis()->SetLabelSize(0.05);
h49->GetXaxis()->SetTitleOffset(1);
h49->GetYaxis()->SetTitle("Asymmetry Value (1.00<Mx<1.33)");
h49->GetYaxis()->SetTitleSize(0.05);
h49->GetYaxis()->SetLabelSize(0.02);
//h49->GetYaxis()->SetTitleOffset(1.3);
h49->GetYaxis()->SetRangeUser(-0.03,0.03);
h49->SetLineWidth(1.5);

h49->SetBinError(1,0.0067263);
h49->SetBinError(2,0.00630441);
h49->SetBinError(3,0.00581554);
h49->SetBinError(4,0.00526078);
h49->SetBinError(5,0.00479709);
h49->SetBinError(6,0.00427209);
h49->SetBinError(7,0.0037528);
h49->SetBinError(8,0.003229287);
h49->SetBinError(9,0.00277891);
h49->SetBinError(10,0.0024439);
h49->SetBinError(11,0.00260994);
h49->SetBinError(12,0.00302892);
h49->SetBinError(13,0.00352857);
h49->SetBinError(14,0.00402937);
h49->SetBinError(15,0.00457995);
h49->SetBinError(16,0.00517276);
h49->SetBinError(17,0.00574307);
h49->SetBinError(18,0.00630403);
h49->SetBinError(19,0.0067284);
h49->SetBinError(20,0.00866486);

h49->Fit("f1", "R");
h49->SetLineWidth(1.5);
h49->SetMarkerStyle(20);
h49->SetMarkerColor(4);
cout << "Chi2: " << h49->GetFunction("f1")->GetChisquare(); 
cout << " Reduced Chi2: " << h49->GetFunction("f1")->GetChisquare()/(17); 
h49->Draw("");
/////////////////////////////////////////////////////////////////////////////////h54
c014->cd(1);
gStyle->SetOptStat(0);
gStyle->SetOptFit(); 
h54->GetXaxis()->SetTitle("Phi");
h54->GetXaxis()->SetTitleSize(0.05);
h54->GetXaxis()->SetLabelSize(0.05);
h54->GetXaxis()->SetTitleOffset(1);
h54->GetYaxis()->SetTitle("Asymmetry Value (1.33<Mx<1.67)");
h54->GetYaxis()->SetTitleSize(0.05);
h54->GetYaxis()->SetLabelSize(0.02);
//h54->GetYaxis()->SetTitleOffset(1.3);
h54->GetYaxis()->SetRangeUser(-0.03,0.03);
h54->SetLineWidth(1.5);

h54->SetBinError(1,0.0067263);
h54->SetBinError(2,0.00630441);
h54->SetBinError(3,0.00581554);
h54->SetBinError(4,0.00526078);
h54->SetBinError(5,0.00479709);
h54->SetBinError(6,0.00427209);
h54->SetBinError(7,0.0037528);
h54->SetBinError(8,0.003229287);
h54->SetBinError(9,0.00277891);
h54->SetBinError(10,0.0024439);
h54->SetBinError(11,0.00260994);
h54->SetBinError(12,0.00302892);
h54->SetBinError(13,0.00352857);
h54->SetBinError(14,0.00402937);
h54->SetBinError(15,0.00457995);
h54->SetBinError(16,0.00517276);
h54->SetBinError(17,0.00574307);
h54->SetBinError(18,0.00630403);
h54->SetBinError(19,0.0067284);
h54->SetBinError(20,0.00866486);

h54->Fit("f1", "R");
h54->SetLineWidth(1.5);
h54->SetMarkerStyle(20);
h54->SetMarkerColor(4);
cout << "Chi2: " << h54->GetFunction("f1")->GetChisquare(); 
cout << " Reduced Chi2: " << h54->GetFunction("f1")->GetChisquare()/(17); 
h54->Draw("");
/////////////////////////////////////////////////////////////////////////////////h59
c015->cd(1);
gStyle->SetOptStat(0);
gStyle->SetOptFit();  
h59->GetXaxis()->SetTitle("Phi");
h59->GetXaxis()->SetTitleSize(0.05);
h59->GetXaxis()->SetLabelSize(0.05);
h59->GetXaxis()->SetTitleOffset(1);
h59->GetYaxis()->SetTitle("Asymmetry Value (1.67<Mx<2.00)");
h59->GetYaxis()->SetTitleSize(0.05);
h59->GetYaxis()->SetLabelSize(0.02);
//h59->GetYaxis()->SetTitleOffset(1.3);
h59->GetYaxis()->SetRangeUser(-0.03,0.03);
h59->SetLineWidth(1.5);

h59->SetBinError(1,0.0067263);
h59->SetBinError(2,0.00630441);
h59->SetBinError(3,0.00581554);
h59->SetBinError(4,0.00526078);
h59->SetBinError(5,0.00479709);
h59->SetBinError(6,0.00427209);
h59->SetBinError(7,0.0037528);
h59->SetBinError(8,0.003229287);
h59->SetBinError(9,0.00277891);
h59->SetBinError(10,0.0024439);
h59->SetBinError(11,0.00260994);
h59->SetBinError(12,0.00302892);
h59->SetBinError(13,0.00352857);
h59->SetBinError(14,0.00402937);
h59->SetBinError(15,0.00457995);
h59->SetBinError(16,0.00517276);
h59->SetBinError(17,0.00574307);
h59->SetBinError(18,0.00630403);
h59->SetBinError(19,0.0067284);
h59->SetBinError(20,0.00866486);

h59->Fit("f1", "R");
h59->SetLineWidth(1.5);
h59->SetMarkerStyle(20);
h59->SetMarkerColor(4);
cout << "Chi2: " << h59->GetFunction("f1")->GetChisquare(); 
cout << " Reduced Chi2: " << h59->GetFunction("f1")->GetChisquare()/(17); 
h59->Draw("");

/////////////////////////////////////////////////////////////////////////////////
gPad->Modified();
gPad->Update();

c01->Print("protonl.pdf");
c01->Print("protonl.pdf]");
c02->Print("protonl2.pdf");
c02->Print("protonl2.pdf]");
c03->Print("protonl3.pdf");
c03->Print("protonl3.pdf]");
c04->Print("protonl4.pdf");
c04->Print("protonl4.pdf]");
c05->Print("protonl5.pdf");
c05->Print("protonl5.pdf]");
c06->Print("protonl6.pdf");
c06->Print("protonl6.pdf]");
c07->Print("protonl7.pdf");
c07->Print("protonl7.pdf]");
c08->Print("protonl8.pdf");
c08->Print("protonl8.pdf]");
c09->Print("protonl9.pdf");
c09->Print("protonl9.pdf]");
c010->Print("protonl10.pdf");
c010->Print("protonl10.pdf]");
c011->Print("protonl11.pdf");
c011->Print("protonl11.pdf]");
c012->Print("protonl12.pdf");
c012->Print("protonl12.pdf]");
c013->Print("protonl13.pdf");
c013->Print("protonl13.pdf]");
c014->Print("protonl14.pdf");
c014->Print("protonl14.pdf]");
c015->Print("protonl15.pdf");
c015->Print("protonl15.pdf]");
}


