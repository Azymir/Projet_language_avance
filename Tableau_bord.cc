
using namespace std;
#include <iostream>
#include <cmath>
#include "Vanne.hh"
#include "Moteur.hh"
#include "Reservoir.hh"
#include "Pompe.hh"
#include "Tableau_bord.hh"

TableauBord::TableauBord(){
	//ce constructeur par défaut va instancier un tableau de bord avec tout les element par défaut comme définit sur l'exemple de Mme Kloul.
	//  1) tout les element sont mis à zéro par defaut par le compilateur c++
	//  2) on initialise ls valeur manuellement pour les objets particuliers  
	//
		cout<<"instanciation du tableau de bord\n\n";
	   
	   // on instancie les vannes VT12 et VT23 comme ouvert
	    VT12.setEtat(1);
	    VT23.setEtat(1);
	    
	   // on instancie les pompes de secours à l'arret
	   S1.setEtat(1);
	   S2.setEtat(1);
	   S3.setEtat(1);
	   
	   
	   // on va instancier le nom de chacun des elements de l'interface.
	   VT12.setNom("VT12");
	   VT23.setNom("VT23");
	   V13.setNom("V13");
	   V23.setNom("V23");
	   V12.setNom("V12");
	   
	   R1.setNom("R1");
	   R2.setNom("R2");
	   R3.setNom("R3");
	   
	   M1.setNom("M1");
	   M2.setNom("M2");
	   M3.setNom("M3");
	   
	   P1.setNom("P1");
	   P2.setNom("P2");
	   P3.setNom("P3");
	   S1.setNom("S1");
	   S2.setNom("S2");
	   S3.setNom("S3");

	cout<<"\n\ntableau de bord instancié\n\n";
}
//================================================================
//Tout les getters du systeme
Vanne TableauBord::getV12(){ return this->V12;}
Vanne TableauBord::getV13(){ return this->V13;}
Vanne TableauBord::getV23(){ return this->V23;}
Vanne TableauBord::getVT12(){return this->VT12;}
Vanne TableauBord::getVT23(){return this->VT23;}
Pompe TableauBord::getP1(){return this->P1;}
Pompe TableauBord::getP2(){return this->P2;}
Pompe TableauBord::getP3(){return this->P3;}
Pompe TableauBord::getS1(){return this->S1;}
Pompe TableauBord::getS2(){return this->S2;}
Pompe TableauBord::getS3(){return this->S3;}
Reservoir TableauBord::getR1(){return this->R1;}
Reservoir TableauBord::getR2(){return this->R2;}
Reservoir TableauBord::getR3(){return this->R3;}
Moteur TableauBord::getM1(){return this->M1;}
Moteur TableauBord::getM2(){return this->M2;}
Moteur TableauBord::getM3(){return this->M3;}

//================================================================
//tout les setters du system pour l'attribut etat
void TableauBord::setEtatV12(int etat){this->V12.setEtat(etat);}
void TableauBord::setEtatV13(int etat){this->V13.setEtat(etat);}
void TableauBord::setEtatV23(int etat){this->V23.setEtat(etat);}
void TableauBord::setEtatVT12(int etat){this->VT12.setEtat(etat);}
void TableauBord::setEtatVT23(int etat){this->VT23.setEtat(etat);}
void TableauBord::setEtatP1(int etat){this->P1.setEtat(etat);}
void TableauBord::setEtatP2(int etat){this->P2.setEtat(etat);}
void TableauBord::setEtatP3(int etat){this->P3.setEtat(etat);}
void TableauBord::setEtatS1(int etat){this->S1.setEtat(etat);}
void TableauBord::setEtatS2(int etat){this->S2.setEtat(etat);}
void TableauBord::setEtatS3(int etat){this->S3.setEtat(etat);}
void TableauBord::setEtatR1(int etat){this->R1.setEtat(etat);}
void TableauBord::setEtatR2(int etat){this->R2.setEtat(etat);}
void TableauBord::setEtatR3(int etat){this->R3.setEtat(etat);}
void TableauBord::setEtatM1(int etat){this->M1.setEtat(etat);}
void TableauBord::setEtatM2(int etat){this->M2.setEtat(etat);}
void TableauBord::setEtatM3(int etat){this->M3.setEtat(etat);}

//================================================================
//tout les setters du system pour les attributs de panne
void TableauBord::setFonctionnelP1(bool fonctionnel){this->P1.setFonctionnel(fonctionnel);};
void TableauBord::setFonctionnelP2(bool fonctionnel){this->P2.setFonctionnel(fonctionnel);};
void TableauBord::setFonctionnelP3(bool fonctionnel){this->P3.setFonctionnel(fonctionnel);};
void TableauBord::setFonctionnelS1(bool fonctionnel){this->S1.setFonctionnel(fonctionnel);};
void TableauBord::setFonctionnelS2(bool fonctionnel){this->S2.setFonctionnel(fonctionnel);};
void TableauBord::setFonctionnelS3(bool fonctionnel){this->S3.setFonctionnel(fonctionnel);};
void TableauBord::setPleinR1(bool plein){this->R1.setPlein(plein);};
void TableauBord::setPleinR2(bool plein){this->R2.setPlein(plein);};
void TableauBord::setPleinR3(bool plein){this->R3.setPlein(plein);};


bool TableauBord::check_Reservoir_Pompe(Reservoir R){
	// cette methode va vérifier si un reservoie entré possede des pompe fonctionelles ou pas. Renvoie false si il ne peut plus acheminer le carburant depusi ses prompre pompe.
	// Renvoie vrai sinon
	Pompe P,S;
	
	if(R.getNom() == "R1")   // si le reservoir entré est R1, on vérifie si R1 a des pompes qui ne sont pas en panne.
	{
		P = this->P1;
		S = this -> S1; 
	}
	if(R.getNom() == "R2")   // si le reservoir entré est R1, on vérifie si R1 a des pompes qui ne sont pas en panne.
	{
		P = this->P2;
		S = this -> S2; 
	}
	if(R.getNom() == "R3")   // si le reservoir entré est R1, on vérifie si R1 a des pompes qui ne sont pas en panne.
	{
		P = this->P3;
		S = this -> S3; 
	}
	
	
		if(
			
		   (P.getFonctionnel() == false and S.getFonctionnel() == true)     
										or     
		   (P.getFonctionnel() == true and S.getFonctionnel() == false)
										or
		   (P.getFonctionnel() == true and S.getFonctionnel() == true)
		   
		   )
		{
			return true;
		}
		
		
		else if(P1.getFonctionnel() == false and S1.getFonctionnel() == false)
		{
			return false;
			
		}
	
	
	
	return false;
}


void TableauBord::description(){
	cout<<"Description des elements présent\n\n";
	
	cout<<"Vanne:\n\n";
	cout<<"VT12 ";VT12.description();
	cout<<"VT23 ";VT23.description();
	cout<<"V12 ";V12.description();
	cout<<"V13 ";V13.description();
	cout<<"V23 ";V23.description();
	
	cout<<"Pompe:\n\n";
	cout<<"P1 ";P1.description();
	cout<<"P2 ";P2.description();
	cout<<"P3 ";P3.description();
	cout<<"S1 ";S1.description();
	cout<<"S2 ";S2.description();
	cout<<"S3 ";S3.description();
	
	cout<<"Reservoir:\n\n";
	cout<<"R1 ";R1.description();
	cout<<"R2 ";R2.description();
	cout<<"R3 ";R3.description();
	
	cout<<"Moteur:\n\n";
	cout<<"M1 ";M1.description();
	cout<<"M2 ";M2.description();
	cout<<"M3 ";M3.description();
	
	
}

void TableauBord::fermer_VT12(){
	
	VT12.setEtat(0);
	cout<<"Fermeture de VT12\n";
	
	
	if(R1.getEtat() == 0 and R2.getEtat() == 0)  // si les deux reservoir sont pleins
	{
		
		cout<<"les deux reservoir sont pleins\n";
	}
	if(R1.getEtat() == 1 and R2.getEtat() == 0)
	{
		cout<<"le reservoir R1 est vide, R2 rempli R1 \n";
		R1.setEtat(0);
	}
	if(R1.getEtat() == 0 and R2.getEtat() == 1)
	{
		cout<<"le reservoir R2 est vide, R1 rempli R2\n";
		R2.setEtat(0);
	}
	if(R1.getEtat() == 1 and R2.getEtat() == 1)
	{
		cout<<"R1 et R2 sont vides";
	}
	
}
void TableauBord::fermer_VT23(){
	
	VT23.setEtat(0);
	cout<<"Fermeture de VT23\n";
	
	
	if(R3.getEtat() == 0 and R2.getEtat() == 0)  // si les deux reservoir sont pleins
	{
		
		cout<<"les deux reservoir sont pleins\n";
	}
	if(R3.getEtat() == 1 and R2.getEtat() == 0)
	{
		cout<<"le reservoir R3 est vide, R2 rempli R1 \n";
		R1.setEtat(0);
	}
	if(R3.getEtat() == 0 and R2.getEtat() == 1)
	{
		cout<<"le reservoir R2 est vide, R3 rempli R2\n";
		R2.setEtat(0);
	}
	if(R3.getEtat() == 1 and R2.getEtat() == 1)
	{
		cout<<"R3 et R2 sont vides";
	}
	
}
void TableauBord::fermer_V12(){
	
	V12.setEtat(0);
	cout<<"Fermeture de V12\n";
	
	
	
	
}
void TableauBord::fermer_V13(){
	
	V13.setEtat(0);
	cout<<"Fermeture de V12\n";
	
	
	
}
void TableauBord::fermer_V23(){
	
	V23.setEtat(0);
	cout<<"Fermeture de V12\n";
	
	
	
	
}
void TableauBord::ouvrir_VT12(){
	VT12.setEtat(1);
	cout<<"ouverture de la vanne VT12\n";
}
void TableauBord::ouvrir_VT23(){
	VT23.setEtat(1);
	cout<<"ouverture de la vanne VT23\n";
}
void TableauBord::ouvrir_V12(){
	V12.setEtat(1);
	cout<<"ouverture de la vanne V12\n";
}
void TableauBord::ouvrir_V13(){
	V13.setEtat(1);
	cout<<"ouverture de la vanne V13\n";
}
void TableauBord::ouvrir_V23(){
	V23.setEtat(1);
	cout<<"ouverture de la vanne V23\n";
}

TableauBord::~TableauBord(){}
	

