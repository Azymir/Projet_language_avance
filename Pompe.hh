#ifndef _Pompe_h
#define _Pompe_h
#include "Element.hh"
#include "Reservoir.hh"

class Pompe: public Element			// P1 et P2 dans Reservoir
{
	private:
	Reservoir reservoir;    //reservoir d'ou provient le carburant
	bool fonctionnel;       // booleen indiquant sir la pompe est en panne ou pas
	      		
		

	public:
		Pompe();
		Pompe(const int etat, const bool fonctionnel);
		bool getFonctionnel();
		void setFonctionnel(bool fonctionnel);
		//~ Pompe(const Pompe &p);
		~Pompe();
		void description();
	
};
#endif
