#ifndef _Pompe_h
#define _Pompe_h

class Pompe
{
	private:
    int state;          // (1)marche, 2)panne, 3)arrêt)
    // Vanne p;             // Vanne ouvert ou ferme ou utiliser freind

	public:
		Pompe();
    Pompe(int state);
    ~Pompe();
    int getMarche();
};
#endif
