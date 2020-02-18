#include "tableau_bord.h"

int GG[2][8];

TableauBord::TableauBord(){
    //ce constructeur par défaut va instancier un tableau de bord avec tout les element par défaut comme définit sur l'exemple de Mme Kloul.
    //  1) tout les element sont mis à zéro par defaut par le compilateur c++
    //  2) on initialise ls valeur manuellement pour les objets particuliers
    //
        qDebug()<<"instanciation du tableau de bord\n";

       // on instancie les vannes VT12 et VT23 comme fermé
              VT12.setEtat(1);
              VT23.setEtat(1);
              V12.setEtat(1);
              V13.setEtat(1);
              V23.setEtat(1);


               // on instancie les pompes de secours à l'arret
              S1.setEtat(1);
              S2.setEtat(1);
              S3.setEtat(1);


//                on va instancier le nom de chacun des elements de l'interface.
               VT12.setNom("VT12");
               VT23.setNom("VT23");
               V13.setNom("V13");
               V23.setNom("V23");
               V12.setNom("V12");

               R1.setNom("R1");
               R2.setNom("R2");
               R3.setNom("R3");

               P1.setNom("P11");
               P2.setNom("P21");
               P3.setNom("P31");
               S1.setNom("P12");
               S2.setNom("P22");
               S3.setNom("P32");


              M1.setNom("M1"); M1.setPompe(P1); M1.setReservoir(R1);
              M2.setNom("M2"); M2.setPompe(P2); M2.setReservoir(R2);
              M3.setNom("M3"); M3.setPompe(P3); M3.setReservoir(R3);



                                    // etat du Vanne 			(ouverture et fermeture des vannes)



                                    // etat du Moteur 		(Moteur en marche ou en panne)

    qDebug()<<"\ntableau de bord instancié";
}
//================================================================
//Tout les getters du systeme
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

//================================================================
//tout les setters du system pour l'attribut etat
void TableauBord::setEtatV12(int etat){this->V12.setEtat(etat);}
void TableauBord::setEtatV13(int etat){this->V13.setEtat(etat);}
void TableauBord::setEtatV23(int etat){this->V23.setEtat(etat);}
void TableauBord::setEtatVT12(int etat){this->VT12.setEtat(etat);}
void TableauBord::setEtatVT23(int etat){this->VT23.setEtat(etat);}
void TableauBord::setEtatP1(int etat){this->P1.setEtat(etat);}
void TableauBord::setEtatP2(int etat){this->P2.setEtat(etat);}
void TableauBord::setEtatP3(int etat){this->P3.setEtat(etat);}
void TableauBord::setEtatS1(int etat){this->S1.setEtat(etat);}
void TableauBord::setEtatS2(int etat){this->S2.setEtat(etat);}
void TableauBord::setEtatS3(int etat){this->S3.setEtat(etat);}
void TableauBord::setEtatR1(int etat){this->R1.setEtat(etat);}
void TableauBord::setEtatR2(int etat){this->R2.setEtat(etat);}
void TableauBord::setEtatR3(int etat){this->R3.setEtat(etat);}
void TableauBord::setEtatM1(int etat){this->M1.setEtat(etat);}
void TableauBord::setEtatM2(int etat){this->M2.setEtat(etat);}
void TableauBord::setEtatM3(int etat){this->M3.setEtat(etat);}

//================================================================
//tout les setters du system pour les attributs de panne
void TableauBord::setFonctionnelP1(bool fonctionnel){this->P1.setFonctionnel(fonctionnel);};
void TableauBord::setFonctionnelP2(bool fonctionnel){this->P2.setFonctionnel(fonctionnel);};
void TableauBord::setFonctionnelP3(bool fonctionnel){this->P3.setFonctionnel(fonctionnel);};
void TableauBord::setFonctionnelS1(bool fonctionnel){this->S1.setFonctionnel(fonctionnel);};
void TableauBord::setFonctionnelS2(bool fonctionnel){this->S2.setFonctionnel(fonctionnel);};
void TableauBord::setFonctionnelS3(bool fonctionnel){this->S3.setFonctionnel(fonctionnel);};
void TableauBord::setPleinR1(bool plein){this->R1.setPlein(plein);};
void TableauBord::setPleinR2(bool plein){this->R2.setPlein(plein);};
void TableauBord::setPleinR3(bool plein){this->R3.setPlein(plein);};

bool TableauBord::check_Reservoir_Pompe(Reservoir R)
{
    // cette methode va vérifier si un reservoie entré possede des pompe fonctionelles ou pas. Renvoie false si il ne peut plus acheminer le carburant depusi ses prompre pompe.
    // Renvoie vrai sinon
    Pompe P,S;

    if(R.getNom() == "R1")   // si le reservoir entré est R1, on vérifie si R1 a des pompes qui ne sont pas en panne.
    {
        P = this->P1;
        S = this -> S1;
    }
    if(R.getNom() == "R2")   // si le reservoir entré est R1, on vérifie si R1 a des pompes qui ne sont pas en panne.
    {
        P = this->P2;
        S = this -> S2;
    }
    if(R.getNom() == "R3")   // si le reservoir entré est R1, on vérifie si R1 a des pompes qui ne sont pas en panne.
    {
        P = this->P3;
        S = this -> S3;
    }


        if(

           (P.getFonctionnel() == false and S.getFonctionnel() == true)
                                        or
           (P.getFonctionnel() == true and S.getFonctionnel() == false)
                                        or
           (P.getFonctionnel() == true and S.getFonctionnel() == true)

           )
        {
            return true;
        }


        else if(P1.getFonctionnel() == false and S1.getFonctionnel() == false)
        {
            return false;

        }



    return false;
}
void TableauBord::description()
{
    qDebug()<<"Description des elements présen\nt";
    qDebug()<<"Vanne:\n";
    qDebug()<<"VT12 ";VT12.description();
    qDebug()<<"VT23 ";VT23.description();
    qDebug()<<"V12 ";V12.description();
    qDebug()<<"V13 ";V13.description();
    qDebug()<<"V23 ";V23.description();

    qDebug()<<"Pompe:\n";
    qDebug()<<"P1 ";P1.description();
    qDebug()<<"P2 ";P2.description();
    qDebug()<<"P3 ";P3.description();
    qDebug()<<"S1 ";S1.description();
    qDebug()<<"S2 ";S2.description();
    qDebug()<<"S3 ";S3.description();

    qDebug()<<"Reservoir:\n\n";
    qDebug()<<"R1 ";R1.description();
    qDebug()<<"R2 ";R2.description();
    qDebug()<<"R3 ";R3.description();

    qDebug()<<"Moteur:\n\n";
    qDebug()<<"M1 ";M1.description();
    qDebug()<<"M2 ";M2.description();
    qDebug()<<"M3 ";M3.description();


}
void TableauBord::fermer_VT12(){
    VT12.setEtat(0);
    qDebug()<<"Fermeture de VT12\n";
}
void TableauBord::fermer_VT23(){
    VT23.setEtat(0);
    qDebug()<<"Fermeture de VT23\n";
}
void TableauBord::ouvrir_VT12(){
    VT12.setEtat(1);
    qDebug()<<"ouverture de la vanne VT12\n";
}
void TableauBord::ouvrir_VT23(){
    VT23.setEtat(1);
    qDebug()<<"ouverture de la vanne VT23\n";
}
void TableauBord::fermer_V12(){
    V12.setEtat(0);
    qDebug()<<"Fermeture de V12\n";
}
void TableauBord::fermer_V13(){
    V13.setEtat(0);
    qDebug()<<"Fermeture de V13\n";
}
void TableauBord::fermer_V23(){
    V23.setEtat(0);
    qDebug()<<"Fermeture de V23\n";
}
void TableauBord::ouvrir_V12(){
    V12.setEtat(1);
    qDebug()<<"ouverture de la vanne V12\n";
}
void TableauBord::ouvrir_V13(){
    V13.setEtat(1);
    qDebug()<<"ouverture de la vanne V13\n";
}
void TableauBord::ouvrir_V23(){
    V23.setEtat(1);
    qDebug()<<"ouverture de la vanne V23\n";
}
void TableauBord::check_reservoir(){
    if(R1.getPlein()==0) R1.setEtat(0);
    if(R2.getPlein()==0) R2.setEtat(0);
    if(R3.getPlein()==0) R3.setEtat(0);

    //Vefifie pour R1 et R2 si l'un remplie l'autre, à condition que VT12 soit fermée:
    if(VT12.getEtat()==0)
    {
        if(R1.getPlein() == 1 and R2.getPlein() == 0 )
        {

            R1.setEtat(0);
        }
        if(R1.getPlein() == 0 and R2.getPlein() == 1)
        {

            R2.setEtat(0);
        }

    }
    if(VT12.getEtat() ==1 )
    {
        if(R1.getPlein()==1)
        {
            R1.setEtat(1);
        }
    }

    if(VT23.getEtat()==0)
    {
        if(R2.getPlein() == 1 and R3.getPlein() == 0 )
        {

            R2.setEtat(0);
        }
        if(R2.getPlein() == 0 and R3.getPlein() == 1 )
        {

            R3.setEtat(0);
        }
    }
    if(VT23.getEtat()==1)
    {
        if(R3.getPlein()==1)
        {
            R3.setEtat(1);
        }
    }
    if(VT23.getEtat()==0 && VT12.getEtat()==0)
    {
        if(R1.getPlein()==1 && R2.getPlein()==1 && R3.getPlein()==0)
        {
            R1.setEtat(0);
            R2.setEtat(0);
        }
        if(R1.getPlein()==1 && R2.getPlein()==0 && R3.getPlein()==1)
        {
            R1.setEtat(0);
            R3.setEtat(0);
        }
        if(R1.getPlein()==0 && R2.getPlein()==1 && R3.getPlein()==1)
        {
            R2.setEtat(0);
            R3.setEtat(0);
        }
    }
    if(VT23.getEtat()==1 && VT12.getEtat()==1)
    {
        if(R2.getPlein()==1)
        {
            R2.setEtat(1);
        }

    }
    if(VT12.getEtat()==1 && VT23.getEtat()==0)
    {
        if(R2.getPlein()==1 && R3.getPlein()==1)
        {
            R2.setEtat(1);
            R3.setEtat(1);
        }
    }
    if(VT12.getEtat()==0 && VT23.getEtat()==1)
    {
        if(R1.getPlein()==1 && R2.getPlein()==1)
        {
            R1.setEtat(1);
            R2.setEtat(1);
        }

    }
    if(R1.getPlein()==1 && R2.getPlein()==1 && R3.getPlein()==1)
    {
        R1.setEtat(1);
        R2.setEtat(1);
        R3.setEtat(1);
    }

}
void TableauBord::provenance_moteurs()
{
    this->provenance_M1();
    this->provenance_M2();
    this->provenance_M3();
}
void TableauBord::provenance_M1(){

        if(P1.getEtat()==1 && S1.getEtat() && V12.getEtat()==1 && V13.getEtat()==1)
        {
            M1.setReservoir(R1);
            M1.setPompe(S1);
        }

    }
void TableauBord::provenance_M2(){

       if(P2.getEtat()==0 && S2.getEtat()== 1)
       {
           M2.setReservoir(R2);
           M2.setPompe(P2);
       }
       if(P2.getEtat()==1 && S2.getEtat() && V12.getEtat()==1 && V13.getEtat()==1 && V23.getEtat()==1)
       {
           M2.setReservoir(R2);
           M2.setPompe(S2);
       }
       if(V12.getEtat() && V23.getEtat()!=0 && S1.getEtat() && P2.getEtat() == 1 && S2.getEtat()==1)
       {
           qDebug() << "M2 alimenter par la pompe secondaire P12 du reservoir R1";
           M2.setReservoir(R1);
           M2.setPompe(S2);
       }
       if(V23.getEtat() && V12.getEtat()==1 && V23.getEtat()==1)
           {

               if(S3.getEtat() &&  P3.getEtat()!= 1 && P2.getEtat() == 1 && S2.getEtat()==1 )   // je test si pompe 32 fonctionenel
               {
                       qDebug ()<< "M2 alimenter par la pompe secondaire P32 du reservoir R3";
                       M2.setReservoir(R3);
                       M2.setPompe(S3);
               }

           }
       if(S1.getEtat()==0 && V12.getEtat()==0 && P1.getEtat()==0 && V13.getEtat()==1&& R1.getEtat()==0)//si tout ca ok,, on alimente M1
       {

           M2.setReservoir(R1);
           M2.setPompe(S1);
       }



}
void TableauBord::provenance_M3(){


   if(P3.getEtat())
    {
        M3.setReservoir(R3);
        M3.setPompe(P3);
    }
   else  if(P3.getEtat()==1 && S3.getEtat() && V13.getEtat()==1 && V23.getEtat()==1)
    {
        M3.setReservoir(R3);
        M3.setPompe(S3);
    }
    else if(P3.getEtat()==1 && S3.getEtat()==1 && V13.getEtat() && V23.getEtat()==1 && S1.getEtat())
    {
        M3.setReservoir(R1);
        M3.setPompe(S1);
    }
    else if(P3.getEtat()==1 && S3.getEtat()==1 && V13.getEtat()==1 && V23.getEtat()==0 )
    {
        M3.setReservoir(R2);
        M3.setPompe(S2);
    }

    if(R3.getEtat()==1 && V13.getEtat()==0 && P1.getEtat()==0 && S1.getEtat()==0)
    {

        M3.setReservoir(R1);
        M3.setPompe(S1);
    }
}
void TableauBord::check_moteurs(){

    this->check_M1();
    this->check_M2();
    this->check_M3();

}

void TableauBord::check_M1(){
    if      ((P1.getEtat() == 1 && S1.getEtat()==1 )   )
    {

        M1.setEtat(1);
        M1.setReservoirNom("Null");
        qDebug()<<"Etat du moteur M1 mis en panne, pas de pompe en état (check_M1())";
    }
    if(P1.getEtat()==1 && S1.getEtat()==0)
    {
        M1.setEtat(0);
        M1.setReservoir(R1);
        M1.setPompe(S1);
    }
    if(P1.getEtat()==0 && S1.getEtat()==1)
    {
        M1.setEtat(0);
        M1.setReservoir(R1);
        M1.setPompe(P1);
    }
    if(P1.getEtat() ==0 && S1.getEtat()==0)
    {
        M1.setEtat(0);
        M1.setReservoir(R1);
        M1.setPompe(P1);
    }
    if(M1.getReservoir().getNom()=="R1" && R1.getEtat()==1)  {M1.setEtat(1); M1.setReservoirNom("Null");}
    if(M1.getReservoir().getNom()=="R2" && R2.getEtat()==1) {M1.setEtat(1); M1.setReservoirNom("Null");}
    if(M1.getReservoir().getNom()=="R3" && R3.getEtat()==1) {M1.setEtat(1); M1.setReservoirNom("Null");}

    QString value = "null";
    if(M1.getEtat()==1)
    {

        M1.setReservoirNom(value);
    }

}
void TableauBord::check_M2(){

    if(P2.getEtat()==0 && V12.getEtat()==1 && V13.getEtat()==1 && S2.getEtat()==1 && R2.getEtat()==0)
    {
        M2.setEtat(0);
        M2.setReservoir(R2);
        M2.setPompe(P2);
    }
    if(P2.getEtat()==1 && V12.getEtat()==1  && S2.getEtat()==0 && R2.getEtat()==0)
    {
        M2.setEtat(0);
        M2.setReservoir(R2);
        M2.setPompe(S2);
    }
    if(P2.getEtat()==0 && S2.getEtat()==0 && V12.getEtat()==1 && V13.getEtat()==1 && V23.getEtat()==1 )
    {
       M2.setEtat(0);
       M2.setReservoir(R2);
       M2.setPompe(P2);
    }

    if(P2.getEtat() == 1 && S2.getEtat()==1  && V12.getEtat()==1 && V13.getEtat()==1)
    {
        M2.setEtat(1);

    }
    if(P2.getEtat() == 1 && S2.getEtat()==1  && V13.getEtat()==0 && V23.getEtat()==0)
    {
        M2.setEtat(0);
        M2.setReservoir(R3);

    }
    if(P2.getEtat() == 1 && S2.getEtat()==1  && V12.getEtat()==1 && V13.getEtat()==0)
    {
        M2.setEtat(1);

    }
    if(P2.getEtat() == 1 && S2.getEtat()==1  && V12.getEtat()==1 && V23.getEtat()==0)
    {
        M2.setEtat(1);

    }
    if(P2.getEtat() == 1 && S2.getEtat()==1  && V12.getEtat()==1 && V13.getEtat()==1 && V23.getEtat()==1)
    {
        M2.setEtat(1);

    }
    if(P2.getEtat() == 1 && S2.getEtat()==0  && V12.getEtat()==1 && V13.getEtat()==1 && V23.getEtat()==1 && R2.getEtat()==1)
    {
        M2.setEtat(1);

    }
    if(P2.getEtat() == 0 && S2.getEtat()==1  && V12.getEtat()==1 && V13.getEtat()==1 && V23.getEtat()==1 && R2.getEtat()==1)
    {
        M2.setEtat(1);

    }
    if(P2.getEtat() == 1 && S2.getEtat()==1  && V12.getEtat()==0 && V13.getEtat()==1)
    {
        M2.setEtat(1);

    }
    if(S1.getEtat()==0 && V12.getEtat()==0 && P1.getEtat()==0 && V13.getEtat()==1&& R1.getEtat()==0)//si tout ca ok,, on alimente M1
    {
        M2.setEtat(0);
        M2.setReservoirNom("R1");

    }
    if(S1.getEtat()==0 && V12.getEtat()==0 && P1.getEtat()==0 && V13.getEtat()==1 && R1.getEtat()==1)//si tout ca ok,, on alimente M1
    {
        M2.setEtat(1);

    }
    if(S3.getEtat()==0 && V23.getEtat()==0 && P3.getEtat()==0 )
    {  //on alimente M2 avec R3 depuis S3
        M2.setEtat(0);
        M2.setReservoir(R3);
        M2.setPompe(S3);
    }
    if(S2.getEtat()==1 && P2.getEtat()==1 && V12.getEtat()==0 && V23.getEtat()==1)
    {
        M2.setEtat(1);
    }
    if(S3.getEtat()==0 && V23.getEtat()==0 && P3.getEtat()==0 && V13.getEtat()==1 && R3.getEtat()==1)
    {  //si le reservoir R3 qui doit alimenté M2 est vide, le moteur s'arrete
        M2.setEtat(1);

    }
    if(R2.getEtat()==1 && V12.getEtat()==1 && V13.getNom()==1 && V23.getEtat()==1)
    {
        M2.setEtat(1);

    }
    if(P2.getEtat()==1 && S2.getEtat()==1 && V12.getEtat()==0 && P1.getEtat()==1 && S1.getEtat()==1)
    {
        M2.setEtat(1);

    }
    if(P2.getEtat()==1 && S2.getEtat()==1 && V12.getEtat()==0 && P1.getEtat()==0 && S1.getEtat()==1 && V13.getEtat()==1 && V23.getEtat()==1)
    {
        M2.setEtat(1);

    }
    if(P2.getEtat()==1 && S2.getEtat()==0 && V13.getEtat()==1 && V23.getEtat()==1)
    {
        M2.setEtat(0);
        M2.setReservoir(R2);
        M2.setPompe(S2);

    }
    if(V12.getEtat()==0 && V23.getEtat()==0 && P3.getEtat()==0 && S3.getEtat()==1 && S1.getEtat()==1 && P2.getEtat()==1 && S2.getEtat()==1)
    {
        M2.setEtat(1);
    }
    if(P1.getEtat()==0 && S1.getEtat()==1 && V12.getEtat()==0 && V23.getEtat()==1 && S2.getEtat()==0 && R2.getEtat()==0)
    {
        M2.setEtat(0);
        M2.setReservoir(R2);
    }
    if(M2.getReservoir().getNom()=="R1" && R1.getEtat()==1){ M2.setEtat(1); M2.setReservoirNom("Null");}
    if(M2.getReservoir().getNom()=="R2" && R2.getEtat()==1) { M2.setEtat(1); M2.setReservoirNom("Null");}
    if(M2.getReservoir().getNom()=="R3" && R3.getEtat()==1) { M2.setEtat(1); M2.setReservoirNom("Null");}


    if(M2.getEtat()==1)
    {

        M2.setReservoirNom("Null");
    }
}
void TableauBord::check_M3()
{
    //cas ou des pompes sont en pannes etc
    if(P3.getEtat()==0 && V13.getEtat()==1 && V23.getEtat()==1 && S3.getEtat()==1 && R3.getEtat()==0)
    {
        M3.setEtat(0);
        M3.setReservoir(R3);
    }
    if(P3.getEtat()==1 && V13.getEtat()==1 && V23.getEtat()==1 && S3.getEtat()==0 && R3.getEtat()==0)
    {
        M3.setEtat(0);
        M3.setReservoir(R3);
    }
    if(P3.getEtat()==0 && S3.getEtat()==1 && V23.getEtat()==1 && V13.getEtat()==0)
    {
        M3.setEtat(0);
        M3.setReservoir(R3);
    }
    if(P3.getEtat()==1 && V13.getEtat()==1 && S3.getEtat()==1 && R3.getEtat()==1)
    {
        M3.setEtat(1);
    }
    if(P3.getEtat()==1 && S3.getEtat()==1 && V13.getEtat()==1 && V23.getEtat()==1)
    {
        M3.setEtat(1);
    }
    if(P3.getEtat()==0 && V13.getEtat()==1 && V23.getEtat()==1 && S3.getEtat()==0 && R3.getEtat()==0)
    {
        M3.setEtat(0);
        M3.setReservoir(R3);
    }
    if(P3.getEtat()==0 && V13.getEtat()==1  && S3.getEtat()==0 && R3.getEtat()==1)
    {
        M3.setEtat(1);
    }
    if(P3.getEtat()==0 && V13.getEtat()==1  && S3.getEtat()==1 && R3.getEtat()==1)
    {
        M3.setEtat(1);
    }
    if(P3.getEtat()==1 && V13.getEtat()==1  && S3.getEtat()==0 && R3.getEtat()==1)
    {
        M3.setEtat(1);
    }

    if(P3.getEtat()==0 && V13.getEtat()==1 && V23.getEtat()==0 && S3.getEtat()==0 && R3.getEtat()==0)
    {
        M3.setEtat(0);
        M3.setReservoir(R3);
    }
    if(P3.getEtat() == 1 && S3.getEtat()==1  && V13.getEtat()==1 && V23.getEtat()==1)
    {
        M3.setEtat(1);

    }
    if(S1.getEtat()==0 && V13.getEtat()==0 && P1.getEtat()==0 && V23.getEtat()==1 && R1.getEtat()==0)//si tout ca ok,, on alimente M1
    {
        M3.setEtat(0);
        M3.setReservoir(R1);
    }
    if(S1.getEtat()==0 && V13.getEtat()==0 && P1.getEtat()==0 && V23.getEtat()==1 && R1.getEtat()==1)//si tout ca ok,, on alimente M1
    {
        M3.setEtat(1);

    }
    if(S2.getEtat()==0 && V13.getEtat()==0 && P2.getEtat()==0 && V23.getEtat()==1)
    {  //on alimente M2 avec R3 depuis S3
        M3.setEtat(0);
        M3.setReservoir(R2);
    }
    if(S2.getEtat()==0 && V13.getEtat()==0 && P2.getEtat()==0 && V23.getEtat()==1 && R2.getEtat()==1)
    {  //on alimente M2 avec R3 depuis S3
        M3.setEtat(1);

    }
    if(P2.getEtat()==1 && S2.getEtat()==0 && V13.getEtat()==0 && V12.getEtat()==1 && V23.getEtat()==1 && P3.getEtat()==1 && S3.getEtat()==1)
    {
        M3.setEtat(1);

    }
    if(R3.getEtat()==1 && V13.getEtat()==0 && P1.getEtat()==0 && S1.getEtat()==0)
    {
        M3.setEtat(0);
        M3.setReservoir(R1);

    }
    if( R3.getEtat()==1 && V12.getEtat()==1 && V13.getNom()==1 && V23.getEtat()==1)
    {
        M3.setEtat(1);

    }
    if(M3.getReservoir().getNom()=="R1" && R1.getEtat()==1) {M3.setEtat(1); M3.setReservoirNom("NUll");}
    if(M3.getReservoir().getNom()=="R2" && R2.getEtat()==1) {M3.setEtat(1); M3.setReservoirNom("NUll");}
    if(M3.getReservoir().getNom()=="R3" && R3.getEtat()==1) {M3.setEtat(1); M3.setReservoirNom("NUll");}


    if(M3.getEtat()==1)
    {

        M3.setReservoirNom("Null");
    }
    //cas des reservoirs en pannes
}

void TableauBord::associe_PompeEtMoteur(){

}
void TableauBord::check_pompe_fonctionnelle(){
   P1.checkFontionnelle();
   P2.checkFontionnelle();
   P3.checkFontionnelle();
   S1.checkFontionnelle();
   S2.checkFontionnelle();
   S3.checkFontionnelle();

}

void TableauBord::exo1()
{
    GG[0][1]=1;
    //Exercice 1
    qDebug()<<"Simulation de panne\n";

    P2.setFonctionnel(1);

    GG[1][1] =0;







    qDebug()<<"\ntStart";
}

void TableauBord::exo2()
{
    //Exercice 2
     GG[0][1]=2;
    qDebug()<<"Simulation de panne\n";

    P2.setFonctionnel(1);
    P3.setFonctionnel(1);
    R2.setPlein(1);

    GG[1][2] =0;






    qDebug()<<"\ntStart";
}

void TableauBord::exo3()
{
   //Exercice 3
     GG[0][1]=3;
    qDebug()<<"Simulation de panne\n";


    V12.setEtat(0);
    P2.setFonctionnel(1);
    P3.setFonctionnel(1);
    S3.setFonctionnel(1);
    R1.setPlein(1);

    GG[1][3] =0;


    qDebug()<<"\ntStart";
}
void TableauBord::exo4()
{
 GG[0][1]=4;
    qDebug()<<"Simulation de panne\n";

    P1.setFonctionnel(1);
    P1.setFonctionnel(1);
    S3.setFonctionnel(1);
    R3.setPlein(1);

    GG[1][4] =0;


    qDebug()<<"\ntStart";
}
void TableauBord::exo5()
{
 GG[0][1]=5;
    qDebug()<<"Simulation de panne\n";
    S1.setFonctionnel(1);
    R1.setPlein(1);
    V13.setEtat(0);
    P2.setFonctionnel(1);
    R3.setPlein(1);

    GG[1][5] =0;


    qDebug()<<"\ntStart";
}
void TableauBord::exo6()
{
    GG[0][1]=6;
    qDebug()<<"Simulation de panne\n";
    R2.setPlein(1);
    R3.setPlein(1);
    P1.setFonctionnel(1);
    P2.setFonctionnel(1);
    S2.setFonctionnel(1);

    GG[1][6] =0;

    qDebug()<<"\ntStart";
}


bool TableauBord::FinExo(int x)
{
    if(M1.getEtat() == 0 && M2.getEtat() == 0 && M3.getEtat() == 0)
    {
        qDebug() << "Bravo vous avez reussi l'exercice";
        GG[1][x]=1;
        GG[0][0] = GG[1][1] + GG[1][2] + GG[1][3] + GG[1][4] + GG[1][5] + GG[1][6];
        return 1;

    }

    return 0;

}
void TableauBord::initialise()
{
    P1.setEtat(0);  P1.setFonctionnel(0);
    P2.setEtat(0);  P2.setFonctionnel(0);
    P3.setEtat(0);  P3.setFonctionnel(0);
    S1.setEtat(1);  S1.setFonctionnel(0);
    S2.setEtat(1);  S2.setFonctionnel(0);
    S3.setEtat(1);  S3.setFonctionnel(0);

    V12.setEtat(1);
    V13.setEtat(1);
    V23.setEtat(1);
    VT12.setEtat(1);
    VT23.setEtat(1);

    M1.setEtat(0);
    M2.setEtat(0);
    M3.setEtat(0);

    R1.setPlein(0); R1.setEtat(0);
    R2.setPlein(0); R2.setEtat(0);
    R3.setPlein(0); R3.setEtat(0);



}
TableauBord::~TableauBord(){}
