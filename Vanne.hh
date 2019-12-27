#ifndef _Vanne_h
#define _Vanne_h
#include "Element.hh"

class Vanne: public Element // (VT12,V13,V23),(VT12 ,VT23) 
{
	private:
	public:
		Vanne();
		Vanne(int etat);
		void description();
		~Vanne();
};
#endif
