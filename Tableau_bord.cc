
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
	    
	    							// etat du Vanne 			(ouverture et fermeture des vannes)
		
		
			
									// etat du Moteur 		(Moteur en marche ou en panne)

	cout<<"\n\ntableau de bord instancié\n\n";
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
