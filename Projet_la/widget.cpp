#include "widget.h"

Widget::Widget(QWidget *parent)
    : QWidget(parent)
{// VT12 VT23 P12 P22 P32 V12 V13 V23
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
    layout->addWidget(P32,1,3);
    layout->addWidget(V12,2,0);
    layout->addWidget(V13,2,1);
    layout->addWidget(V23,2,3);
    setLayout(layout);

    connect(VT12,SIGNAL(clicked(bool)),this,SLOT(VT12clic()));
    connect(VT23,SIGNAL(clicked(bool)),this,SLOT(VT23clic()));
}

Widget::~Widget()
{
    qDebug() << "destruction d'un bouton" << endl;
}

void Widget::VT12clic()
{
    qDebug() << "Vous avez cliqué sur le bouton VT12" << endl;
}

void Widget::VT23clic()
{
    qDebug() << "Vous avez cliqué sur le bouton VT23" << endl;
}
