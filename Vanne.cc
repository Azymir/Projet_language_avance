using namespace std;
#include "Vanne.hh"
#include "Element.hh"
#include <iostream>
#include <cmath>

Vanne::Vanne(): Element(){
	//~ cout<<"créeation d'une vanne\n";
	
	}										// Constructeur avec la Vanne par defaut


Vanne::Vanne(int etat):Element(etat){									// constructeur avec la Vanne passées en paramètres
	
}
void Vanne::description(){
	cout<<"cet objet est une vanne,";
	Element::description();
}
Vanne::~Vanne(){												// Destructeur
		//~ cout << "destruction Vanne avec classe fille " << endl;
}
