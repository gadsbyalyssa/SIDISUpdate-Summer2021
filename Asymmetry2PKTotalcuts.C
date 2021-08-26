#include <vector>
#include <string>
#include <TCanvas.h>
#include <TPad.h>
#include <TH1F.h>
#include <TF1.h>
#include <fstream>
#include <iostream>



void Asymmetry2PKTotalcuts()
{

////////////////////////////////////////////////////////////////////////////////
TCanvas*c03 = new TCanvas("c03", "Full Asymm", 1600,1000);
c03->Divide(1,1);
c03->Print("FullAsymmetry2PK3.pdf[");

const Int_t n1 = 6; //Moments Method Fall 2018
Double_t x1[n1] = {0.05, 0.15, 0.25, 0.35, 0.45, 0.55};
Double_t y1[n1] = {-0.015709304003802622, -0.014855542821995363, -0.007406875500267447, 0.027943476743468743, -0.07689238502919862, -0.08920226182985061};
Double_t ex1[n1] = {0, 0, 0, 0, 0, 0};
Double_t ey1[n1] = {0.008110439467009121, 0.00944084014140037, 0.0165909737869824, 0.03190057782262132, 0.06929503283888926, 0.141860486932353};

const Int_t n2 = 6; //Fit Method Fall 2018
Double_t x2[n2] = {0.054, 0.154, 0.254, 0.354, 0.454, 0.554};
Double_t y2[n2] = {-0.014866, -0.016634, -0.009317, 0.004622, -0.1354, 0.2819 };
Double_t ex2[n2] = {0, 0, 0, 0, 0, 0};
Double_t ey2[n2] = {0.006795,  0.00806, 0.01549, 0.03404, 0.09157, 0.2435};

const Int_t n3 = 6; //Moments Method Spring 2019
Double_t x3[n3] = {0.058, 0.158, 0.258, 0.358, 0.458, 0.558};
Double_t y3[n3] = {-0.020063710646881647, -0.022718492284429265, -0.009207095371707844, -0.07156247242224247, -0.0690452897692671, 0.1668548587365015};
Double_t ex3[n3] = {0, 0, 0, 0, 0, 0};
Double_t ey3[n3] = {0.007791177408887533, 0.009187416971554346, 0.01610825627819502, 0.03329353092626351, 0.07388930380353302, 0.37659618535622646};

const Int_t n4 = 6; //Fit Method Spring 2019
Double_t x4[n4] = {0.062, 0.162, 0.262, 0.362, 0.462, 0.562};
Double_t y4[n4] = {-0.01491, -0.02036, -0.012853, -0.0101644, -0.03491, 0.02456 };
Double_t ex4[n4] = {0, 0, 0, 0, 0, 0};
Double_t ey4[n4] = {0.004978, 0.005449, 0.00937, 0.01848, 0.04077, 0.176};

const Int_t n5 = 6; //Moments Method Total
Double_t x5[n5] = {0.066, 0.166, 0.266, 0.366, 0.466, 0.566};
Double_t y5[n5] = {-0.01926435554951756, -0.008863924444026349, -0.009428018559489394, -0.004995990429017283, -0.04164660541534891, -0.09327427193795765};
Double_t ex5[n5] = {0, 0, 0, 0, 0, 0};
Double_t ey5[n5] = {0.005621912097109313, 0.006595063510818247, 0.011662422118933074, 0.02265747131493882, 0.04906391114519161, 0.23551072516183374};

const Int_t n6 = 6; //Fit Method Total
Double_t x6[n6] = {0.070, 0.170, 0.270, 0.370, 0.470, 0.570};
Double_t y6[n6] = {-0.019347, -0.008021, -0.004276, -0.009877, -0.090411, 0.177715 };
Double_t ex6[n6] = {0, 0, 0, 0, 0, 0};
Double_t ey6[n6] = {0.004736, 0.005758, 0.01102, 0.02459, 0.06515, 0.1838};

const Int_t n7 = 6; //Difference Method Fall 2018
Double_t x7[n7] = {0.074, 0.174, 0.274, 0.374, 0.474, 0.574};
Double_t y7[n7] = {-0.03633056933015997 , -0.026515793372463563, -0.015241329035044373, 0.04728530586960427, -0.12326471113955068 , -0.13132798058537898  };
Double_t ex7[n7] = {0, 0, 0, 0, 0, 0};
Double_t ey7[n7] = {0.014924686118229707, 0.01677508654095976, 0.026075915319349517, 0.04279307104372806, 0.07332266333661311, 0.12416067233928571};

const Int_t n8 = 6; //Difference Method Spring 2019
Double_t x8[n8] = {0.078, 0.178, 0.278, 0.378, 0.478, 0.578};
Double_t y8[n8] = {-0.0513112383146142, -0.03078052026521572, -0.01386961900642296, -0.12082895789895055, -0.07060239080764263, -0.09431384939441812};
Double_t ex8[n8] = {0, 0, 0, 0, 0, 0};
Double_t ey8[n8] = {0.014457668635757055, 0.016270286690132647, 0.02535763531702916,  0.04263622170973567, 0.07276727708480928, 0.12641547055534844};

const Int_t n9 = 6; //Difference Method Total
Double_t x9[n9] = {0.082, 0.182, 0.282, 0.382, 0.482, 0.582};
Double_t y9[n9] = {-0.043468159855263803, -0.016353865843054382, -0.016454710819564546, 0.0030766409433418446, -0.06661977619608064, -0.1506488416975022};
Double_t ex9[n9] = {0, 0, 0, 0, 0, 0};
Double_t ey9[n9] = {0.010413833739779586, 0.011710332717755302, 0.018230147882727636, 0.030208350869875597, 0.05108673560388739, 0.08884490114975926};

TGraphErrors*h2 = new TGraphErrors(n1,x1,y1,ex1,ey1);
h2->SetName("h2");
TGraphErrors*h4 = new TGraphErrors(n3,x3,y3,ex3,ey3);
h4->SetName("h4");
TGraphErrors*h7 = new TGraphErrors(n2,x2,y2,ex2,ey2);
h7->SetName("h7");
TGraphErrors*h1 = new TGraphErrors(n4,x4,y4,ex4,ey4);
h1->SetName("h1");
TGraphErrors*h8 = new TGraphErrors(n5,x5,y5,ex5,ey5);
h8->SetName("h8");
TGraphErrors*h9 = new TGraphErrors(n6,x6,y6,ex6,ey6);
h9->SetName("h9");
TGraphErrors*h10 = new TGraphErrors(n7,x7,y7,ex7,ey7);
h10->SetName("h10");
TGraphErrors*h11 = new TGraphErrors(n8,x8,y8,ex8,ey8);
h11->SetName("h11");
TGraphErrors*h12 = new TGraphErrors(n9,x9,y9,ex9,ey9);
h12->SetName("h12");

TMultiGraph*h3 = new TMultiGraph();

////////////////////////////////////////////////////////////////////////////

h1->SetMarkerStyle(20);
h1->SetMarkerSize(2);
h1->SetMarkerColor(4);
h1->SetLineColor(4);

h2->SetMarkerStyle(24);
h2->SetMarkerSize(2);
h2->SetMarkerColor(2);
h2->SetLineColor(2);

h4->SetMarkerStyle(29);
h4->SetMarkerSize(2);
h4->SetMarkerColor(1);
h4->SetLineColor(1);

h7->SetMarkerStyle(33);
h7->SetMarkerSize(2);
h7->SetMarkerColor(6);
h7->SetLineColor(6);

h8->SetMarkerStyle(22);
h8->SetMarkerSize(2);
h8->SetMarkerColor(9);
h8->SetLineColor(9);

h9->SetMarkerStyle(23);
h9->SetMarkerSize(2);
h9->SetMarkerColor(49);
h9->SetLineColor(49);

h10->SetMarkerStyle(28);
h10->SetMarkerSize(2);
h10->SetMarkerColor(38);
h10->SetLineColor(38);

h11->SetMarkerStyle(8);
h11->SetMarkerSize(2);
h11->SetMarkerColor(49);
h11->SetLineColor(49);

h12->SetMarkerStyle(30);
h12->SetMarkerSize(2);
h12->SetMarkerColor(29);
h12->SetLineColor(29);

////////////////////////////////////////////////////////////////////////////////
c03->cd(1); 
h3->Add(h1);
h3->Add(h2);
h3->Add(h4);
h3->Add(h7);
h3->Add(h8);
h3->Add(h9);
h3->Add(h10);
h3->Add(h11);
h3->Add(h12);

h3->Draw("AP");
h3->GetXaxis()->SetTitle("pTpT");
h3->GetXaxis()->SetTitleSize(0.06);
h3->GetXaxis()->SetTitleOffset(0.4);
h3->GetXaxis()->SetLabelSize(0.03);
h3->GetXaxis()->SetTitleOffset(0.8);
h3->GetYaxis()->SetTitle("Asymmetry Value");
h3->GetYaxis()->SetTitleSize(0.07);
h3->GetYaxis()->SetTitleOffset(0.6);
h3->GetYaxis()->SetLabelSize(0.03);
h3->GetYaxis()->SetRangeUser(-0.2,0.3);


TLegend*legend = new TLegend(0.1,0.63,0.5,1);

legend->AddEntry("h2", "Moments Method (Fall 2018)","p");
legend->AddEntry("h4", "Moments Method (Spring 2019)", "p");
legend->AddEntry("h8", "Moments Method (Total)", "p");
legend->AddEntry("h7", "Fit Method (Fall 2018)", "p");
legend->AddEntry("h1", "Fit Method (Spring 2019)", "p");
legend->AddEntry("h9", "Fit Method (Total)", "p");
legend->AddEntry("h10", "Difference Method (Fall 2018)", "p");
legend->AddEntry("h11", "Difference Method (Spring 2019)", "p");
legend->AddEntry("h12", "Difference Method (Total)", "p");

legend->SetBorderSize(7);
legend->Draw();
c03->Update();

c03->Print("FullAsymmetry2PK3.pdf");
c03->Print("FullAsymmetry2PK3.pdf]");



}
