#ifndef _Moteur_h
#define _Moteur_h

class Moteur 						// M1 M2 alimente par Reservoir
{
	private:
		string ID;
	public:
		Moteur();
		Moteur(string ID);
    ~Moteur();
		int getTailleC();
};
#endif
