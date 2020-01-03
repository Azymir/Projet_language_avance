#ifndef _Reservoir_h
#define _Reservoir_h
#include "Element.hh"
class Reservoir: public Element				 // tank1 2 3 
{
	private:
	bool plein;
		
		int volume;   // correspond au volume du reservoir. Il y a deux volumes possible ici, ou l'un est plus grand que l'autre.
	public:
		Reservoir();
		Reservoir(int etat, int volume);
		bool getPlein();
		void setPlein(bool plein);
		~Reservoir();
		void description();
};
#endif
