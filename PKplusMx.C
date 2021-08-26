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



void PKplusMx()
{
double c1, c2, c3, c4, c5, c6, c7, c8, c9, c10, c11, c12, c13, c14, c15, c16, c17, c18, c19, c20, c21, c22, c23, c24, c25, c26, c27, c28, c29, c30, c31, c32, c33;
vector <double> c1_list, c3_list, c16_list, c17_list, c24_list, c25_list, c18_list, c22_list, c23_list, c26_list, c27_list, c28_list, c29_list, c30_list, c31_list, c32_list, c33_list ; //creates vectors to run through list

FILE * fp = fopen("PKTotalSkim8.txt", "r"); //opens txt file to read in

int j, k;
//3 canvases below to plot graphs on and make them easy to see
TCanvas*c05 = new TCanvas("c05", "A1", 1600,1100);
c05->Divide(1,1);
c05->Print("PKplus5m.pdf[");
TCanvas*c07 = new TCanvas("c07", "PKplus", 1600,1100);
c07->Divide(1,1);
c07->Print("PKplus7m.pdf[");
TCanvas*c08 = new TCanvas("c08", "A2", 1600,1100);
c08->Divide(1,1);
c08->Print("PKplus8m.pdf[");
TCanvas*c09 = new TCanvas("c09", "A3", 1600,1100);
c09->Divide(1,1);
c09->Print("PKplus9m.pdf[");
TCanvas*c010 = new TCanvas("c010", "A4", 1600,1100);
c010->Divide(1,1);
c010->Print("PKplus10m.pdf[");
TCanvas*c011 = new TCanvas("c011", "A5", 1600,1100);
c011->Divide(1,1);
c011->Print("PKplus11m.pdf[");
TCanvas*c012 = new TCanvas("c012", "A6", 1600,1100);
c012->Divide(1,1);
c012->Print("PKplus12m.pdf[");
TCanvas*c013 = new TCanvas("c013", "A7", 1600,1100);
c013->Divide(1,1);
c013->Print("PKplus13m.pdf[");
TCanvas*c014 = new TCanvas("c014", "A8", 1600,1100);
c014->Divide(1,1);
c014->Print("PKplus14m.pdf[");
TCanvas*c015 = new TCanvas("c015", "A9", 1600,1100);
c015->Divide(1,1);
c015->Print("PKplus15m.pdf[");
TCanvas*c016 = new TCanvas("c016", "A10", 1600,1100);
c016->Divide(1,1);
c016->Print("PKplus16m.pdf[");
TCanvas*c017 = new TCanvas("c017", "A11", 1600,1100);
c017->Divide(1,1);
c017->Print("PKplus17m.pdf[");
TCanvas*c018 = new TCanvas("c018", "A12", 1600,1100);
c018->Divide(1,1);
c018->Print("PKplus18m.pdf[");
TCanvas*c019 = new TCanvas("c019", "A13", 1600,1100);
c019->Divide(1,1);
c019->Print("PKplus19m.pdf[");
TCanvas*c020 = new TCanvas("c020", "A14", 1600,1100);
c020->Divide(1,1);
c020->Print("PKplus20m.pdf[");

//calls to histograms
gStyle->SetErrorX(0);
TH1F*h1 = new TH1F("","",20,0, 6.4); 
TH1F*h2 = new TH1F("","",20,0, 6.4);
TH1F*h3 = new TH1F("","",20,0, 6.4);
TH1F*h4 = new TH1F("","",20,0, 6.4);
TH1F*h5 = new TH1F("","",20,0, 6.4);
TH1F*h7 = new TH1F("","",20,0, 6.4);
TH1F*h20 = new TH1F("","",200,0, 2.3);
TH1F*h22 = new TH1F("","",20,0, 6.4);
TH1F*h23 = new TH1F("","",20,0, 6.4);
TH1F*h25 = new TH1F("","",20,0, 6.4);
TH1F*h27 = new TH1F("","",20,0, 6.4);
TH1F*h28 = new TH1F("","",20,0, 6.4);
TH1F*h30 = new TH1F("","",20,0, 6.4);
TH1F*h32 = new TH1F("","",20,0, 6.4);
TH1F*h33 = new TH1F("","",20,0, 6.4);
TH1F*h35 = new TH1F("","",20,0, 6.4);
TH1F*h37 = new TH1F("","",20,0, 6.4);
TH1F*h38 = new TH1F("","",20,0, 6.4);
TH1F*h40 = new TH1F("","",20,0, 6.4);
TH1F*h42 = new TH1F("","",20,0, 6.4);
TH1F*h43 = new TH1F("","",20,0, 6.4);
TH1F*h45 = new TH1F("","",20,0, 6.4);
TH1F*h47 = new TH1F("","",20,0, 6.4);
TH1F*h48 = new TH1F("","",20,0, 6.4);
TH1F*h50 = new TH1F("","",20,0, 6.4);
TH1F*h52 = new TH1F("","",20,0, 6.4);
TH1F*h53 = new TH1F("","",20,0, 6.4);
TH1F*h55 = new TH1F("","",20,0, 6.4);
TH1F*h57 = new TH1F("","",20,0, 6.4);
TH1F*h58 = new TH1F("","",20,0, 6.4);
TH1F*h60 = new TH1F("","",20,0, 6.4);
TH1F*h61 = new TH1F("","",5,0, 0.6);
TH1F*h62 = new TH1F("","",5,0, 0.6);
TH1F*h64 = new TH1F("","",5,0, 0.6);
TH1F*h66 = new TH1F("","",5,0, 0.6);
TH1F*h67 = new TH1F("","",5,0, 0.6);
TH1F*h69 = new TH1F("","",5,0, 0.6);
TH1F*h71 = new TH1F("","",5,0, 0.6);
TH1F*h72 = new TH1F("","",5,0, 0.6);
TH1F*h74 = new TH1F("","",5,0, 0.6);
TH1F*h76 = new TH1F("","",5,0, 0.6);
TH1F*h77 = new TH1F("","",5,0, 0.6);
TH1F*h79 = new TH1F("","",5,0, 0.6);
TH1F*h81 = new TH1F("","",5,0, 0.6);
TH1F*h83 = new TH1F("","",5,0, 0.6);

char line[450];
while (fgets(&line,450,fp) ){ 

fscanf(fp, "%lf %lf %lf %lf %lf %lf %lf ", &c1, &c2, &c3, &c4, &c5, &c6, &c7);

fscanf(fp, " %lf %lf %lf %lf %lf %lf %lf %lf %lf ", &c8, &c9, &c10, &c11, &c12, &c13, &c14, &c15, &c16);

fscanf(fp, " %lf %lf %lf %lf %lf %lf %lf %lf %lf ", &c17, &c18, &c19, &c20, &c21, &c22, &c23, &c24, &c25);

fscanf(fp, " %lf %lf %lf %lf %lf %lf %lf %lf ", &c26, &c27, &c28, &c29, &c30, &c31, &c32, &c33);


h1->Fill(c17);
h2->Fill(c16);
h3->Fill(c18);

h20->Fill(c33);

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
/////////////////////////////////////////////////////////////////////Full Asymmetry
for (int i=0; i<c33_list.size(); i++) { 
if (c3_list[i]==1){ h52->Fill(c18_list[i]);} 
else if (c3_list[i]==-1){ h53->Fill(c18_list[i]);} 
}
TH1F*h54 = new TH1F("","",20,0, 6.4);

for (int i=0; i<c33_list.size(); i++) { 
if (c3_list[i]==1){ h54->Fill(c18_list[i]);} 
}
for (int i=0; i<c33_list.size(); i++) { 
if (c3_list[i]==1){ h55->Fill(c18_list[i]);} 
}
/////////////////////////////////////////////////////////////////////
TF1 *f1= new TF1("f1","[0]+([1]*sin(x))+([2]*(sin(2*x)))",0,6.4); 
/////////////////////////////////////////////////////////////////////
h54->Add(h53, -1.0);
h55->Add(h53, 1.0);
TH1F*h51 = (TH1F*) h54->Clone("h51");
h51->Divide(h54,h55);
/////////////////////////////////////////////////////////////////////Asymmetry>1
for (int i=0; i<c33_list.size(); i++) { 
if (c3_list[i]==1 && c33_list[i]>1){ h57->Fill(c18_list[i]);} 
else if (c3_list[i]==-1 && c33_list[i]>1){ h58->Fill(c18_list[i]);} 
}
TH1F*h59 = new TH1F("","",20,0, 6.4);

for (int i=0; i<c33_list.size(); i++) { 
if (c3_list[i]==1 && c33_list[i]>1){ h59->Fill(c18_list[i]);} 
}
for (int i=0; i<c33_list.size(); i++) { 
if (c3_list[i]==1 && c33_list[i]>1){ h60->Fill(c18_list[i]);} 
}
    h57->Print("all");
    h58->Print("all");
/////////////////////////////////////////////////////////////////////
TF1 *f1= new TF1("f1","[0]+([1]*sin(x))+([2]*(sin(2*x)))",0,6.4); 
/////////////////////////////////////////////////////////////////////
h59->Add(h58, -1.0);
h60->Add(h58, 1.0);
TH1F*h56 = (TH1F*) h59->Clone("h56");
h56->Divide(h59,h60);
/////////////////////////////////////////////////////////////////////Asymmetry 0->0.33
for (int i=0; i<c33_list.size(); i++) { 
if (c3_list[i]==1 && c33_list[i]>0 && c33_list[i]<0.33){ h4->Fill(c18_list[i]);} 
else if (c3_list[i]==-1 && c33_list[i]>0 && c33_list[i]<0.33){ h5->Fill(c18_list[i]);} 
}
TH1F*h6 = new TH1F("","",20,0, 6.4);

for (int i=0; i<c33_list.size(); i++) { 
if (c3_list[i]==1 && c33_list[i]>0 && c33_list[i]<0.33){ h6->Fill(c18_list[i]);} 
}
for (int i=0; i<c33_list.size(); i++) { 
if (c3_list[i]==1 && c33_list[i]>0 && c33_list[i]<0.33){ h7->Fill(c18_list[i]);} 
}
/////////////////////////////////////////////////////////////////////
TF1 *f1= new TF1("f1","[0]+([1]*sin(x))+([2]*(sin(2*x)))",0,6.4); 
/////////////////////////////////////////////////////////////////////
h6->Add(h5, -1.0);
h7->Add(h5, 1.0);
TH1F*h10 = (TH1F*) h6->Clone("h10");
h10->Divide(h6,h7);
/////////////////////////////////////////////////////////////////////Asymmetr 0.33->0.67
for (int i=0; i<c33_list.size(); i++) { 
if (c3_list[i]==1 && c33_list[i]>0.33 && c33_list[i]<0.67){ h22->Fill(c18_list[i]);} 
else if (c3_list[i]==-1 && c33_list[i]>0.33 && c33_list[i]<0.67){ h23->Fill(c18_list[i]);} 
}
TH1F*h24 = new TH1F("","",20,0, 6.4);

for (int i=0; i<c33_list.size(); i++) { 
if (c3_list[i]==1 && c33_list[i]>0.33 && c33_list[i]<0.67){ h24->Fill(c18_list[i]);} 
}
for (int i=0; i<c33_list.size(); i++) { 
if (c3_list[i]==1 && c33_list[i]>0.33 && c33_list[i]<0.67){ h25->Fill(c18_list[i]);} 
}
/////////////////////////////////////////////////////////////////////
h24->Add(h23, -1.0);
h25->Add(h23, 1.0);
TH1F*h21 = (TH1F*) h24->Clone("h21");
h21->Divide(h24,h25);
/////////////////////////////////////////////////////////////////////Asymmetry 0.67->1
for (int i=0; i<c33_list.size(); i++) { 
if (c3_list[i]==1 && c33_list[i]>0.67 && c33_list[i]<1.00){ h27->Fill(c18_list[i]);} 
else if (c3_list[i]==-1 && c33_list[i]>0.67 && c33_list[i]<1.00){ h28->Fill(c18_list[i]);} 
}
TH1F*h29 = new TH1F("","",20,0, 6.4);

for (int i=0; i<c33_list.size(); i++) { 
if (c3_list[i]==1 && c33_list[i]>0.67 && c33_list[i]<1.00){ h29->Fill(c18_list[i]);} 
}
for (int i=0; i<c33_list.size(); i++) { 
if (c3_list[i]==1 && c33_list[i]>0.67 && c33_list[i]<1.00){ h30->Fill(c18_list[i]);} 
}
/////////////////////////////////////////////////////////////////////
h29->Add(h28, -1.0);
h30->Add(h28, 1.0);
TH1F*h26 = (TH1F*) h29->Clone("h26");
h26->Divide(h29,h30);
/////////////////////////////////////////////////////////////////////Asymmetry 1->1.33
for (int i=0; i<c33_list.size(); i++) { 
if (c3_list[i]==1 && c33_list[i]>1.00 && c33_list[i]<1.33){ h32->Fill(c18_list[i]);} 
else if (c3_list[i]==-1 && c33_list[i]>1.00 && c33_list[i]<1.33){ h33->Fill(c18_list[i]);} 
}
TH1F*h34 = new TH1F("","",20,0, 6.4);

for (int i=0; i<c33_list.size(); i++) { 
if (c3_list[i]==1 && c33_list[i]>1.00 && c33_list[i]<1.33){ h34->Fill(c18_list[i]);} 
}
for (int i=0; i<c33_list.size(); i++) { 
if (c3_list[i]==1 && c33_list[i]>1.00 && c33_list[i]<1.33){ h35->Fill(c18_list[i]);} 
}
/////////////////////////////////////////////////////////////////////
h34->Add(h33, -1.0);
h35->Add(h33, 1.0);
TH1F*h31 = (TH1F*) h34->Clone("h31");
h31->Divide(h34,h35);
/////////////////////////////////////////////////////////////////////Asymmetry 1.33->1.67
for (int i=0; i<c33_list.size(); i++) { 
if (c3_list[i]==1 && c33_list[i]>1.33 && c33_list[i]<1.67){ h37->Fill(c18_list[i]);} 
else if (c3_list[i]==-1 && c33_list[i]>1.33 && c33_list[i]<1.67){ h38->Fill(c18_list[i]);} 
}
TH1F*h39 = new TH1F("","",20,0, 6.4);

for (int i=0; i<c33_list.size(); i++) { 
if (c3_list[i]==1 && c33_list[i]>1.33 && c33_list[i]<1.67){ h39->Fill(c18_list[i]);} 
}
for (int i=0; i<c33_list.size(); i++) { 
if (c3_list[i]==1 && c33_list[i]>1.33 && c33_list[i]<1.67){ h40->Fill(c18_list[i]);} 
}
/////////////////////////////////////////////////////////////////////
h39->Add(h38, -1.0);
h40->Add(h38, 1.0);
TH1F*h36 = (TH1F*) h39->Clone("h36");
h36->Divide(h39,h40);
/////////////////////////////////////////////////////////////////////Asymmetry 1.67->2.00
for (int i=0; i<c33_list.size(); i++) { 
if (c3_list[i]==1 && c33_list[i]>1.67 && c33_list[i]<2.00){ h42->Fill(c18_list[i]);} 
else if (c3_list[i]==-1 && c33_list[i]>1.67 && c33_list[i]<2.00){ h43->Fill(c18_list[i]);} 
}
TH1F*h44 = new TH1F("","",20,0, 6.4);

for (int i=0; i<c33_list.size(); i++) { 
if (c3_list[i]==1 && c33_list[i]>1.67 && c33_list[i]<2.00){ h44->Fill(c18_list[i]);} 
}
for (int i=0; i<c33_list.size(); i++) { 
if (c3_list[i]==1 && c33_list[i]>1.67 && c33_list[i]<2.00){ h45->Fill(c18_list[i]);} 
}
/////////////////////////////////////////////////////////////////////
h44->Add(h43, -1.0);
h45->Add(h43, 1.0);
TH1F*h41 = (TH1F*) h44->Clone("h41");
h41->Divide(h44,h45);
/////////////////////////////////////////////////////////////////////
/////////////////////////////////////////////////////////////////////Asymmetry 0->pi
for (int i=0; i<c33_list.size(); i++) { 
if (c3_list[i]==1 && c33_list[i]>1 && c18_list[i]>0 && c18_list[i]<3.14159){ h61->Fill(c23_list[i]);} 
else if (c3_list[i]==-1 && c33_list[i]>1 && c18_list[i]>0 && c18_list[i]<3.14159){ h62->Fill(c23_list[i]);} 
}
TH1F*h63 = new TH1F("","",5,0, 0.6);

for (int i=0; i<c33_list.size(); i++) { 
if (c3_list[i]==1 && c33_list[i]>1 && c18_list[i]>0 && c18_list[i]<3.14159){ h63->Fill(c23_list[i]);} 
}
for (int i=0; i<c33_list.size(); i++) { 
if (c3_list[i]==1 && c33_list[i]>1 && c18_list[i]>0 && c18_list[i]<3.14159){ h64->Fill(c23_list[i]);} 
}
/////////////////////////////////////////////////////////////////////
h63->Add(h62, -1.0);
h64->Add(h62, 1.0);
TH1F*h65 = (TH1F*) h63->Clone("h65");
h65->Divide(h63,h64);
    
/////////////////////////////////////////////////////////////////////
/////////////////////////////////////////////////////////////////////Asymmetry 0->pi & pi->2pi (positive helicity)
for (int i=0; i<c33_list.size(); i++) { 
if (c3_list[i]==1 && c33_list[i]>1 && c18_list[i]>3.14159 && c18_list[i]<6.28318){ h66->Fill(c23_list[i]);} 
else if (c3_list[i]==-1 && c33_list[i]>1 && c18_list[i]>0 && c18_list[i]<3.14159){ h67->Fill(c23_list[i]);} 
}
TH1F*h68 = new TH1F("","",5,0, 0.6);

for (int i=0; i<c33_list.size(); i++) { 
if (c3_list[i]==1 && c33_list[i]>1 && c18_list[i]>0 && c18_list[i]<3.14159){ h68->Fill(c23_list[i]);} 
}
for (int i=0; i<c33_list.size(); i++) { 
if (c3_list[i]==1 && c33_list[i]>1 && c18_list[i]>0 && c18_list[i]<3.14159){ h69->Fill(c23_list[i]);} 
}
/////////////////////////////////////////////////////////////////////
h68->Add(h66, -1.0);
h69->Add(h66, 1.0);
TH1F*h70 = (TH1F*) h67->Clone("h70");
h70->Divide(h68,h69);
/////////////////////////////////////////////////////////////////////
/////////////////////////////////////////////////////////////////////Asymmetry  0->pi & pi->2pi (negative helicity)
for (int i=0; i<c33_list.size(); i++) { 
if (c3_list[i]==1 && c33_list[i]>1 && c18_list[i]>3.14159 && c18_list[i]<6.28318){ h71->Fill(c23_list[i]);} 
else if (c3_list[i]==-1 && c33_list[i]>1 && c18_list[i]>3.14159 && c18_list[i]<6.28318){ h72->Fill(c23_list[i]);} 
}
TH1F*h73 = new TH1F("","",5,0, 0.6);

for (int i=0; i<c33_list.size(); i++) { 
if (c3_list[i]==-1 && c33_list[i]>1 && c18_list[i]>0 && c18_list[i]<3.14159){ h73->Fill(c23_list[i]);} 
}
for (int i=0; i<c33_list.size(); i++) { 
if (c3_list[i]==-1 && c33_list[i]>1 && c18_list[i]>0 && c18_list[i]<3.14159){ h74->Fill(c23_list[i]);} 
}
/////////////////////////////////////////////////////////////////////
h73->Add(h72, -1.0);
h74->Add(h72, 1.0);
TH1F*h75 = (TH1F*) h73->Clone("h75");
h75->Divide(h73,h74);
TH1F*h85 = (TH1F*) h70->Clone("h85");
h85->Add(h75, -1.0);
/////////////////////////////////////////////////////////////////////
/////////////////////////////////////////////////////////////////////Asymmetry pi->2pi
for (int i=0; i<c33_list.size(); i++) { 
if (c3_list[i]==1 && c33_list[i]>1 && c18_list[i]>3.14159 && c18_list[i]<6.28318){ h76->Fill(c23_list[i]);} 
else if (c3_list[i]==-1 && c33_list[i]>1 && c18_list[i]>3.14159 && c18_list[i]<6.28318){ h77->Fill(c23_list[i]);} 
}
TH1F*h78 = new TH1F("","",5,0, 0.6);

for (int i=0; i<c33_list.size(); i++) { 
if (c3_list[i]==1 && c33_list[i]>1 && c18_list[i]>3.14159 && c18_list[i]<6.28318){ h78->Fill(c23_list[i]);} 
}
for (int i=0; i<c33_list.size(); i++) { 
if (c3_list[i]==1 && c33_list[i]>1 && c18_list[i]>3.14159 && c18_list[i]<6.28318){ h79->Fill(c23_list[i]);} 
}
/////////////////////////////////////////////////////////////////////
h78->Add(h77, -1.0);
h79->Add(h77, 1.0);
TH1F*h80 = (TH1F*) h78->Clone("h80");
h80->Divide(h78,h79);
/////////////////////////////////////////////////////////////////////
/////////////////////////////////////////////////////////////////////Asymmetry 0->pi & 2pi->pi (no helicity)
for (int i=0; i<c33_list.size(); i++) { 
if (c33_list[i]>1 && c18_list[i]>3.14159 && c18_list[i]<6.28318){ h81->Fill(c23_list[i]);} 
}
TH1F*h82 = new TH1F("","",5,0, 0.6);

for (int i=0; i<c33_list.size(); i++) { 
if (c33_list[i]>1 && c18_list[i]>0 && c18_list[i]<3.14159){ h82->Fill(c23_list[i]);} 
}
for (int i=0; i<c33_list.size(); i++) { 
if (c33_list[i]>1 && c18_list[i]>0 && c18_list[i]<3.14159){ h83->Fill(c23_list[i]);} 
}
/////////////////////////////////////////////////////////////////////
h82->Add(h81, -1.0);
h83->Add(h81, 1.0);
TH1F*h84 = (TH1F*) h82->Clone("h84");
h84->Divide(h82,h83);
/////////////////////////////////////////////////////////////////////N1 and N2 print out for error bars (delta_phi) A1
ofstream outputfile("Full-Asymmetry.txt");
int N = h52->GetNbinsX() + 1;
int M = h53->GetNbinsX() + 1;
int P = h3->GetNbinsX() + 1;  
for(int i=0, int j=0, int k=0; i<N && j<M && k<P ; ++i && ++j && k++){
outputfile << "\t" << h3->GetBinLowEdge(k)+h3->GetBinWidth(k)/2  << "\t" << h52->GetBinContent(i) << "\t" << h53->GetBinContent(j) << endl; }
outputfile.close(); 


c07->cd(1);
h20->GetXaxis()->SetTitle("Mx eProtonKaon");
h20->GetXaxis()->SetTitleSize(0.05);
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
h10->GetXaxis()->SetTitleSize(0.05);
h10->GetXaxis()->SetLabelSize(0.03);
h10->GetXaxis()->SetTitleOffset(1);
h10->GetYaxis()->SetTitle("Asymmetry Value (0.00<Mx<0.33)");
h10->GetYaxis()->SetTitleSize(0.05);
h10->GetYaxis()->SetLabelSize(0.03);
//h10->GetYaxis()->SetTitleOffset(1.3);
h10->GetYaxis()->SetRangeUser(-0.03,0.03);
h10->SetLineWidth(1.5);

h10->SetBinError(1,0.023482);
h10->SetBinError(2,0.0221114);
h10->SetBinError(3,0.020395);
h10->SetBinError(4,0.018199);
h10->SetBinError(5,0.015933);
h10->SetBinError(6,0.01298);
h10->SetBinError(7,0.010609);
h10->SetBinError(8,0.00783);
h10->SetBinError(9,0.005194);
h10->SetBinError(10,0.003195);
h10->SetBinError(11,0.004161);
h10->SetBinError(12,0.007317);
h10->SetBinError(13,0.01031);
h10->SetBinError(14,0.01306);
h10->SetBinError(15,0.01559);
h10->SetBinError(16,0.01846);
h10->SetBinError(17,0.02161);
h10->SetBinError(18,0.02303);
h10->SetBinError(19,0.02452);
h10->SetBinError(20,0.03229);

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
h21->GetXaxis()->SetTitleSize(0.05);
h21->GetXaxis()->SetLabelSize(0.03);
h21->GetXaxis()->SetTitleOffset(1);
h21->GetYaxis()->SetTitle("Asymmetry Value (0.33<Mx<0.67)");
h21->GetYaxis()->SetTitleSize(0.05);
h21->GetYaxis()->SetLabelSize(0.03);
//h21->GetYaxis()->SetTitleOffset(1.3);
h21->GetYaxis()->SetRangeUser(-0.03,0.03);
h21->SetLineWidth(1.5);

h21->SetBinError(1,0.009540955);
h21->SetBinError(2,0.008767726);
h21->SetBinError(3,0.008024261);
h21->SetBinError(4,0.007082781);
h21->SetBinError(5,0.006311512);
h21->SetBinError(6,0.005400815);
h21->SetBinError(7,0.00454532);
h21->SetBinError(8,0.003767222);
h21->SetBinError(9,0.003123626);
h21->SetBinError(10,0.002801785);
h21->SetBinError(11,0.002931593);
h21->SetBinError(12,0.003478992);
h21->SetBinError(13,0.00424491);
h21->SetBinError(14,0.005108829);
h21->SetBinError(15,0.006108953);
h21->SetBinError(16,0.007121633);
h21->SetBinError(17,0.007963781);
h21->SetBinError(18,0.008959756);
h21->SetBinError(19,0.009484901);
h21->SetBinError(20,0.012444764);

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
h26->GetXaxis()->SetTitleSize(0.05);
h26->GetXaxis()->SetLabelSize(0.03);
h26->GetXaxis()->SetTitleOffset(1);
h26->GetYaxis()->SetTitle("Asymmetry Value (0.67<Mx<1.00)");
h26->GetYaxis()->SetTitleSize(0.05);
h26->GetYaxis()->SetLabelSize(0.03);
//h26->GetYaxis()->SetTitleOffset(1.3);
h26->GetYaxis()->SetRangeUser(-0.03,0.03);
h26->SetLineWidth(1.5);

h26->SetBinError(1,0.007789994);
h26->SetBinError(2,0.007219127);
h26->SetBinError(3,0.006659711);
h26->SetBinError(4,0.00603443);
h26->SetBinError(5,0.005485027);
h26->SetBinError(6,0.004875665);
h26->SetBinError(7,0.004266082);
h26->SetBinError(8,0.003722793);
h26->SetBinError(9,0.003246285);
h26->SetBinError(10,0.003045076);
h26->SetBinError(11,0.003119181);
h26->SetBinError(12,0.003470191);
h26->SetBinError(13,0.00403307);
h26->SetBinError(14,0.004606502);
h26->SetBinError(15,0.005271484);
h26->SetBinError(16,0.005987354);
h26->SetBinError(17,0.006658755);
h26->SetBinError(18,0.007401724);
h26->SetBinError(19,0.007828028);
h26->SetBinError(20,0.010116632);
h26->Fit("f1", "R");
h26->SetLineWidth(1.5);
h26->SetMarkerStyle(20);
h26->SetMarkerColor(4);
cout << "Chi2: " << h26->GetFunction("f1")->GetChisquare(); 
cout << " Reduced Chi2: " << h26->GetFunction("f1")->GetChisquare()/(17); 
h26->Draw("");
/////////////////////////////////////////////////////////////////////A4
c010->cd(1);
gStyle->SetOptStat(0);
gStyle->SetOptFit(); 
h31->GetXaxis()->SetTitle("DeltaPhi");
h31->GetXaxis()->SetTitleSize(0.05);
h31->GetXaxis()->SetLabelSize(0.03);
h31->GetXaxis()->SetTitleOffset(1);
h31->GetYaxis()->SetTitle("Asymmetry Value (1.00<Mx<1.33)");
h31->GetYaxis()->SetTitleSize(0.05);
h31->GetYaxis()->SetLabelSize(0.03);
//h31->GetYaxis()->SetTitleOffset(1.3);
h31->GetYaxis()->SetRangeUser(-0.03,0.03);
h31->SetLineWidth(1.5);

h31->SetBinError(1,0.007605852);
h31->SetBinError(2,0.007209492);
h31->SetBinError(3,0.006630214);
h31->SetBinError(4,0.00603153);
h31->SetBinError(5,0.005552119);
h31->SetBinError(6,0.0050136);
h31->SetBinError(7,0.004495675);
h31->SetBinError(8,0.003959725);
h31->SetBinError(9,0.003584795);
h31->SetBinError(10,0.003411949);
h31->SetBinError(11,0.003463265);
h31->SetBinError(12,0.003738075);
h31->SetBinError(13,0.004209766);
h31->SetBinError(14,0.004730547);
h31->SetBinError(15,0.005305983);
h31->SetBinError(16,0.005938244);
h31->SetBinError(17,0.006520536);
h31->SetBinError(18,0.007067154);
h31->SetBinError(19,0.007594098);
h31->SetBinError(20,0.009679712);
h31->Fit("f1", "R");
h31->SetLineWidth(1.5);
h31->SetMarkerStyle(20);
h31->SetMarkerColor(4);
cout << "Chi2: " << h31->GetFunction("f1")->GetChisquare(); 
cout << " Reduced Chi2: " << h31->GetFunction("f1")->GetChisquare()/(17); 
h31->Draw("");
/////////////////////////////////////////////////////////////////////A5
c011->cd(1);
gStyle->SetOptStat(0);
gStyle->SetOptFit(); 
h36->GetXaxis()->SetTitle("DeltaPhi");
h36->GetXaxis()->SetTitleSize(0.05);
h36->GetXaxis()->SetLabelSize(0.03);
h36->GetXaxis()->SetTitleOffset(1);
h36->GetYaxis()->SetTitle("Asymmetry Value (1.33<Mx<1.67)");
h36->GetYaxis()->SetTitleSize(0.05);
h36->GetYaxis()->SetLabelSize(0.03);
//h36->GetYaxis()->SetTitleOffset(1.3);
h36->GetYaxis()->SetRangeUser(-0.03,0.03);
h36->SetLineWidth(1.5);

h36->SetBinError(1,0.008611012);
h36->SetBinError(2,0.008201499);
h36->SetBinError(3,0.007606592);
h36->SetBinError(4,0.006981797);
h36->SetBinError(5,0.006501892);
h36->SetBinError(6,0.005937838);
h36->SetBinError(7,0.005342341);
h36->SetBinError(8,0.004773098);
h36->SetBinError(9,0.004392873);
h36->SetBinError(10,0.004228602);
h36->SetBinError(11,0.004298239);
h36->SetBinError(12,0.004546628);
h36->SetBinError(13,0.005036421);
h36->SetBinError(14,0.005529876);
h36->SetBinError(15,0.006070034);
h36->SetBinError(16,0.006753251);
h36->SetBinError(17,0.007432649);
h36->SetBinError(18,0.008082869);
h36->SetBinError(19,0.008636109);
h36->SetBinError(20,0.011068);

h36->Fit("f1", "R");
h36->SetLineWidth(1.5);
h36->SetMarkerStyle(20);
h36->SetMarkerColor(4);
cout << "Chi2: " << h36->GetFunction("f1")->GetChisquare(); 
cout << " Reduced Chi2: " << h36->GetFunction("f1")->GetChisquare()/(17); 
h36->Draw("");
/////////////////////////////////////////////////////////////////////A6
c012->cd(1);
gStyle->SetOptStat(0);
gStyle->SetOptFit(); 
h41->GetXaxis()->SetTitle("DeltaPhi");
h41->GetXaxis()->SetTitleSize(0.05);
h41->GetXaxis()->SetLabelSize(0.03);
h41->GetXaxis()->SetTitleOffset(1);
h41->GetYaxis()->SetTitle("Asymmetry Value (1.67<Mx<2.00)");
h41->GetYaxis()->SetTitleSize(0.05);
h41->GetYaxis()->SetLabelSize(0.03);
//h41->GetYaxis()->SetTitleOffset(1.3);
h41->GetYaxis()->SetRangeUser(-0.03,0.03);
h41->SetLineWidth(1.5);

h41->SetBinError(1,0.014476907);
h41->SetBinError(2,0.01360019);
h41->SetBinError(3,0.012668813);
h41->SetBinError(4,0.011523619);
h41->SetBinError(5,0.010530175);
h41->SetBinError(6,0.009849716);
h41->SetBinError(7,0.00918572);
h41->SetBinError(8,0.008118578);
h41->SetBinError(9,0.007726294);
h41->SetBinError(10,0.007489682);
h41->SetBinError(11,0.0075749);
h41->SetBinError(12,0.007878192);
h41->SetBinError(13,0.008577725);
h41->SetBinError(14,0.009111712);
h41->SetBinError(15,0.009905216);
h41->SetBinError(16,0.010810543);
h41->SetBinError(17,0.012254516);
h41->SetBinError(18,0.013133563);
h41->SetBinError(19,0.014289581);
h41->SetBinError(20,0.018330521);

h41->Fit("f1", "R");
h41->SetLineWidth(1.5);
h41->SetMarkerStyle(20);
h41->SetMarkerColor(4);
cout << "Chi2: " << h41->GetFunction("f1")->GetChisquare(); 
cout << " Reduced Chi2: " << h41->GetFunction("f1")->GetChisquare()/(17); 
h41->Draw("");
/////////////////////////////////////////////////////////////////////A6
c013->cd(1);
gStyle->SetOptStat(0);
gStyle->SetOptFit(); 
h51->GetXaxis()->SetTitle("DeltaPhi");
h51->GetXaxis()->SetTitleSize(0.05);
h51->GetXaxis()->SetLabelSize(0.03);
h51->GetXaxis()->SetTitleOffset(1);
h51->GetYaxis()->SetTitle("Asymmetry Value (All Mx)");
h51->GetYaxis()->SetTitleSize(0.05);
h51->GetYaxis()->SetLabelSize(0.03);
h51->SetLineWidth(1.5);

h51->SetBinError(1,0.003913376);
h51->SetBinError(2,0.003667916);
h51->SetBinError(3,0.003383487);
h51->SetBinError(4,0.003060729);
h51->SetBinError(5,0.002790955);
h51->SetBinError(6,0.002485506);
h51->SetBinError(7,0.002183021);
h51->SetBinError(8,0.001878803);
h51->SetBinError(9,0.001616775);
h51->SetBinError(10,0.001421858);
h51->SetBinError(11,0.001518466);
h51->SetBinError(12,0.001762228);
h51->SetBinError(13,0.002052927);
h51->SetBinError(14,0.002344294);
h51->SetBinError(15,0.00266462);
h51->SetBinError(16,0.003009519);
h51->SetBinError(17,0.003341323);
h51->SetBinError(18,0.00366769);
h51->SetBinError(19,0.003914593);
h51->SetBinError(20,0.005041228);

h51->Fit("f1", "R");
h51->SetLineWidth(1.5);
h51->SetMarkerStyle(20);
h51->SetMarkerColor(4);
cout << "Chi2: " << h51->GetFunction("f1")->GetChisquare(); 
cout << " Reduced Chi2: " << h51->GetFunction("f1")->GetChisquare()/(17); 
h51->Draw("");
/////////////////////////////////////////////////////////////////////A6
c014->cd(1);
gStyle->SetOptStat(0);
gStyle->SetOptFit(); 
h56->GetXaxis()->SetTitle("DeltaPhi");
h56->GetXaxis()->SetTitleSize(0.05);
h56->GetXaxis()->SetLabelSize(0.03);
h56->GetXaxis()->SetTitleOffset(1);
h56->GetYaxis()->SetTitle("Asymmetry Value (Mx>1)");
h56->GetYaxis()->SetTitleSize(0.05);
h56->GetYaxis()->SetLabelSize(0.03);
//41->GetYaxis()->SetTitleOffset(1.3);
h56->GetYaxis()->SetRangeUser(-0.03,0.03);
h56->SetLineWidth(1.5);

h56->SetBinError(1,0.010413558383577543);
h56->SetBinError(2,0.009845119126215178);
h56->SetBinError(3,0.00912607342273008);
h56->SetBinError(4,0.008306156817090645);
h56->SetBinError(5,0.007652252038564385);
h56->SetBinError(6,0.006985665702709023);
h56->SetBinError(7,0.006271945730201935);
h56->SetBinError(8,0.005570188757161237);
h56->SetBinError(9,0.005087369252995252);
h56->SetBinError(10,0.004871236208759025);
h56->SetBinError(11,0.004939244277267551);
h56->SetBinError(12,0.00527908347306082);
h56->SetBinError(13,0.005880292860457076);
h56->SetBinError(14,0.006498823851284801);
h56->SetBinError(15,0.007235710063055709);
h56->SetBinError(16,0.008037056580159317);
h56->SetBinError(17,0.008874618646047387);
h56->SetBinError(18,0.009687176322716306);
h56->SetBinError(19,0.010373408237782294);
h56->SetBinError(20,0.013360886332266845);
h56->Fit("f1", "R");
h56->SetLineWidth(1.5);
h56->SetMarkerStyle(20);
h56->SetMarkerColor(4);
cout << "Chi2: " << h56->GetFunction("f1")->GetChisquare(); 
cout << " Reduced Chi2: " << h56->GetFunction("f1")->GetChisquare()/(17); 
h56->Draw("");
/////////////////////////////////////////////////////////////////////A8
c015->cd(1);
gStyle->SetOptStat(0);
gStyle->SetOptFit(); 
h65->GetXaxis()->SetTitle("pTpT");
h65->GetXaxis()->SetTitleSize(0.05);
h65->GetXaxis()->SetLabelSize(0.03);
h65->GetXaxis()->SetTitleOffset(1);
h65->GetYaxis()->SetTitle("Asymmetry Value (Mx>1) (0<phi<pi)");
h65->GetYaxis()->SetTitleSize(0.05);
h65->GetYaxis()->SetLabelSize(0.03);
h65->GetYaxis()->SetRangeUser(-0.02,0.02);
h65->SetMarkerSize(2);
h65->SetLineWidth(1.5);

h65->SetBinError(1,0.002450313);
h65->SetBinError(2,0.001063529);
h65->SetBinError(3,0.000791326);
h65->SetBinError(4,0.001228742);
h65->SetBinError(5,0.001773283);

h65->SetLineWidth(1.5);
h65->SetMarkerStyle(20);
h65->SetMarkerColor(4);
h65->Draw("");
/////////////////////////////////////////////////////////////////////A8
c016->cd(1);
gStyle->SetOptStat(0);
gStyle->SetOptFit(); 
h70->GetXaxis()->SetTitle("pTpT");
h70->GetXaxis()->SetTitleSize(0.05);
h70->GetXaxis()->SetLabelSize(0.03);
h70->GetXaxis()->SetTitleOffset(1);
h70->GetYaxis()->SetTitle("Asymmetry Value (Mx>1) (positive helicity)");
h70->GetYaxis()->SetTitleSize(0.05);
h70->GetYaxis()->SetLabelSize(0.03);
h70->GetYaxis()->SetRangeUser(-0.02,0.02);
h70->SetMarkerSize(2);
h70->SetLineWidth(1.5);

h70->SetBinError(1,0.001441106);
h70->SetBinError(2,0.001864336);
h70->SetBinError(3,0.001255833);
h70->SetBinError(4,0.0014122);
h70->SetBinError(5,0.001530881);

h70->SetLineWidth(1.5);
h70->SetMarkerStyle(20);
h70->SetMarkerColor(4);
h70->Draw("");
/////////////////////////////////////////////////////////////////////A8
c017->cd(1);
gStyle->SetOptStat(0);
gStyle->SetOptFit(); 
h75->GetXaxis()->SetTitle("pTpT");
h75->GetXaxis()->SetTitleSize(0.05);
h75->GetXaxis()->SetLabelSize(0.03);
h75->GetXaxis()->SetTitleOffset(1);
h75->GetYaxis()->SetTitle("Asymmetry Value (Mx>1) (negative helicity)");
h75->GetYaxis()->SetTitleSize(0.05);
h75->GetYaxis()->SetLabelSize(0.03);
//h75->GetYaxis()->SetRangeUser(0,0.03);
h75->SetMarkerSize(2);
h75->SetLineWidth(1.5);

h75->SetBinError(1,0.002794895);
h75->SetBinError(2,0.002219316);
h75->SetBinError(3,0.001768753);
h75->SetBinError(4,0.001630579);
h75->SetBinError(5,0.00195667);

h75->SetLineWidth(1.5);
h75->SetMarkerStyle(20);
h75->SetMarkerColor(4);
h75->Draw("");
/////////////////////////////////////////////////////////////////////A8
c018->cd(1);
gStyle->SetOptStat(0);
gStyle->SetOptFit(); 
h80->GetXaxis()->SetTitle("pTpT");
h80->GetXaxis()->SetTitleSize(0.05);
h80->GetXaxis()->SetLabelSize(0.03);
h80->GetXaxis()->SetTitleOffset(1);
h80->GetYaxis()->SetTitle("Asymmetry Value (Mx>1) (pi<phi<2pi)");
h80->GetYaxis()->SetTitleSize(0.05);
h80->GetYaxis()->SetLabelSize(0.03);
h80->GetYaxis()->SetRangeUser(-0.02,0.03);
h80->SetMarkerSize(2);
h80->SetLineWidth(1.5);

h80->SetBinError(1,0.006458885);
h80->SetBinError(2,0.003993417);
h80->SetBinError(3,0.003457637);
h80->SetBinError(4,0.003455205);
h80->SetBinError(5,0.003860115);

h80->SetLineWidth(1.5);
h80->SetMarkerStyle(20);
h80->SetMarkerColor(4);
h80->Draw("");
/////////////////////////////////////////////////////////////////////A8
c019->cd(1);
gStyle->SetOptStat(0);
gStyle->SetOptFit(); 
h84->GetXaxis()->SetTitle("pTpT");
h84->GetXaxis()->SetTitleSize(0.05);
h84->GetXaxis()->SetLabelSize(0.03);
h84->GetXaxis()->SetTitleOffset(1);
h84->GetYaxis()->SetTitle("Asymmetry Value (no helicity cuts)");
h84->GetYaxis()->SetTitleSize(0.05);
h84->GetYaxis()->SetLabelSize(0.03);
h84->GetYaxis()->SetRangeUser(0,0.03);
h84->SetMarkerSize(2);
h84->SetLineWidth(1.5);

h84->SetBinError(1,0.001406941);
h84->SetBinError(2,0.001418723);
h84->SetBinError(3,0.00105939);
h84->SetBinError(4,0.000843419);
h84->SetBinError(5,0.000570537);

h84->SetLineWidth(1.5);
h84->SetMarkerStyle(20);
h84->SetMarkerColor(4);
h84->Draw("");
/////////////////////////////////////////////////////////////////////A9
c020->cd(1);
gStyle->SetOptStat(0);
gStyle->SetOptFit(); 
h85->GetXaxis()->SetTitle("pTpT");
h85->GetXaxis()->SetTitleSize(0.05);
h85->GetXaxis()->SetLabelSize(0.03);
h85->GetXaxis()->SetTitleOffset(1);
h85->GetYaxis()->SetTitle("Asymmetry Value (poshel-neghel)");
h85->GetYaxis()->SetTitleSize(0.05);
h85->GetYaxis()->SetLabelSize(0.03);
//h85->GetYaxis()->SetRangeUser(0,0.03);
h85->SetMarkerSize(2);
h85->SetLineWidth(1.5);

h85->SetBinError(1,0.001406941);
h85->SetBinError(2,0.001418723);
h85->SetBinError(3,0.00105939);
h85->SetBinError(4,0.000843419);
h85->SetBinError(5,0.000570537);

h85->SetLineWidth(1.5);
h85->SetMarkerStyle(20);
h85->SetMarkerColor(4);
h85->Draw("");

gPad->Modified();
gPad->Update();

c05->Print("PKplus5m.pdf");
c05->Print("PKplus5m.pdf]");
c07->Print("PKplus7m.pdf");
c07->Print("PKplus7m.pdf]");
c08->Print("PKplus8m.pdf");
c08->Print("PKplus8m.pdf]");
c09->Print("PKplus9m.pdf");
c09->Print("PKplus9m.pdf]");
c010->Print("PKplus10m.pdf");
c010->Print("PKplus10m.pdf]");
c011->Print("PKplus11m.pdf");
c011->Print("PKplus11m.pdf]");
c012->Print("PKplus12m.pdf");
c012->Print("PKplus12m.pdf]");
c013->Print("PKplus13m.pdf");
c013->Print("PKplus13m.pdf]");
c014->Print("PKplus14m.pdf");
c014->Print("PKplus14m.pdf]");
c015->Print("PKplus15m.pdf");
c015->Print("PKplus15m.pdf]");
c016->Print("PKplus16m.pdf");
c016->Print("PKplus16m.pdf]");
c017->Print("PKplus17m.pdf");
c017->Print("PKplus17m.pdf]");
c018->Print("PKplus18m.pdf");
c018->Print("PKplus18m.pdf]");
c019->Print("PKplus19m.pdf");
c019->Print("PKplus19m.pdf]");
c020->Print("PKplus20m.pdf");
c020->Print("PKplus20m.pdf]");

}

