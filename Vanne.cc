using namespace std;
#include "Vanne.hh"
#include <iostream>
#include <cmath>

Vanne::Vanne(): etat(0){}										// Constructeur avec la Vanne par defaut


Vanne::Vanne(bool vannes) {									// constructeur avec la Vanne passées en paramètres
	this->etat = 1;
}

Vanne::Vanne(const Vanne &v) {									// constructeur avec la Vanne en paramètre
	this->etat = v.etat;
}

bool Vanne::getEtat(){											// getter de fuel
	return this->etat;
	if( etat == 1) {cout<<"la vanne est ouverte";}
	else {cout<<"la vanne est fermée";}
	
}

void Vanne::changer_etat(bool nouvel_etat){
	this->etat = nouvel_etat;
}
Vanne::~Vanne(){												// Destructeur
	cout << "destruciton Vanne " << endl;
}
