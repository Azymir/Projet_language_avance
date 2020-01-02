using namespace std;
#include <iostream>
#include <cmath>
#include "vanne.h"
#include "moteur.h"
#include "reservoir.h"
#include "pompe.h"
#include "tableau_bord.h"

TableauBord::TableauBord(){
    //ce constructeur par défaut va instancier un tableau de bord avec tout les element par défaut comme définit sur l'exemple de Mme Kloul.
    //  1) tout les element sont mis à zéro par defaut par le compilateur c++
    //  2) on initialise ls valeur manuellement pour les objets particuliers
    //
        cout<<"instanciation du tableau de bord\n\n";

       // on instancie les vannes VT12 et VT23 comme fermé
        VT12.setEtat(1);
        VT23.setEtat(1);

       // on instancie les pompes de secours à l'arret
       S1.setEtat(1);
       S2.setEtat(1);
       S3.setEtat(1);

       // on instancie les pompes de depart ouvert
       P1.setEtat(0);
       P2.setEtat(0);
       P3.setEtat(0);






                                    // etat du Vanne 			(ouverture et fermeture des vannes)



                                    // etat du Moteur 		(Moteur en marche ou en panne)

    cout<<"\n\ntableau de bord instancié\n\n";
}


Vanne TableauBord::getV12(){ return this->V12;}
Vanne TableauBord::getV13(){ return this->V13;}
Vanne TableauBord::getV23(){ return this->V23;}
Vanne TableauBord::getVT12(){return this->VT12;}
Vanne TableauBord::getVT23(){return this->VT23;}

Pompe TableauBord::getP1(){return this->P1;}
Pompe TableauBord::getP2(){return this->P2;}
Pompe TableauBord::getP3(){return this->P3;}
Pompe TableauBord::getS1(){return this->S1;}
Pompe TableauBord::getS2(){return this->S2;}
Pompe TableauBord::getS3(){return this->S3;}

Reservoir TableauBord::getR1(){return this->R1;}
Reservoir TableauBord::getR2(){return this->R2;}
Reservoir TableauBord::getR3(){return this->R3;}

Moteur TableauBord::getM1(){return this->M1;}
Moteur TableauBord::getM2(){return this->M2;}
Moteur TableauBord::getM3(){return this->M3;}




void TableauBord::description(){
    cout<<"Description des elements présent\n\n";

    cout<<"Vanne:\n\n";
    cout<<"VT12 ";VT12.description();
    cout<<"VT23 ";VT23.description();
    cout<<"V12 ";V12.description();
    cout<<"V13 ";V13.description();
    cout<<"V23 ";V23.description();

    cout<<"Pompe:\n\n";
    cout<<"P1 ";P1.description();
    cout<<"P2 ";P2.description();
    cout<<"P3 ";P3.description();
    cout<<"S1 ";S1.description();
    cout<<"S2 ";S2.description();
    cout<<"S3 ";S3.description();

    cout<<"Reservoir:\n\n";
    cout<<"R1 ";R1.description();
    cout<<"R2 ";R2.description();
    cout<<"R3 ";R3.description();

    cout<<"Moteur:\n\n";
    cout<<"M1 ";M1.description();
    cout<<"M2 ";M2.description();
    cout<<"M3 ";M3.description();


}
void TableauBord::fermer_VT12(){

    VT12.setEtat(0);
    cout<<"Fermeture de VT12\n";


//    if(R1.getEtat() == 0 and R2.getEtat() == 0)  // si les deux reservoir sont pleins
//    {

//        cout<<"les deux reservoir sont pleins\n";
//    }
//    if(R1.getEtat() == 1 and R2.getEtat() == 0)
//    {
//        cout<<"le reservoir R1 est vide, R2 rempli R1 \n";
//        R1.setEtat(0);
//    }
//    if(R1.getEtat() == 0 and R2.getEtat() == 1)
//    {
//        cout<<"le reservoir R2 est vide, R1 rempli R2\n";
//        R2.setEtat(0);
//    }
//    if(R1.getEtat() == 1 and R2.getEtat() == 1)
//    {
//        cout<<"R1 et R2 sont vides";
//    }

}
void TableauBord::fermer_VT23(){

    VT23.setEtat(0);
    cout<<"Fermeture de VT23\n";


//    if(R3.getEtat() == 0 and R2.getEtat() == 0)  // si les deux reservoir sont pleins
//    {

//        cout<<"les deux reservoir sont pleins\n";
//    }
//    if(R3.getEtat() == 1 and R2.getEtat() == 0)
//    {
//        cout<<"le reservoir R3 est vide, R2 rempli R1 \n";
//        R1.setEtat(0);
//    }
//    if(R3.getEtat() == 0 and R2.getEtat() == 1)
//    {
//        cout<<"le reservoir R2 est vide, R3 rempli R2\n";
//        R2.setEtat(0);
//    }
//    if(R3.getEtat() == 1 and R2.getEtat() == 1)
//    {
//        cout<<"R3 et R2 sont vides";
//    }

}
void TableauBord::ouvrir_VT12(){
    VT12.setEtat(1);
    cout<<"ouverture de la vanne VT12\n";
}
void TableauBord::ouvrir_VT23(){
    VT23.setEtat(1);
    cout<<"ouverture de la vanne VT23\n";
}
TableauBord::~TableauBord(){
    }
