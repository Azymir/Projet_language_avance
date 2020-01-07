#include "vanne.h"

Vanne::Vanne(): Element(){
    //~ qDebug()<<"créeation d'une vanne\n";

    }										// Constructeur avec la Vanne par defaut


Vanne::Vanne(int etat):Element(etat){									// constructeur avec la Vanne passées en paramètres

}
void Vanne::description(){
    qDebug()<<"cet objet est une vanne,";
    Element::description();
}
Vanne::~Vanne(){												// Destructeur
        //~ qDebug() << "destruction Vanne avec classe fille " << endl;
}
