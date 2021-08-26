#include "TROOT.h"
#include "TFile.h"
#include "TTree.h"
#include "TBrowser.h"
#include "TH2.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <TH1F.h>
#include <TMath.h>
#include <fstream>
#include <iostream>

void ProtonDevin(){
Float_t runnum, evnum, helicity, e_p, e_theta, p_p, p_theta, Q2, W, Mx, x, y, z, xF, pT, zeta, eta, phi, vz_e, vz_p, p_phi, e_phi;

FILE *fp = fopen("Proton10.txt","r");
TFile *hfile = hfile = TFile::Open("Proton.root","RECREATE");

TTree *outTree = new TTree("T","kinematics tree");

outTree->Branch("runnum",&runnum,"runnum/F");
outTree->Branch("evnum",&evnum,"evnum/F");
outTree->Branch("helicity", &helicity,"helicity/F");
outTree->Branch("e_p",&e_p,"e_p/F");
outTree->Branch("e_theta",&e_theta,"e_theta/F");
outTree->Branch("p_p",&p_p,"p_p/F");
outTree->Branch("p_theta",&p_theta,"p_theta/F");
outTree->Branch("Q2",&Q2,"Q2/F");
outTree->Branch("W",&W,"W/F");
outTree->Branch("Mx",&Mx,"Mx/F");
outTree->Branch("x",&x,"x/F");
outTree->Branch("y",&y,"y/F");
outTree->Branch("z",&z,"z/F");
outTree->Branch("xF",&xF,"xF/F");
outTree->Branch("pT",&pT,"pT/F");
outTree->Branch("zeta",&zeta,"zeta/F");
outTree->Branch("eta",&eta,"eta/F");
outTree->Branch("phi",&phi,"phi/F");
outTree->Branch("vz_e",&vz_e,"vz_e/F");
outTree->Branch("vz_p",&vz_p,"vz_p/F");
outTree->Branch("p_phi",&p_phi,"p_phi/F");
outTree->Branch("e_phi",&e_phi,"e_phi/F");

char line[450];
while (fgets(&line,450,fp) ){ 

fscanf(fp, "%f %f %f %f %f %f %f ", &runnum, &evnum, &helicity, &e_p, &e_theta, &p_p, &p_theta);

fscanf(fp, " %f %f %f %f %f %f %f %f %f ", &Q2, &W, &Mx, &x, &y, &z, &xF, &pT, &zeta);

fscanf(fp, " %f %f %f %f %f %f ", &eta, &phi, &vz_e, &vz_p, &p_phi, &e_phi);


outTree->Fill();

}

//outTree->Print();
outTree->Write();
fclose(fp);
hfile->Write();
///////////////////////////////////////////////////////////////
TCut NegHeli = ("helicity == -1");
TCut DifHeli = ("(helicity == 1) - (helicity == -1)");
TCut SumHeli = ("(helicity == 1) + (helicity == -1)");
//TCut Asym = ("((helicity == 1) - (helicity == -1)) / ((helicity == 1) + (helicity == -1))");
TString sinphi("2*sin(phi)");
TCut Mxc = ("Mx>1.5");
TCut Mxa = ("Mx>0 && Mx<1");
TCut Mxb = ("Mx>1 && Mx<1.5");
///////////////////////////////////////////////////////////////
TCanvas*c01 = new TCanvas("c01", "PKplus", 1600,1100);
c01->Divide(1,1);
c01->Print("Mxp.pdf[");
TH1F*Mxp = new TH1F("Mxp","Mxp",100,0, 3);
c01->cd(1);
Mxp->GetXaxis()->SetTitle("Mx");
Mxp->GetXaxis()->SetTitleSize(0.03);
Mxp->GetXaxis()->SetLabelSize(0.02);
Mxp->GetXaxis()->SetTitleOffset(1);
Mxp->GetYaxis()->SetTitle("Counts");
Mxp->GetYaxis()->SetTitleSize(0.035);
Mxp->GetYaxis()->SetLabelSize(0.02);
Mxp->GetYaxis()->SetTitleOffset(0.9);
Mxp->SetStats(0);
//outTree->Scan("Mx");
outTree->Draw("Mx>>Mxp");
///////////////////////////////////////////////////////////////
TCanvas*c02 = new TCanvas("c02", "PKplus", 1600,1100);
c02->Divide(1,1);
c02->Print("Protonphi.pdf[");
TH1F*Pphi = new TH1F("Pphi","Pphi",100,-200, 200);
c02->cd(1);
Pphi->GetXaxis()->SetTitle("Proton Phi (Lab)");
Pphi->GetXaxis()->SetTitleSize(0.03);
Pphi->GetXaxis()->SetLabelSize(0.02);
Pphi->GetXaxis()->SetTitleOffset(1);
Pphi->GetYaxis()->SetTitle("Counts");
Pphi->GetYaxis()->SetTitleSize(0.035);
Pphi->GetYaxis()->SetLabelSize(0.02);
Pphi->GetYaxis()->SetTitleOffset(0.9);
Pphi->SetStats(0);
outTree->Draw("p_phi>>Pphi");
///////////////////////////////////////////////////////////////
TCanvas*c06 = new TCanvas("c06", "PKplus", 1600,1100);
c06->Divide(1,1);
c06->Print("Electronphi.pdf[");
TH1F*Ephi = new TH1F("Ephi","Ephi",100,-200, 200);
c06->cd(1);
Ephi->GetXaxis()->SetTitle("Electron Phi (Lab)");
Ephi->GetXaxis()->SetTitleSize(0.03);
Ephi->GetXaxis()->SetLabelSize(0.02);
Ephi->GetXaxis()->SetTitleOffset(1);
Ephi->GetYaxis()->SetTitle("Counts");
Ephi->GetYaxis()->SetTitleSize(0.035);
Ephi->GetYaxis()->SetLabelSize(0.02);
Ephi->GetYaxis()->SetTitleOffset(0.9);
Ephi->SetStats(0);
outTree->Draw("e_phi>>Ephi");
///////////////////////////////////////////////////////////////
TCanvas*c03 = new TCanvas("c03", "PKplus", 1600,1100);
c03->Divide(1,1);
c03->Print("VzProton.pdf[");
TH1F*Vzp = new TH1F("Vzp","Vzp",100,-9, 6.2);
c03->cd(1);
Vzp->GetXaxis()->SetTitle("Vz Proton");
Vzp->GetXaxis()->SetTitleSize(0.03);
Vzp->GetXaxis()->SetLabelSize(0.02);
Vzp->GetXaxis()->SetTitleOffset(1);
Vzp->GetYaxis()->SetTitle("Counts");
Vzp->GetYaxis()->SetTitleSize(0.035);
Vzp->GetYaxis()->SetLabelSize(0.02);
Vzp->GetYaxis()->SetTitleOffset(0.9);
Vzp->SetStats(0);
outTree->Draw("vz_p>>Vzp");
///////////////////////////////////////////////////////////////
TCanvas*c04 = new TCanvas("c04", "PKplus", 1600,1100);
c04->Divide(1,1);
c04->Print("VzElectron.pdf[");
TH1F*Vze = new TH1F("Vze","Vze",100,-9, 6.2);
c04->cd(1);
Vze->GetXaxis()->SetTitle("Vz Electron");
Vze->GetXaxis()->SetTitleSize(0.03);
Vze->GetXaxis()->SetLabelSize(0.02);
Vze->GetXaxis()->SetTitleOffset(1);
Vze->GetYaxis()->SetTitle("Counts");
Vze->GetYaxis()->SetTitleSize(0.035);
Vze->GetYaxis()->SetLabelSize(0.02);
Vze->GetYaxis()->SetTitleOffset(0.9);
Vze->SetStats(0);
outTree->Draw("vz_e>>Vze");
///////////////////////////////////////////////////////////////
TCanvas*c05 = new TCanvas("c05", "PKplus", 1600,1100);
c05->Divide(1,1);
c05->Print("Pphi.pdf[");
TH1F*Phi = new TH1F("Phi","Phi",100,0, 6.2);
c05->cd(1);
Phi->GetXaxis()->SetTitle("Proton Phi");
Phi->GetXaxis()->SetTitleSize(0.03);
Phi->GetXaxis()->SetLabelSize(0.02);
Phi->GetXaxis()->SetTitleOffset(1);
Phi->GetYaxis()->SetTitle("Counts");
Phi->GetYaxis()->SetTitleSize(0.035);
Phi->GetYaxis()->SetLabelSize(0.02);
Phi->GetYaxis()->SetTitleOffset(0.9);
Phi->SetStats(0);
outTree->Draw("phi>>Phi");
///////////////////////////////////////////////////////////////
TCanvas*c07 = new TCanvas("c07", "PKplus", 1600,1100);
c07->Divide(1,1);
c07->Print("eta.pdf[");
TH1F*Eta = new TH1F("Eta","Eta",100,0, 2.3);
c07->cd(1);
Eta->GetXaxis()->SetTitle("eta");
Eta->GetXaxis()->SetTitleSize(0.03);
Eta->GetXaxis()->SetLabelSize(0.02);
Eta->GetXaxis()->SetTitleOffset(1);
Eta->GetYaxis()->SetTitle("Counts");
Eta->GetYaxis()->SetTitleSize(0.035);
Eta->GetYaxis()->SetLabelSize(0.02);
Eta->GetYaxis()->SetTitleOffset(0.9);
Eta->SetStats(0);
outTree->Draw("eta>>Eta");
///////////////////////////////////////////////////////////////
TCanvas*c08 = new TCanvas("c08", "PKplus", 1600,1100);
c08->Divide(1,1);
c08->Print("zeta.pdf[");
TH1F*Zeta = new TH1F("Zeta","Zeta",100,0, 1);
c08->cd(1);
Zeta->GetXaxis()->SetTitle("zeta");
Zeta->GetXaxis()->SetTitleSize(0.03);
Zeta->GetXaxis()->SetLabelSize(0.02);
Zeta->GetXaxis()->SetTitleOffset(1);
Zeta->GetYaxis()->SetTitle("Counts");
Zeta->GetYaxis()->SetTitleSize(0.035);
Zeta->GetYaxis()->SetLabelSize(0.02);
Zeta->GetYaxis()->SetTitleOffset(0.9);
Zeta->SetStats(0);
outTree->Draw("zeta>>Zeta");
///////////////////////////////////////////////////////////////
TCanvas*c09 = new TCanvas("c09", "PKplus", 1600,1100);
c09->Divide(1,1);
c09->Print("Pt.pdf[");
TH1F*Pt = new TH1F("Pt","Pt",100,0, 1);
c09->cd(1);
Pt->GetXaxis()->SetTitle("pT");
Pt->GetXaxis()->SetTitleSize(0.03);
Pt->GetXaxis()->SetLabelSize(0.02);
Pt->GetXaxis()->SetTitleOffset(1);
Pt->GetYaxis()->SetTitle("Counts");
Pt->GetYaxis()->SetTitleSize(0.035);
Pt->GetYaxis()->SetLabelSize(0.02);
Pt->GetYaxis()->SetTitleOffset(0.9);
Pt->SetStats(0);
outTree->Draw("pT>>Pt");
///////////////////////////////////////////////////////////////
TCanvas*c010 = new TCanvas("c010", "PKplus", 1600,1100);
c010->Divide(1,1);
c010->Print("xF.pdf[");
TH1F*Xf = new TH1F("Xf","Xf",100,-1, 1);
c010->cd(1);
Xf->GetXaxis()->SetTitle("xF");
Xf->GetXaxis()->SetTitleSize(0.03);
Xf->GetXaxis()->SetLabelSize(0.02);
Xf->GetXaxis()->SetTitleOffset(1);
Xf->GetYaxis()->SetTitle("Counts");
Xf->GetYaxis()->SetTitleSize(0.035);
Xf->GetYaxis()->SetLabelSize(0.02);
Xf->GetYaxis()->SetTitleOffset(0.9);
Xf->SetStats(0);
outTree->Draw("xF>>Xf");
///////////////////////////////////////////////////////////////
TCanvas*c011 = new TCanvas("c011", "PKplus", 1600,1100);
c011->Divide(1,1);
c011->Print("z.pdf[");
TH1F*Z = new TH1F("Z","Z",100,0.1, 1);
c011->cd(1);
Z->GetXaxis()->SetTitle("z");
Z->GetXaxis()->SetTitleSize(0.03);
Z->GetXaxis()->SetLabelSize(0.02);
Z->GetXaxis()->SetTitleOffset(1);
Z->GetYaxis()->SetTitle("Counts");
Z->GetYaxis()->SetTitleSize(0.035);
Z->GetYaxis()->SetLabelSize(0.02);
Z->GetYaxis()->SetTitleOffset(0.9);
Z->SetStats(0);
outTree->Draw("z>>Z");
///////////////////////////////////////////////////////////////
TCanvas*c012 = new TCanvas("c012", "PKplus", 1600,1100);
c012->Divide(1,1);
c012->Print("y.pdf[");
TH1F*Y = new TH1F("Y","Y",100,0.2, 0.8);
c012->cd(1);
Y->GetXaxis()->SetTitle("y");
Y->GetXaxis()->SetTitleSize(0.03);
Y->GetXaxis()->SetLabelSize(0.02);
Y->GetXaxis()->SetTitleOffset(1);
Y->GetYaxis()->SetTitle("Counts");
Y->GetYaxis()->SetTitleSize(0.035);
Y->GetYaxis()->SetLabelSize(0.02);
Y->GetYaxis()->SetTitleOffset(0.9);
Y->SetStats(0);
outTree->Draw("y>>Y");
///////////////////////////////////////////////////////////////
TCanvas*c013 = new TCanvas("c013", "PKplus", 1600,1100);
c013->Divide(1,1);
c013->Print("x.pdf[");
TH1F*X = new TH1F("X","X",100,0, 0.8);
c013->cd(1);
X->GetXaxis()->SetTitle("x");
X->GetXaxis()->SetTitleSize(0.03);
X->GetXaxis()->SetLabelSize(0.02);
X->GetXaxis()->SetTitleOffset(1);
X->GetYaxis()->SetTitle("Counts");
X->GetYaxis()->SetTitleSize(0.035);
X->GetYaxis()->SetLabelSize(0.02);
X->GetYaxis()->SetTitleOffset(0.9);
X->SetStats(0);
outTree->Draw("x>>X");
///////////////////////////////////////////////////////////////
TCanvas*c014 = new TCanvas("c014", "PKplus", 1600,1100);
c014->Divide(1,1);
c014->Print("W.pdf[");
TH1F*w = new TH1F("w","w",100,-10, 10);
c014->cd(1);
w->GetXaxis()->SetTitle("W");
w->GetXaxis()->SetTitleSize(0.03);
w->GetXaxis()->SetLabelSize(0.02);
w->GetXaxis()->SetTitleOffset(1);
w->GetYaxis()->SetTitle("Counts");
w->GetYaxis()->SetTitleSize(0.035);
w->GetYaxis()->SetLabelSize(0.02);
w->GetYaxis()->SetTitleOffset(0.9);
w->SetStats(0);
outTree->Draw("W>>w");
///////////////////////////////////////////////////////////////
TCanvas*c015 = new TCanvas("c015", "PKplus", 1600,1100);
c015->Divide(1,1);
c015->Print("Q2.pdf[");
TH1F*q = new TH1F("q","q",100,1, 8);
c015->cd(1);
q->GetXaxis()->SetTitle("Q^{2}");
q->GetXaxis()->SetTitleSize(0.03);
q->GetXaxis()->SetLabelSize(0.02);
q->GetXaxis()->SetTitleOffset(1);
q->GetYaxis()->SetTitle("Counts");
q->GetYaxis()->SetTitleSize(0.035);
q->GetYaxis()->SetLabelSize(0.02);
q->GetYaxis()->SetTitleOffset(0.9);
q->SetStats(0);
outTree->Draw("Q2>>q");
///////////////////////////////////////////////////////////////
TCanvas*c016 = new TCanvas("c016", "PKplus", 1600,1100);
c016->Divide(1,1);
c016->Print("ptheta.pdf[");
TH1F*ptheta = new TH1F("ptheta","ptheta",100,5.5, 30);
c016->cd(1);
ptheta->GetXaxis()->SetTitle("Proton Theta");
ptheta->GetXaxis()->SetTitleSize(0.03);
ptheta->GetXaxis()->SetLabelSize(0.02);
ptheta->GetXaxis()->SetTitleOffset(1);
ptheta->GetYaxis()->SetTitle("Counts");
ptheta->GetYaxis()->SetTitleSize(0.035);
ptheta->GetYaxis()->SetLabelSize(0.02);
ptheta->GetYaxis()->SetTitleOffset(0.9);
ptheta->SetStats(0);
outTree->Draw("p_theta>>ptheta");
///////////////////////////////////////////////////////////////
TCanvas*c017 = new TCanvas("c017", "PKplus", 1600,1100);
c017->Divide(1,1);
c017->Print("etheta.pdf[");
TH1F*etheta = new TH1F("etheta","etheta",100,7, 25);
c017->cd(1);
etheta->GetXaxis()->SetTitle("Electron Theta");
etheta->GetXaxis()->SetTitleSize(0.03);
etheta->GetXaxis()->SetLabelSize(0.02);
etheta->GetXaxis()->SetTitleOffset(1);
etheta->GetYaxis()->SetTitle("Counts");
etheta->GetYaxis()->SetTitleSize(0.035);
etheta->GetYaxis()->SetLabelSize(0.02);
etheta->GetYaxis()->SetTitleOffset(0.9);
etheta->SetStats(0);
outTree->Draw("e_theta>>etheta");
///////////////////////////////////////////////////////////////
TCanvas*c018 = new TCanvas("c018", "PKplus", 1600,1100);
c018->Divide(1,1);
c018->Print("pp.pdf[");
TH1F*pp = new TH1F("pp","pp",100,0.4, 5);
c018->cd(1);
pp->GetXaxis()->SetTitle("Proton Momentum");
pp->GetXaxis()->SetTitleSize(0.03);
pp->GetXaxis()->SetLabelSize(0.02);
pp->GetXaxis()->SetTitleOffset(1);
pp->GetYaxis()->SetTitle("Counts");
pp->GetYaxis()->SetTitleSize(0.035);
pp->GetYaxis()->SetLabelSize(0.02);
pp->GetYaxis()->SetTitleOffset(0.9);
pp->SetStats(0);
outTree->Draw("p_p>>pp");
///////////////////////////////////////////////////////////////
TCanvas*c019 = new TCanvas("c019", "PKplus", 1600,1100);
c019->Divide(1,1);
c019->Print("ep.pdf[");
TH1F*ep = new TH1F("ep","ep",100,2, 8);
c019->cd(1);
ep->GetXaxis()->SetTitle("Electron Momentum");
ep->GetXaxis()->SetTitleSize(0.03);
ep->GetXaxis()->SetLabelSize(0.02);
ep->GetXaxis()->SetTitleOffset(1);
ep->GetYaxis()->SetTitle("Counts");
ep->GetYaxis()->SetTitleSize(0.035);
ep->GetYaxis()->SetLabelSize(0.02);
ep->GetYaxis()->SetTitleOffset(0.9);
ep->SetStats(0);
outTree->Draw("e_p>>ep");
///////////////////////////////////////////////////////////////
TCanvas*c020 = new TCanvas("c020", "PKplus", 1600,1100);
c020->Divide(1,1);
c020->Print("sinMx3D.pdf[");
TH2F*sinMx = new TH2F("sinMx","sinMx",100, 0,50,0,2.2);
c020->cd(1);
sinMx->GetXaxis()->SetTitle("Mx");
sinMx->GetXaxis()->SetTitleSize(0.03);
sinMx->GetXaxis()->SetLabelSize(0.02);
sinMx->GetXaxis()->SetTitleOffset(1.8);
sinMx->GetYaxis()->SetTitle("2<sin(phi)>");
sinMx->GetYaxis()->SetTitleSize(0.035);
sinMx->GetYaxis()->SetLabelSize(0.02);
sinMx->GetYaxis()->SetTitleOffset(1.3);
sinMx->SetStats(0);
outTree->Draw(sinphi+":Mx>>sinMx");
sinMx->Draw("SURF");
TCanvas*c021 = new TCanvas("c021", "PKplus", 1600,1100);
c021->Divide(1,1);
c021->Print("sinMx.pdf[");
c021->cd(1);
sinMx->Draw("COL");
///////////////////////////////////////////////////////////////
TCanvas*c022 = new TCanvas("c022", "PKplus", 1600,1100);
c022->Divide(1,1);
c022->Print("sinP.pdf[");
TH1F*sinP = new TH1F("sinP","sinP",100, 0,2);
c022->cd(1);
sinP->GetXaxis()->SetTitle("2<sin(phi)>");
sinP->GetXaxis()->SetTitleSize(0.03);
sinP->GetXaxis()->SetLabelSize(0.02);
sinP->GetXaxis()->SetTitleOffset(1.8);
sinP->GetYaxis()->SetTitle("Counts");
sinP->GetYaxis()->SetTitleSize(0.035);
sinP->GetYaxis()->SetLabelSize(0.02);
sinP->GetYaxis()->SetTitleOffset(1.3);
sinP->SetStats(0);
outTree->Draw(sinphi+">>sinP");

///////////////////////////////////////////////////////////////
c01->Print("Mxp.pdf");
c01->Print("Mxp.pdf]");
c02->Print("Protonphi.pdf");
c02->Print("Protonphi.pdf]");
c03->Print("VzProton.pdf");
c03->Print("VzProton.pdf]");
c04->Print("VzElectron.pdf");
c04->Print("VzElectron.pdf]");
c05->Print("Pphi.pdf");
c05->Print("Pphi.pdf]");
c06->Print("Electronphi.pdf");
c06->Print("Electronphi.pdf]");
c07->Print("eta.pdf");
c07->Print("eta.pdf]");
c08->Print("zeta.pdf");
c08->Print("zeta.pdf]");
c09->Print("Pt.pdf");
c09->Print("Pt.pdf]");
c010->Print("xF.pdf");
c010->Print("xF.pdf]");
c011->Print("z.pdf");
c011->Print("z.pdf]");
c012->Print("y.pdf");
c012->Print("y.pdf]");
c013->Print("x.pdf");
c013->Print("x.pdf]");
c014->Print("W.pdf");
c014->Print("W.pdf]");
c015->Print("Q2.pdf");
c015->Print("Q2.pdf]");
c016->Print("ptheta.pdf");
c016->Print("ptheta.pdf]");
c017->Print("etheta.pdf");
c017->Print("etheta.pdf]");
c018->Print("pp.pdf");
c018->Print("pp.pdf]");
c019->Print("ep.pdf");
c019->Print("ep.pdf]");
c020->Print("sinMx3D.pdf");
c020->Print("sinMx3D.pdf]");
c021->Print("sinMx.pdf");
c021->Print("sinMx.pdf]");
c022->Print("sinP.pdf");
c022->Print("sinP.pdf]");
}
