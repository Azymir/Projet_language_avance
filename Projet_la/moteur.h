#ifndef MOTEUR_H
#define MOTEUR_H
#include "element.h"

class Moteur:public Element					// M1 M2 alimenter
{
    private:
        // int ID;
        //~ int etat;
    public:
        Moteur();
        Moteur(int ID);
        Moteur(const Moteur& m);
        void description();
        ~Moteur();
};

#endif // MOTEUR_H
