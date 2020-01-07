#include "moteur.h"


Moteur::Moteur():Element(){

    //~ qDebug()<<"appel constructeur pour un moteur\n";
    }						// Constructeur avec la pompe par defaut


Moteur::Moteur(int etat):Element(etat) {						// constructeur avec la pompe passées en paramètres
    //~ setEtat(etat);
}

//~ Moteur::Moteur(const Moteur& m) {				// constructeur avec la pompe en paramètre
    //~ this->etat = m.etat;
//~ }

void Moteur::description(){
    qDebug()<<"==========================================================/ncet element est un moteur, ";
    Element::description();
    qDebug()<<"Description de sa pompe:";
    this->pompe.description();
     qDebug()<<"Description de on reservoir";
    this->reservoir.description();

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
    //~ qDebug() << "destruction Moteur " << endl;
}
