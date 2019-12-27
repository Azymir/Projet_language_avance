using namespace std;
#include "Vanne.hh"
#include "Element.hh"
#include <iostream>
#include <cmath>

Vanne::Vanne(): Element(){
	cout<<"créeation d'une vanne\n";
	
	}										// Constructeur avec la Vanne par defaut


Vanne::Vanne(int etat) {									// constructeur avec la Vanne passées en paramètres
	setEtat(etat);
}

Vanne::~Vanne(){												// Destructeur
		cout << "destruction Vanne avec classe fille " << endl;
}
