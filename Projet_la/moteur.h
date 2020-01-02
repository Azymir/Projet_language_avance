#ifndef MOTEUR_H
#define MOTEUR_H
#include "element.h"
#include "pompe.h"

class Moteur:public Element					// M1 M2 alimenter
{
    private:
    Pompe pompe;
        // int ID;
        //~ int etat;
    public:
        Moteur();
        Moteur(int ID);
        //~ Moteur(const Moteur& m);
        void description();
        ~Moteur();

};

#endif // MOTEUR_H
