#ifndef _Tableau_Bord_h
#define _Tableau_Bord_h

class TableauBord
{
	private:
		Vanne V;						// etat du Vanne 			(ouverture et fermeture des vannes)
		Pompe P;						// etat de la pompe		(démarrage et arrêt des pompes)
		Reservoir R;				// etat du Reservoir	(Reservoir vide et plein)
		Moteur M;						// etat du Moteur 		(Moteur en marche ou en panne)




	public:
		virtual void Panne();				// panne des pompes;
		virtual void VidangeR(R);		// vidange des réservoirs.
};
#endif
