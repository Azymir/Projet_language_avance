using namespace std;
#include "element.h"
#include <iostream>
#include <cmath>
Element::Element(){
    this->etat = 0;
    //~ this->nom = "pas de nom";
    //~ cout<<"appel constructeur par defaut d'un element\n";
}						// Constructeur avec la pompe par defaut


Element::Element(int etat) {
    this->etat = etat;
}
int Element::getEtat(){
    return this->etat;


}
//~ char* Element::getNom(){
    //~ return this->nom;
//~ }
void Element::description(){
    cout<<"l'état de l'objet est: "<<this->etat<<"\n";
}
// un element avec un état à 0 est en état de marche, à 1 il est à l'arret
void Element::setEtat(int etat){

    if(etat == 0)
    {
        cout<<"mise en marche de l'élement\n";
        this->etat = etat;
    }
    if(etat == 1)
    {
        cout<<"Arret de l'élement\n";
        this->etat = etat;
    }
    if(etat != 1 and etat != 0)
    {
        cout<<"erreur, l'état entré n'est pas reconnu, "<<"valeur affiché: "<<etat<<endl;
    }
}
//~ void Element::setNom(char* nom){
    //~ this->nom = nom;
//~ }
Element::~Element(){								// Destructeur
    //~ cout << "destruction de l'élèment avec la classe mère\n " << endl;
}
