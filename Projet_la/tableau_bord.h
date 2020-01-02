#ifndef TABLEAU_BORD_H
#define TABLEAU_BORD_H
#include "pompe.h"
#include "vanne.h"
#include "moteur.h"
#include "reservoir.h"
#include <QApplication>
#include "widget.h"
#include "graphique.h"

class TableauBord
{
    private:
        Vanne V12, V13, V23, VT23, VT12;
        Pompe P1, P2, P3, S1, S2, S3;
        Reservoir R1, R2, R3;
        Moteur M1, M2, M3;




    public:
    TableauBord();

    //tout les getters pour les attributs de classe des différents elements:
    Vanne getV12();
    Vanne getV13();
    Vanne getV23();
    Vanne getVT23();
    Vanne getVT12();


    Pompe getP1();
    Pompe getP2();
    Pompe getP3();

    Pompe getS1();
    Pompe getS2();
    Pompe getS3();


    Reservoir getR1();
    Reservoir getR2();
    Reservoir getR3();

    Moteur getM1();
    Moteur getM2();
    Moteur getM3();

    void description();
    void fermer_VT12();
    void fermer_VT23();
    void ouvrir_VT12();
    void ouvrir_VT23();
    ~TableauBord();
        //~ virtual bool Parcourt(,);
        //~ virtual void Panne();								// panne des pompes;
        //~ virtual void VidangeR(R);							// vidange des réservoirs.
};

#endif // TABLEAU_BORD_H
