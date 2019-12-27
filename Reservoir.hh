#ifndef _Reservoir_h
#define _Reservoir_h
#include "Pompe.hh"
class Reservoir					 // tank1 2 3 
{
	private:
		int fuel;
		//~ Pompe principale;
		//~ Pompe secours;
		int volume;
	public:
		Reservoir();
		//~ Reservoir(Pompe pone, Pompe ptwo, int fuel, int volume);
		Reservoir(int fuel, int volume);
		Reservoir(const Reservoir& r);
		//~ Pompe getone();
		//~ Pompe gettwo();
		int getFuel();
		~Reservoir();
		void description();
};
#endif
