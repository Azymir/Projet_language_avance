using namespace std;
#include "Moteur.hh"
#include <iostream>
#include <cmath>

Moteur::Moteur(): ID(0){}						// Constructeur avec la pompe par defaut


Moteur::Moteur(int ID) {						// constructeur avec la pompe passées en paramètres
	this->ID = 1;
}

Moteur::Moteur(const Moteur& m) {				// constructeur avec la pompe en paramètre
	this->ID = m.ID;
}

int Moteur::getID(){							// getter de ID
	return this->ID;
}

Moteur::~Moteur(){								// Destructeur
	cout << "destruciton Moteur " << endl;
}
