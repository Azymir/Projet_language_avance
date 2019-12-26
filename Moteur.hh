#ifndef _Moteur_h
#define _Moteur_h

class Moteur					// M1 M2 alimenter
{
	private:
		// int ID;
		int etat;
	public:
		Moteur();
		Moteur(int ID);
		Moteur(const Moteur& m);
		~Moteur();
		int getEtat();
};
#endif
