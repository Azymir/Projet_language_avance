#ifndef TABLEAU_BORD_H
#define TABLEAU_BORD_H

#include "pompe.h"
#include "vanne.h"
#include "moteur.h"
#include "reservoir.h"
#include <QApplication>
#include <iostream>
#include <cmath>

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

    //tout les setters du systeme pour etat
    void setEtatV12(int etat);
    void setEtatV13(int etat);
    void setEtatV23(int etat);
    void setEtatVT23(int etat);
    void setEtatVT12(int etat);
    void setEtatP1(int etat);
    void setEtatP2(int etat);
    void setEtatP3(int etat);
    void setEtatS1(int etat);
    void setEtatS2(int etat);
    void setEtatS3(int etat);
    void setEtatR1(int etat);
    void setEtatR2(int etat);
    void setEtatR3(int etat);
    void setEtatM1(int etat);
    void setEtatM2(int etat);
    void setEtatM3(int etat);

    //tout les setter du system pour les attributs de panne
    void setFonctionnelP1(bool fonctionnel);
    void setFonctionnelP2(bool fonctionnel);
    void setFonctionnelP3(bool fonctionnel);
    void setFonctionnelS1(bool fonctionnel);
    void setFonctionnelS2(bool fonctionnel);
    void setFonctionnelS3(bool fonctionnel);
    void setPleinR1(bool plein);
    void setPleinR2(bool plein);
    void setPleinR3(bool plein);


    bool check_Reservoir_Pompe(Reservoir R);
    void check_pompe_fonctionnelle();
    void associe_PompeEtMoteur();

    void description();
    void fermer_VT12();
    void fermer_VT23();
    void fermer_V12();
    void fermer_V13();
    void fermer_V23();

    void ouvrir_VT12();
    void ouvrir_VT23();
    void ouvrir_V12();
    void ouvrir_V13();
    void ouvrir_V23();

    void check_reservoir(); // va alimenter ses voisins en fonction des vannes du systeme ouverte
    void provenance_M1();
    void provenance_M2();
    void provenance_M3();
    void provenance_moteurs();
    void check_M1();
    void check_M2();
    void check_M3();
    void check_moteurs();
    ~TableauBord();							// vidange des réservoirs.
};

#endif // TABLEAU_BORD_H
