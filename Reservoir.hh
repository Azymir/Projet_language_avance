#ifndef _Reservoir_h
#define _Reservoir_h
#include "Element.hh"
class Reservoir: public Element				 // tank1 2 3 
{
	private:
	bool plein;
		//~ int fuel;
		//~ Pompe principale;
		//~ Pompe secours;
		int volume;
	public:
		Reservoir();
		//~ Reservoir(Pompe pone, Pompe ptwo, int fuel, int volume);
		Reservoir(int etat, int volume);
		//~ Reservoir(const Reservoir& r);
		//~ Pompe getone();
		//~ Pompe gettwo();
		//~ int getFuel();
		~Reservoir();
		void description();
};
#endif
