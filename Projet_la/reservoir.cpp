#include "reservoir.h"

Reservoir::Reservoir():Element()
{
    //~ principale = 0;
    //~ secours = 0;
    //~ fuel = 0;
    //~ cout<<"Construction d'un reservoir par défaut\n";
}						// Constructeur avec la Reservoir par defaut, par defaut tout est à zéro


//~ Reservoir::Reservoir(Pompe principale, Pompe secours, int fuel, int volume) {				// constructeur avec la Reservoir passées en paramètres
    //~ this->principale = 1;
    //~ this->secours = 1;
    //~ this->fuel = fuel;
    //~ this->volume = volume;
//~ }
 Reservoir::Reservoir( int etat, int volume):Element(etat) {				// constructeur avec la Reservoir passées en paramètres

    this->volume = volume;
}

bool Reservoir::getPlein(){return this->plein;}
void Reservoir::setPlein(bool plein){this->plein = plein;}

//~ Reservoir::Reservoir(const Reservoir& r) {								// constructeur avec la Reservoir en paramètre
    //~ this->principale = r.principale;
    //~ this->secours = r.secours;
    //~ this->fuel = r.fuel;
//~ }

//~ Reservoir::Reservoir(const Reservoir& r) {								// constructeur avec la Reservoir en paramètre
    //~ setEtat(r.getEtat());
    //~ this->volume= r.volume;
//~ }

//~ Pompe Reservoir::getone(){											// getter de Pompe 1
    //~ return this->getone;
//~ }

//~ Pompe Reservoir::gettwo(){											// getter de Pompe 2
    //~ return this->gettwo;
//~ }

//~ int Reservoir::getFuel(){												// getter de fuel
    //~ return this->fuel;
//~ }



Reservoir::~Reservoir(){												// Destructeur
    //~ qDebug() << "destruction Reservoir " << endl;
}
void Reservoir::description(){
    qDebug() << "cet objet est un reservoir, ";
    Element::description();
}
