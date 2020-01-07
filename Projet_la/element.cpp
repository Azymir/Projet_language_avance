#include "element.h"

Element::Element(){
    this->etat = 0;
    this->nom = "pas de nom";

}						// Constructeur avec la pompe par defaut

Element::Element(int etat) {
    this->etat = etat;
}

QString Element::getNom(){
    return this->nom;
}
void Element::setNom(QString nom){
    this->nom = nom;
}
void Element::description(){
    qDebug()<<"l'état de l'objet est: "<<this->etat<<" et son nom est: "<<this->nom<<"\n";
}

int Element::getEtat(){
    return this->etat;
}
// un element avec un état à 0 est en état de marche, à 1 il est à l'arret
void Element::setEtat(int etat){

    if(etat == 0)
    {
       // qDebug()<<"mise en marche de l'élement (etat 1) ";
        this->etat = etat;
    }
    if(etat == 1)
    {
     //   qDebug()<<"Arret de l'élement ( etat 0) ";
        this->etat = etat;
    }
    if(etat != 1 and etat != 0)
    {
        qDebug()<<"erreur, l'état entré n'est pas reconnu, "<<"valeur affiché: "<<etat<<endl;
    }
}

Element::~Element(){								// Destructeur
    //~ qDebug() << "destruction de l'élèment avec la classe mère\n " << endl;
}
