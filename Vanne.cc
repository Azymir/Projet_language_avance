using namespace std;
#include "Vanne.hh"
#include <iostream>
#include <cmath>

Vanne::Vanne(): vannes(0){}										// Constructeur avec la Vanne par defaut


Vanne::Vanne(bool vannes) {									// constructeur avec la Vanne passées en paramètres
	this->vannes = 1;
}

Vanne::Vanne(const Vanne &v) {									// constructeur avec la Vanne en paramètre
	this->vannes = v.vannes;
}

bool Vanne::getVannes(){											// getter de fuel
	return this->vannes;
}

Vanne::~Vanne(){												// Destructeur
	cout << "destruciton Vanne " << endl;
}
