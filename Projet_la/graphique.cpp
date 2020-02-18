#include "graphique.h"
#include "widget.h"
#include "QColor"
#include "tableau_bord.h"
extern int varg;


graphique::graphique(QWidget *parent) : QWidget(parent)
{
    setWindowTitle("Système carburant");
}


void graphique::paintEvent(QPaintEvent* e)
{

    Widget w;
    QPainter p(this);
    QBrush BrushBlack (Qt::black);
    QPen PenBlack (Qt::black);
    p.setPen(Qt::black);
    p.setBrush (Qt::black);

    p.drawLine(110,50,260,50);              // Line VT12
    p.drawLine(360,50,510,50);              // Line VT23
    p.drawLine(50,110,50,250);
    p.drawLine(20,200,50,200);
    p.drawLine(20,200,20,300);
    p.drawLine(50,250,310,250);             //V12
    p.drawLine(310,110,310,300);
    p.drawLine(50,150,600,150);             //V13
    p.drawLine(600,150,600,300);
    p.drawLine(310,280,560,280);            //V23
    p.drawLine(560,110,560,280);
    p.drawLine(560,250,600,250);


   I.check_pompe_fonctionnelle();




    //============================================================
    //AFFICHAGE DES RESERVOIRS

    I.check_reservoir(); //en foncon des vannes ouvertes, on va remplir un reservoir avec un autre
     // Tank 1
    if(I.getR1().getEtat() == 0) { p.fillRect(10,10,100,100,Qt::darkMagenta);}
    if(I.getR1().getEtat() == 1) {p.fillRect(10,10,100,100,Qt::red);}

    // Tank 2
     if(I.getR2().getEtat() == 0) {  p.fillRect(260,10,100,100,Qt::darkGreen); }
     if(I.getR2().getEtat() == 1){p.fillRect(260,10,100,100,Qt::red);}

     // Tank 3
     if(I.getR3().getEtat() == 0){p.fillRect(510,10,100,100,Qt::yellow);}
     if(I.getR3().getEtat() == 1){p.fillRect(510,10,100,100,Qt::red);}


    //===============================================================
    // AFFICHAGE DES MOTEURS
     I.check_moteurs();
//    I.provenance_moteurs();



    //I.provenance_moteurs();

     //moteur 1
     if(I.getM1().getEtat() == 0) { p.fillRect(10,300,30,100,Qt::gray);}
    if(I.getM1().getEtat() == 1)  { p.fillRect(10,300,30,100,Qt::red);}

     // Moteur 2
     if(I.getM2().getEtat() == 0) {   p.fillRect(300,300,30,100,Qt::gray);   }
     if(I.getM2().getEtat() == 1) {   p.fillRect(300,300,30,100,Qt::red);   }

      // Moteur 3
     if(I.getM3().getEtat() == 0) {   p.fillRect(590,300,30,100,Qt::gray);   }
     if(I.getM3().getEtat() == 1) { p.fillRect(590,300,30,100,Qt::red);}



     //====================================================
     //AFFICHAGE DES VANNES


    if(I.getVT12().getEtat() == 1){
        p.drawEllipse(160,25,50,50);        //VT12
        p.fillRect(180,25,10,50,Qt::white); // Fermé
    }
    else{
        p.drawEllipse(160,25,50,50);        //VT12
        p.fillRect(162,48,47,10,Qt::white); // Ouvert
    }

    if(I.getVT23().getEtat() == 1){
        p.drawEllipse(410,25,50,50);        //VT23
        p.fillRect(430,25,10,50,Qt::white); // Fermé
    }
    else{
        p.drawEllipse(410,25,50,50);        //VT23
        p.fillRect(412,48,47,10,Qt::white); // Ouvert
    }

    if(I.getV12().getEtat() == 1){
        p.drawEllipse(150,225,50,50);       //V12
        p.fillRect(170,225,10,50,Qt::white);// ouvert
    }
    else{
        p.drawEllipse(150,225,50,50);       //V12
        p.fillRect(152,248,47,10,Qt::white);// fermée
    }

    if(I.getV13().getEtat() == 1){
        p.drawEllipse(350,125,50,50);       //V13
        p.fillRect(370,125,10,50,Qt::white);// ouvert
    }
    else{
        p.drawEllipse(350,125,50,50);       //V13
        p.fillRect(352,148,47,10,Qt::white);// fermée

    }

    if(I.getV23().getEtat() == 1){
        p.drawEllipse(405,255,50,50);       //V23
        p.fillRect(425,255,10,50,Qt::white);// ouvert
    }
    else{
        p.drawEllipse(405,255,50,50);       //V23
        p.fillRect(407,278,47,10,Qt::white);// fermée
    }




    //================================================================
    //AFFICHAGE DES POMPES



    //P11
    if(I.getP1().getFonctionnel()==0) {
        if(I.getP1().getEtat()==0)
        { p.drawEllipse(20,75,25,25); }
        else
        { p.drawRect(5, 75, 15,25);}

    }


    //P12
    if(I.getS1().getFonctionnel()==0) {
        if(I.getS1().getEtat()==0)
        { p.drawEllipse(80,75,25,25);}
        else
        { p.drawRect(80,75,15,25); }

    }


    //P21
    if(I.getP2().getFonctionnel()==0) {
        if(I.getP2().getEtat()==0)
        {  p.drawEllipse(270,75,25,25);}
        else
        { p.drawRect(270,75,15,25);}

    }

    //P22
    if(I.getS2().getFonctionnel()==0) {
        if(I.getS2().getEtat()==0)
        {  p.drawEllipse(330,75,25,25);}
        else
        { p.drawRect(330,75,15,25);}

    }

    //P31
    if(I.getP3().getFonctionnel()==0) {
        if(I.getP3().getEtat()==0)
        {  p.drawEllipse(520,75,25,25);}
        else
        { p.drawRect(520,75,15,25);}

    }
    //P32
    if(I.getS3().getFonctionnel()==0) {
        if(I.getS3().getEtat()==0)
        {  p.drawEllipse(580,75,25,25);}
        else
        { p.drawRect(580,75,15,25);}

    }

    p.drawText(30,30,"Tank 1");             //Tank 1 Text
    p.drawText(280,30,"Tank 2");            //Tank 2 Text
    p.drawText(530,30,"Tank 3");            //Tank 3 Text
    p.drawText(20,75,"P11");                //P11 Text
    p.drawText(80,75,"P12");                //P12 Text
    p.drawText(270,75,"P21");               //P21 Text
    p.drawText(330,75,"P22");               //P22 Text
    p.drawText(520,75,"P31");               //P31 Text
    p.drawText(580,75,"P32");               //P32 Text
    p.drawText(12,350,"M1");                //Moteur 1 Text
    p.drawText(300,350,"M2");               //Moteur 2 Text
    p.drawText(590,350,"M3");               //Moteur 3 Text
    p.drawText(165,20,"VT12");              //VT12 Text
    p.drawText(415,20,"VT23");              //VT23 Text
    p.drawText(160,220,"V12");              //V12 Text
    p.drawText(360,120,"V13");              //V13 Text
    p.drawText(415,250,"V23");              //V23 Text

    QString M1= I.getM1().getReservoir().getNom();
    p.drawText(13,430,M1);

    QString M2= I.getM2().getReservoir().getNom();
    p.drawText(303,430,M2);

    QString M3= I.getM3().getReservoir().getNom();
    p.drawText(593,430,M3);

    QString s = QString::number(GG[0][0]);
    QString Point = "Vos points actuels: " + s;
    p.drawText(10,470,Point);

//    updateGeometry();
//    repaint();
}

void graphique::mousePressEvent(QMouseEvent *event)
{
    repaint();
}


