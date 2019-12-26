
using namespace std;
#include "Element.hh"
#include <iostream>
#include <cmath>

Element::Element(){
	this->etat = 0;
}						// Constructeur avec la pompe par defaut


Element::Element(int etat) {						// constructeur avec la pompe passées en paramètres
	this->etat = 1;
}
int Element::getEtat(){							// getter de ID
	return this->etat;
}

Element::~Element(){								// Destructeur
	cout << "destruciton Moteur " << endl;
}
