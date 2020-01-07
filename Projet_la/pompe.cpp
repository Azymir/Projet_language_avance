#include "pompe.h"


Pompe::Pompe(): Element() {
    this->fonctionnel = 0;
    //~ qDebug()<<"appel du constructeur par défaut pour une pompe\n";
    }					// Constructeur avec la pompe par defaut


Pompe::Pompe(const int etat, const bool fonctionnel):Element(etat){					// constructeur avec la pompe passées en paramètres
    this->fonctionnel = fonctionnel;
}

bool Pompe::getFonctionnel(){
    return this->fonctionnel;
}
void Pompe::setFonctionnel(bool fonctionnel){this->fonctionnel = fonctionnel;}

void Pompe::description(){
    qDebug()<<"cet element est une pompe, ";
    if(this->fonctionnel == 0){ qDebug()<<"elle est fonctionnelle, "; }
    if(this->fonctionnel == 1){ qDebug()<<"elle est en panne, "; }
    Element::description();

    }
void  Pompe::checkFontionnelle(){
    if(this->fonctionnel ==1)
    {
        this->setEtat(1);
    }

}

Pompe::~Pompe(){							// Destructeur
    //~ qDebug() << "dectruction de la pompe avec la classe fille" << endl;
}
