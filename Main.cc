#include <iostream>
#include <cmath>
#include "Vanne.hh"
#include "Moteur.hh"
#include "Reservoir.hh"
#include "Pompe.hh"
using namespace std;

int main() {

	Vanne *A = new Vanne();
	A->getEtat();
    delete A;
	
	cout<<"affiche test1";
	return 0;
}
