using namespace std;
#include "pompe.h"
#include <iostream>
#include <cmath>

Pompe::Pompe(): Element() {
    this->fonctionnel = 0;
    //~ cout<<"appel du constructeur par défaut pour une pompe\n";
    }					// Constructeur avec la pompe par defaut


Pompe::Pompe(const int etat, const bool fonctionnel):Element(etat){					// constructeur avec la pompe passées en paramètres
    this->fonctionnel = fonctionnel;
}

void Pompe::description(){
    cout<<"cet element est une pompe, ";
    if(this->fonctionnel == 0){ cout<<"elle est fonctionnelle, "<<this->fonctionnel<<", "; }
    if(this->fonctionnel == 1){ cout<<"elle est en panne, "<<this->fonctionnel<<", "; }
    Element::description();

    }

Pompe::~Pompe(){							// Destructeur
    //~ cout << "dectruction de la pompe avec la classe fille" << endl;
}
