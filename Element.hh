using namespace std;
#ifndef _Element_h
#define _Element_h

#include <iostream>
#include <cmath>
#include <stdio.h>
#include <string.h>

// tous les objet du projet hériteront de cette classe mère. 
class Element						// M1 M2 alimenter
{
	private:
	int etat;  // tout les elements du projet ont un etat
	string nom;  // ils contiendrons aussi leur nom, ou leur id. ex: VT12
	
	public:
	//~ virtual void Panne();	
	Element();						// Constructeur par defaut
	Element(int etat);					// constructeur avec un état passé en paramètres
	virtual int getEtat();
	virtual string getNom();
	virtual void setEtat(int etat);
	virtual void setNom(string nom);
	virtual void description();
	virtual ~Element();
							// panne des pompes;
	
};
#endif
