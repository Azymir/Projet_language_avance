#ifndef _Reservoir_h
#define _Reservoir_h
#include "Pompe.hh"
class Reservoir					 // tank1 2 3 
{
	private:
		int fuel;
		Pompe pone;
		Pompe ptwo;
	public:
		Reservoir();
		Reservoir(Pompe pone, Pompe ptwo, int fuel);
		Reservoir(const Reservoir& r);
		//~ Pompe getone();
		//~ Pompe gettwo();
		int getFuel();
		~Reservoir();
};
#endif
