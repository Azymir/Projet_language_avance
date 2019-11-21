#ifndef _Moteur_h
#define _Moteur_h

class Moteur 						// M1 M2 alimenter
{
	private:
		int ID;
	public:
		Moteur();
		Moteur(int ID);
		Moteur(const Moteur& m);
		~Moteur();
		int getID();
};
#endif
