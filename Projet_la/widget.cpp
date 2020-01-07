#include "widget.h"
#include "QTextEdit"
TableauBord I;
char statut;  // peut etre 'P' ou 'A', cad pilote ou administrateur

Widget::Widget(QWidget *parent)
    : QWidget(parent)
{// VT12 VT23 P12 P22 P32 V12 V13 V23

    QTextEdit *txt = new QTextEdit();
     txt->setText("Hello, world!");

    if(statut == 'A')
    {
    setWindowTitle("Tableau de bord");
    VT12 = new QPushButton("VT12",this);
    VT23 = new QPushButton("VT23",this);
    P12 = new QPushButton("P12",this);
    P22 = new QPushButton("P22",this);
    P32 = new QPushButton("P32",this);
    V12 = new QPushButton("V12",this);
    V13 = new QPushButton("V13",this);
    V23 = new QPushButton("V23",this);


    p_P11 = new QPushButton("p_P11",this);
    p_P12 = new QPushButton("p_P12",this);
    p_P21 = new QPushButton("p_P21",this);
    p_P22 = new QPushButton("p_P22",this);
    p_P31 = new QPushButton("p_P31",this);
    p_P32 = new QPushButton("p_P32",this);

    v_R1 = new QPushButton("v_R1",this);
    v_R2 = new QPushButton("v_R2",this);
    v_R3 = new QPushButton("v_R3",this);



    //setCentralWidget(VT12);
    QGridLayout *layout = new QGridLayout;
    layout->addWidget(VT12,0,0);
    layout->addWidget(VT23,0,1);
    layout->addWidget(P12,1,0);
    layout->addWidget(P22,1,1);
    layout->addWidget(P32,1,2);
    layout->addWidget(V12,2,0);
    layout->addWidget(V13,2,1);
    layout->addWidget(V23,2,2);

    layout->addWidget(p_P11,5,0);
    layout->addWidget(p_P12,5,1);
    layout->addWidget(p_P21,6,0);
    layout->addWidget(p_P22,6,1);
    layout->addWidget(p_P31,7,0);
    layout->addWidget(p_P32,7,1);

    layout->addWidget(v_R1,8,0);
    layout->addWidget(v_R2,8,1);
    layout->addWidget(v_R3,8,2);


    setLayout(layout);
    connect(VT12,SIGNAL(clicked(bool)),this,SLOT(VT12clic()));
    connect(VT23,SIGNAL(clicked(bool)),this,SLOT(VT23clic()));
    connect(V12,SIGNAL(clicked(bool)),this,SLOT(V12clic()));
    connect(V13,SIGNAL(clicked(bool)),this,SLOT(V13clic()));
    connect(V23,SIGNAL(clicked(bool)),this,SLOT(V23clic()));

    connect(P12,SIGNAL(clicked(bool)),this,SLOT(P12clic()));
    connect(P22,SIGNAL(clicked(bool)),this,SLOT(P22clic()));
    connect(P32,SIGNAL(clicked(bool)),this,SLOT(P32clic()));

    connect(p_P11,SIGNAL(clicked(bool)),this,SLOT(panne_P11()));
    connect(p_P12,SIGNAL(clicked(bool)),this,SLOT(panne_P12()));
    connect(p_P21,SIGNAL(clicked(bool)),this,SLOT(panne_P21()));
    connect(p_P22,SIGNAL(clicked(bool)),this,SLOT(panne_P22()));
    connect(p_P31,SIGNAL(clicked(bool)),this,SLOT(panne_P31()));
    connect(p_P32,SIGNAL(clicked(bool)),this,SLOT(panne_P32()));

    connect(v_R1,SIGNAL(clicked(bool)),this,SLOT(vidange_R1()));
    connect(v_R2,SIGNAL(clicked(bool)),this,SLOT(vidange_R2()));
    connect(v_R3,SIGNAL(clicked(bool)),this,SLOT(vidange_R3()));
    }
    if(statut == 'P')
    {
        setWindowTitle("Tableau de bord");
        VT12 = new QPushButton("VT12",this);
        VT23 = new QPushButton("VT23",this);
        P12 = new QPushButton("P12",this);
        P22 = new QPushButton("P22",this);
        P32 = new QPushButton("P32",this);
        V12 = new QPushButton("V12",this);
        V13 = new QPushButton("V13",this);
        V23 = new QPushButton("V23",this);


        //setCentralWidget(VT12);
        QGridLayout *layout = new QGridLayout;
        layout->addWidget(VT12,0,0);
        layout->addWidget(VT23,0,1);
        layout->addWidget(P12,1,0);
        layout->addWidget(P22,1,1);
        layout->addWidget(P32,1,2);
        layout->addWidget(V12,2,0);
        layout->addWidget(V13,2,1);
        layout->addWidget(V23,2,2);

        setLayout(layout);
        connect(VT12,SIGNAL(clicked(bool)),this,SLOT(VT12clic()));
        connect(VT23,SIGNAL(clicked(bool)),this,SLOT(VT23clic()));
        connect(V12,SIGNAL(clicked(bool)),this,SLOT(V12clic()));
        connect(V13,SIGNAL(clicked(bool)),this,SLOT(V13clic()));
        connect(V23,SIGNAL(clicked(bool)),this,SLOT(V23clic()));

        connect(P12,SIGNAL(clicked(bool)),this,SLOT(P12clic()));
        connect(P22,SIGNAL(clicked(bool)),this,SLOT(P22clic()));
        connect(P32,SIGNAL(clicked(bool)),this,SLOT(P32clic()));
    }
}

Widget::~Widget()
{
    qDebug() << "destruction d'un bouton" << endl;
}

void Widget::VT12clic()
{
    qDebug() << "=========================================\nVous avez cliqué sur le bouton VT12\n" << endl;


    if(I.getVT12().getEtat() == 1)
    {
        I.fermer_VT12();
        return;
    }
    if(I.getVT12().getEtat() == 0)
    {
        I.ouvrir_VT12();
        return;
    }

}
void Widget::VT23clic()
{
    qDebug() << "=========================================\nVous avez cliqué sur le bouton VT23\n" << endl;


    if(I.getVT23().getEtat() == 1)
    {
        I.fermer_VT23();
        return;
    }
    if(I.getVT23().getEtat() == 0)
    {
        I.ouvrir_VT23();
        return;
    }
}
void Widget::V12clic(){
    qDebug() << "=========================================\nVous avez cliqué sur le bouton V12\n" << endl;


    if(I.getV12().getEtat() == 1)
    {
        I.fermer_V12();
        return;
    }
    if(I.getV12().getEtat() == 0)
    {
        I.ouvrir_V12();
        return;
    }
}
void Widget::V13clic(){
    qDebug() << "=========================================\nVous avez cliqué sur le bouton V13\n" << endl;


    if(I.getV13().getEtat() == 1)
    {
        I.fermer_V13();
        return;
    }
    if(I.getV13().getEtat() == 0)
    {
        I.ouvrir_V13();
        return;
    }

}
void Widget::V23clic(){
    qDebug() << "=========================================\nVous avez cliqué sur le bouton V23\n" << endl;


    if(I.getV23().getEtat() == 1)
    {
        I.fermer_V23();
        return;
    }
    if(I.getV23().getEtat() == 0)
    {
        I.ouvrir_V23();
        return;
    }
}
void Widget::P12clic(){
    if(I.getS1().getEtat() == 1)
    {
        I.setEtatS1(0);
        return;
    }
    if(I.getS1().getEtat() ==0)
    {
        I.setEtatS1(1);
        return;
    }
}
void Widget::P22clic()
{
    if(I.getS2().getEtat() == 1)
    {
        I.setEtatS2(0);
        return;
    }
    if(I.getS2().getEtat() ==0)
    {
        I.setEtatS2(1);
        return;
    }
}
void Widget::P32clic()
{
    if(I.getS3().getEtat() == 1)
    {
        I.setEtatS3(0);
        return;
    }
    if(I.getS3().getEtat() ==0)
    {
        I.setEtatS3(1);
        return;
    }
}
void Widget::panne_P11(){
    if(I.getP1().getFonctionnel()==0)
    {
        I.setFonctionnelP1(1);
        return;
    }
    else {I.setFonctionnelP1(0); I.setEtatP1(0);}
}
void Widget::panne_P12(){
    if(I.getS1().getFonctionnel()==0)
    {
        I.setFonctionnelS1(1);
        return;
    }
    else { I.setFonctionnelS1(0); I.setEtatS1(0);}
}
void Widget::panne_P21(){
    if(I.getP2().getFonctionnel()==0)
    {
        I.setFonctionnelP2(1);
        return;
    }
    else{ I.setFonctionnelP2(0); I.setEtatP2(0);}
}
void Widget::panne_P22(){
    if(I.getS2().getFonctionnel()==0)
    {
        I.setFonctionnelS2(1);
        return;
    }
     else{ I.setFonctionnelS2(0); I.setEtatS2(0);}
}
void Widget::panne_P31(){
    if(I.getP3().getFonctionnel()==0)
    {
        I.setFonctionnelP3(1);
        return;
    }
    else{ I.setFonctionnelP3(0); I.setEtatP3(0);}
}
void Widget::panne_P32(){
    if(I.getS3().getFonctionnel()==0)
    {
        I.setFonctionnelS3(1);
        return;
    }
     else{ I.setFonctionnelS3(0); I.setEtatS3(0);}
}

void Widget::vidange_R1(){
    if(I.getR1().getPlein()==0)
    {
        I.setPleinR1(1);
        return;
    }
    if(I.getR1().getPlein()==1) { I.setPleinR1(0); return;}
}
void Widget::vidange_R2(){
    if(I.getR2().getPlein()==0)
    {
        I.setPleinR2(1);
        return;
    }
    if(I.getR2().getPlein()==1)
    {
        I.setPleinR2(0);
        return;
    }
}
void Widget::vidange_R3(){
    if(I.getR3().getPlein()==0)
    {
        I.setPleinR3(1);
        return;
    }
    if(I.getR3().getPlein()==1)
    {
        I.setPleinR3(0);
        return;
    }
}
