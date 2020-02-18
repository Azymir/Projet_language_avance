#include "reservoir.h"

Reservoir::Reservoir():Element()
{

}						// Constructeur avec la Reservoir par defaut, par defaut tout est à zéro



 Reservoir::Reservoir( int etat, int volume):Element(etat) {				// constructeur avec la Reservoir passées en paramètres

    this->volume = volume;
}

bool Reservoir::getPlein(){return this->plein;}
void Reservoir::setPlein(bool plein){this->plein = plein;}



Reservoir::~Reservoir(){												// Destructeur

}
void Reservoir::description(){
    qDebug() << "cet objet est un reservoir, ";
    Element::description();
}
