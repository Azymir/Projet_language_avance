using namespace std;
#include "Moteur.hh"
#include <iostream>
#include <cmath>

Moteur::Moteur(): etat(0){}						// Constructeur avec la pompe par defaut


Moteur::Moteur(int etat) {						// constructeur avec la pompe passées en paramètres
	this->etat = 1;
}

Moteur::Moteur(const Moteur& m) {				// constructeur avec la pompe en paramètre
	this->etat = m.etat;
}

int Moteur::getEtat(){							// getter de ID
	return this->etat;
}

Moteur::~Moteur(){								// Destructeur
	cout << "destruction Moteur " << endl;
}
