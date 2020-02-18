#include "moteur.h"


Moteur::Moteur():Element(){


    }						// Constructeur avec la pompe par defaut


Moteur::Moteur(int etat):Element(etat) {						// constructeur avec la pompe passées en paramètres

}


void Moteur::description(){
    qDebug()<<"==========================================================/ncet element est un moteur, ";
    Element::description();
    qDebug()<<"Description de sa pompe:";
    this->pompe.description();
     qDebug()<<"Description de on reservoir";
    this->reservoir.description();

}
void Moteur::setReservoirNom(QString nom){
    this->reservoir.setNom(nom);
}

void Moteur::setReservoir(Reservoir R){
    this->reservoir = R;
}
void Moteur::setPompe(Pompe P){
    this->pompe = P;
}
Pompe Moteur::getPompe(){
    return  this->pompe;
}
Reservoir Moteur::getReservoir(){
    return this->reservoir;
}
Moteur::~Moteur(){								// Destructeur

}
