#ifndef _Tableau_Bord_h
#define _Tableau_Bord_h

class TableauBord
{
	private:
		Vanne V;						//	ouverture et fermeture des vannes;
		Pompe P;						// démarrage et arrêt des pompes.




	public:
		void Panne();				// panne des pompes;
		void VideReservoir	// vidange des réservoirs.
};
#endif
