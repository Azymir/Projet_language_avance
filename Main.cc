#include <iostream>
#include <cmath>
#include "Vanne.hh"
#include "Moteur.hh"
#include "Reservoir.hh"
#include "Pompe.hh"
#include "Tableau_bord.hh"

using namespace std;

int main() {

	Vanne *A = new Vanne();
	A->getEtat();
	A->setEtat(1);

    delete A;
	return 0;
	
}
