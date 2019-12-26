#ifndef _Pompe_h
#define _Pompe_h
#include "Element.hh"
class Pompe: public Element			// P1 et P2 dans Reservoir
{
	private:
		int etat;         		 // (1)marche, 2)panne, 3)arrêt)
		// Vanne p;            	 // Vanne ouvert ou ferme ou utiliser freind

	public:
		Pompe();
		Pompe(const int etat);
		Pompe(const Pompe &p);
		~Pompe();
		void description();
		int getMarche();
		void changer_etat();
};
#endif
