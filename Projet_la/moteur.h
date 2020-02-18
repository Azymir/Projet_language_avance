#ifndef MOTEUR_H
#define MOTEUR_H
#include "element.h"
#include "pompe.h"
#include <iostream>
#include <cmath>
#include <QApplication>

class Moteur:public Element					// M1 M2 alimenter
{
    private:
    Pompe pompe;
    Reservoir reservoir;
    public:
        Moteur();
        Moteur(const int ID);
        Reservoir getReservoir();
        Pompe getPompe();
        void setReservoir(Reservoir R);
        void setReservoirNom(QString nom);
        void setPompe(Pompe P);
        void description();

        ~Moteur();

};

#endif // MOTEUR_H
