#ifndef POMPE_H
#define POMPE_H
#include "element.h"
#include "reservoir.h"
#include <iostream>
#include <cmath>
#include <QApplication>

class Pompe: public Element			// P1 et P2 dans Reservoir
{
    private:
    //Reservoir reservoir;    //reservoir d'ou provient le carburant
    bool fonctionnel;       // booleen indiquant sir la pompe est en panne ou pas



    public:
        Pompe();
        Pompe(const int etat, const bool fonctionnel);
        bool getFonctionnel();
        void setFonctionnel(bool fonctionnel);
        void checkFontionnelle();
        //~ Pompe(const Pompe &p);
        ~Pompe();
        void description();

};

#endif // POMPE_H
