using namespace std;
#include "Pompe.hh"
#include <iostream>
#include <cmath>

Pompe::Pompe(): Element() {
	Element::setEtat(0);
	}					// Constructeur avec la pompe par defaut


Pompe::Pompe(int etat) {					// constructeur avec la pompe passées en paramètres
	setEtat(etat);
}



Pompe::~Pompe(){							// Destructeur
	cout << "dectruction de la pompe avec la classe fille" << endl;
}

