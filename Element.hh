
#ifndef _Element_h
#define _Element_h

class Element						// M1 M2 alimenter
{
	private:
	int etat;
	
	public:
	//~ virtual void Panne();	
	Element();						// Constructeur avec la pompe par defaut

Element(int etat);						// constructeur avec la pompe passées en paramètres
int getEtat();
~Element();
							// panne des pompes;
	
};
#endif