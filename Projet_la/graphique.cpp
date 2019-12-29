#include "graphique.h"

graphique::graphique(QWidget *parent) : QWidget(parent)
{
    setWindowTitle("Système carburant");
}

void graphique::paintEvent(QPaintEvent *e)
{
    QPainter p(this);
    QBrush BrushBlack (Qt::black);
    QPen PenBlack (Qt::black);
    p.setPen(Qt::black);
    p.setBrush (Qt::black);
    bool a = 0;
//    TableauBord TB;
//    qDebug() << TB.VT12.getEtat() << endl;

    p.fillRect(10,10,100,100,Qt::red);      // Tank 1
    p.fillRect(260,10,100,100,Qt::green);   // Tank 2
    p.fillRect(510,10,100,100,Qt::yellow);  // Tank 3

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

    p.fillRect(10,300,20,100,Qt::gray);     // Moteur 1
    p.fillRect(300,300,20,100,Qt::gray);    // Moteur 2
    p.fillRect(590,300,20,100,Qt::gray);    // Moteur 3

    if(!a){
        p.drawEllipse(160,25,50,50);        //VT12
        p.fillRect(180,25,10,50,Qt::white); // Fermé
    }
    else{
        p.drawEllipse(160,25,50,50);        //VT12
        p.fillRect(162,48,47,10,Qt::white); // Ouvert
    }

    if(!a){
        p.drawEllipse(410,25,50,50);        //VT23
        p.fillRect(430,25,10,50,Qt::white); // Fermé
    }
    else{
        p.drawEllipse(410,25,50,50);        //VT23
        p.fillRect(412,48,47,10,Qt::white); // Ouvert
    }

    if(!a){
         p.drawEllipse(20,75,25,25);        //P11
    }
    else{
        p.drawEllipse(80,75,25,25);         //P12
    }

    if(!a){
         p.drawEllipse(270,75,25,25);       //P21
    }
    else{
         p.drawEllipse(330,75,25,25);       //P22
    }

    if(!a){
        p.drawEllipse(520,75,25,25);        //P31
    }
    else{
        p.drawEllipse(580,75,25,25);        //P32
    }

    if(!a){
        p.drawEllipse(150,225,50,50);       //V12
        p.fillRect(170,225,10,50,Qt::white);// Fermé
    }
    else{
        p.drawEllipse(150,225,50,50);       //V12
        p.fillRect(152,248,47,10,Qt::white);// Ouvert
    }

    if(!a){
        p.drawEllipse(350,125,50,50);       //V13
        p.fillRect(370,125,10,50,Qt::white);// Fermé
    }
    else{
        p.drawEllipse(350,125,50,50);       //V13
        p.fillRect(352,148,47,10,Qt::white);// Ouvert

    }

    if(!a){
        p.drawEllipse(405,255,50,50);       //V23
        p.fillRect(425,255,10,50,Qt::white);// Fermé
    }
    else{
        p.drawEllipse(405,255,50,50);       //V23
        p.fillRect(407,278,47,10,Qt::white);// Ouvert
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
    p.drawText(10,350,"M1");                //Moteur 1 Text
    p.drawText(300,350,"M2");               //Moteur 2 Text
    p.drawText(590,350,"M3");               //Moteur 3 Text
    p.drawText(165,20,"VT12");              //VT12 Text
    p.drawText(415,20,"VT23");              //VT23 Text
    p.drawText(160,220,"V12");              //V12 Text
    p.drawText(360,120,"V13");              //V13 Text
    p.drawText(415,250,"V23");              //V23 Text
}

