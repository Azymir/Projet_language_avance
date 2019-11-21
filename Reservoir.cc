using namespace std;
#include "Reservoir.hh"
#include "Pompe.hh"
#include <iostream>
#include <cmath>

Reservoir::Reservoir(): pone(0),ptwo(0),fuel(0){}						// Constructeur avec la Reservoir par defaut


Reservoir::Reservoir(Pompe pone, Pompe ptwo, int fuel) {				// constructeur avec la Reservoir passées en paramètres
	this->pone = 1;
	this->ptwo = 1;
	this->fuel = 5;
}

Reservoir::Reservoir(const Reservoir& r) {								// constructeur avec la Reservoir en paramètre
	this->pone = r.pone;
	this->ptwo = r.ptwo;
	this->fuel = r.fuel;
}

//~ Pompe Reservoir::getone(){											// getter de Pompe 1
	//~ return this->getone;
//~ }

//~ Pompe Reservoir::gettwo(){											// getter de Pompe 2
	//~ return this->gettwo;
//~ }

int Reservoir::getFuel(){												// getter de fuel
	return this->fuel;
}

Reservoir::~Reservoir(){												// Destructeur
	cout << "destruciton Reservoir " << endl;
}
