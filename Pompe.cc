using namespace std;
#include "Pompe.hh"
#include <iostream>
#include <cmath>

Pompe::Pompe(): state(0){}					// Constructeur avec la pompe par defaut


Pompe::Pompe(int state) {					// constructeur avec la pompe passées en paramètres
	this->state = 1;
}

Pompe::Pompe(const Pompe& p) {				// constructeur avec la pompe en paramètre
	this->state = p.state;
}

int Pompe::getMarche(){
	return this->state;
}

Pompe::~Pompe(){							// Destructeur
	cout << "destruciton Pompe " << endl;
}
