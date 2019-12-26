using namespace std;
#include "Pompe.hh"
#include <iostream>
#include <cmath>

Pompe::Pompe(): etat(0){}					// Constructeur avec la pompe par defaut


Pompe::Pompe(int etat) {					// constructeur avec la pompe passées en paramètres
	this->etat= etat;
}

Pompe::Pompe(const Pompe& p) {				// constructeur avec la pompe en paramètre
	this->etat= p.etat;
}

int Pompe::getMarche(){
	return this->etat;
}

Pompe::~Pompe(){							// Destructeur
	cout << "dectruction de la pompe" << endl;
}

void Pompe::description(){
	cout<< " cet objet est une pompe: \n" << " sont etat est:"<< this->etat <<endl;
}

void Pompe::changer_etat(){
	if(this->etat == 2) // si l'état est à 2 c'est que la pompe est à l'arret
	{
		this->etat = 1; // elle bascule en état de marche
		cout << "mise en etat de fonctionnement";
	}
	
	if(this->etat == 1) // si la pompe est à 1 c'est qu'elle est en état de fonctionnement
	{
		this->etat = 2; // elle est mise à l'arret
		cout << "Pompe mise à l'arret";
	}

	if(this->etat == 3) // etat 3 signifie qu'elle est en panne
	{
		cout << "La pompe est en panne";
	}
	else cout<<"erreur dans le changement d'état de la pompe !";
}
