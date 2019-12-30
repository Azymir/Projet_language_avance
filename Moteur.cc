using namespace std;
#include "Moteur.hh"
#include <iostream>
#include <cmath>

Moteur::Moteur():Element(){
	
	//~ cout<<"appel constructeur pour un moteur\n";
	}						// Constructeur avec la pompe par defaut


Moteur::Moteur(int etat):Element(etat) {						// constructeur avec la pompe passées en paramètres
	//~ setEtat(etat);
}

//~ Moteur::Moteur(const Moteur& m) {				// constructeur avec la pompe en paramètre
	//~ this->etat = m.etat;
//~ }

void Moteur::description(){
	cout<<"cet element est un moteur, ";
	Element::description();
}
Moteur::~Moteur(){								// Destructeur
	//~ cout << "destruction Moteur " << endl;
}
