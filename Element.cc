
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
int Element::getEtat(){	
	cout<<"l'element donnée est dans l'état"<<this->etat<<"\n";						// getter de ID
	return this->etat;
	
}
// un element avec un état à 0 est en état de marche, à 1 il est à l'arret
void Element::setEtat(int etat){
	
	if(etat == 0)
	{
		cout<<"mise en marche de l'élement\n";
		this->etat = etat;
	}
	if(etat == 1)
	{
		cout<<"mise à l'arret de l'élement\n";
		this->etat = etat;
	}
	else
	{
		cout<<"erreur, l'état entré n'est pas reconnu\n";
	}
}
Element::~Element(){								// Destructeur
	cout << "destruction de l'élèment avec la classe mère\n " << endl;
}
