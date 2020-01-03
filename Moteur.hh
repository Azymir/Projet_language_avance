#ifndef _Moteur_h
#define _Moteur_h
#include "Element.hh"
#include "Pompe.hh"

class Moteur:public Element					// M1 M2 alimenter
{
	private:
	Pompe pompe; //permet à partir du moteur de savoir quel pompe l'alimente
	Reservoir reservoir; // on stoque le reservoir d'ou provient l'essence
	public:
		Moteur();
		Moteur(int ID);
		//~ Moteur(const Moteur& m);
		void description();
		~Moteur();
		
};
#endif
