
using namespace std;
#include "Element.hh"
#include <iostream>
#include <cmath>

Element::Element(){
	this->etat = 0;
	//~ cout<<"appel constructeur par defaut d'un element\n";
}						// Constructeur avec la pompe par defaut


Element::Element(int etat) {						// constructeur avec la pompe passées en paramètres
	this->etat = etat;
}
int Element::getEtat(){							// getter de ID
	return this->etat;
	
	
}
void Element::description(){
	cout<<"l'état de l'objet est: "<<this->etat<<"\n";
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
		cout<<"erreur, l'état entré n'est pas reconnu "<<"valeur affiché: "<<etat<<endl;
	}
}
Element::~Element(){								// Destructeur
	//~ cout << "destruction de l'élèment avec la classe mère\n " << endl;
}
