#ifndef POMPE_H
#define POMPE_H
#include "element.h"

class Pompe: public Element			// P1 et P2 dans Reservoir
{
private:
    bool fonctionnel;
                 // (1)marche, 2)panne, 3)arrêt)
        //~ Vanne p;            	 // Vanne ouvert ou ferme ou utiliser freind

    public:
        Pompe();
        Pompe(const int etat, const bool fonctionnel);
        Pompe(const Pompe &p);
        ~Pompe();
        void description();
};

#endif // POMPE_H
