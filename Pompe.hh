#ifndef _Pompe_h
#define _Pompe_h

class Pompe
{
	private:
    int carburant;
    int marche;          // (marche, panne, arrêt)
    Vanne p;             // Vanne ouvert ou ferme ou utiliser freind

	public:
    Pompe();
    ~Pompe();
    int getMarche();
};
#endif
