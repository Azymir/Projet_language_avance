#ifndef TABLEAU_BORD_H
#define TABLEAU_BORD_H
#include "pompe.h"
#include "vanne.h"
#include "moteur.h"
#include "reservoir.h"

class TableauBord
{
    private:
        Vanne VT12,VT23,V12,V13,V23;										// etat du Vanne 			(ouverture et fermeture des vannes)
        Pompe P1,P2,P3, S1, S2, S3;		   					// etat de la pompe		(démarrage et arrêt des pompes)
        Reservoir R1, R2,R3;								// etat du Reservoir	(Reservoir vide et plein)
        Moteur M1, M2, M3;									// etat du Moteur 		(Moteur en marche ou en panne)




    public:
        TableauBord();
        void description();
        //~ virtual bool Parcourt(,);
        //~ virtual void Panne();								// panne des pompes;
        //~ virtual void VidangeR(R);							// vidange des réservoirs.
};

#endif // TABLEAU_BORD_H
