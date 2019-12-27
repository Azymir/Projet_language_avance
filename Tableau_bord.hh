#ifndef _Tableau_Bord_h
#define _Tableau_Bord_h
#include "Pompe.hh"
#include "Vanne.hh"
#include "Moteur.hh"
#include "Reservoir.hh"


class TableauBord
{
	private:
		Vanne V1,V2,V3;										// etat du Vanne 			(ouverture et fermeture des vannes)
		Pompe P1,P2,P3, S1, S2, S3;		   					// etat de la pompe		(démarrage et arrêt des pompes)
		Reservoir R1, R2,R3;								// etat du Reservoir	(Reservoir vide et plein)
		Moteur M1, M2, M3;									// etat du Moteur 		(Moteur en marche ou en panne)




	public:
		//~ virtual bool Parcourt(,);
		//~ virtual void Panne();								// panne des pompes;
		//~ virtual void VidangeR(R);							// vidange des réservoirs.
};
#endif
