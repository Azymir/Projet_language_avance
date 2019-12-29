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
//    QPainter t1(this);
//    QPainter t2(this);
//    QPainter t3(this);
    p.fillRect(10 ,10,this->width()/6,this->height()/6,Qt::red);
    p.fillRect(this->width()/2-this->width()/12 ,10,this->width()/6,this->height()/6,Qt::green);
    p.fillRect(this->width()-this->width()/6 -10 ,10,this->width()/6,this->height()/6,Qt::yellow);

    p.drawLine(this->width()/6+10,this->height()/12,this->width()/2-this->width()/12,this->height()/12);
    (*this).addEcllipse(230,20,30,30,BrushBlack,PenBlack);
//    p.drawEllipse(this->width()/4,20,this->height()/9,this->height()/9);
    p.drawLine(this->width()/2+this->width()/12,this->height()/12,this->width()-this->width()/6 -10,this->height()/12);
}
