using namespace std;
#include "Reservoir.hh"
#include "Pompe.hh"
#include <iostream>
#include <cmath>

Reservoir::Reservoir(){
	principale = 0;
	secours = 0;
	fuel = 0;
}						// Constructeur avec la Reservoir par defaut


Reservoir::Reservoir(Pompe principale, Pompe secours, int fuel, int volume) {				// constructeur avec la Reservoir passées en paramètres
	this->principale = 1;
	this->secours = 1;
	this->fuel = fuel;
	this->volume = volume;
}

Reservoir::Reservoir(const Reservoir& r) {								// constructeur avec la Reservoir en paramètre
	this->principale = r.principale;
	this->secours = r.secours;
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
	cout << "destruction Reservoir " << endl;
}
void Reservoir::description(){
	cout << "cet objet est un reservoir\n" << "il contient une pompe principale, une pompe de secours, un tank et un volume donné\n" ;
}
