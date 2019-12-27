#ifndef _Moteur_h
#define _Moteur_h
#include "Element.hh"
class Moteur:public Element					// M1 M2 alimenter
{
	private:
		// int ID;
		//~ int etat;
	public:
		Moteur();
		Moteur(int ID);
		Moteur(const Moteur& m);
		void description();
		~Moteur();
		
};
#endif
