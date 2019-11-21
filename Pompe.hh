#ifndef _Pompe_h
#define _Pompe_h

class Pompe						// P1 et P2 dans Reservoir
{
	private:
		int state;         		 // (1)marche, 2)panne, 3)arrêt)
		// Vanne p;            	 // Vanne ouvert ou ferme ou utiliser freind

	public:
		Pompe();
		Pompe(const int state);
		Pompe(const Pompe &p);
		~Pompe();
		int getMarche();
};
#endif
