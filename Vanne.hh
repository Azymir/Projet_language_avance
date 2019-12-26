#ifndef _Vanne_h
#define _Vanne_h
#include "Element.hh"

class Vanne: public Element // (VT12,V13,V23),(VT12 ,VT23) 
{
	private:
		bool etat;
	public:
		Vanne();
		Vanne(bool etat);
		Vanne(const Vanne &v);
		
		bool getEtat();
		void changer_etat(bool nouvel_etat);
		~Vanne();
};
#endif
