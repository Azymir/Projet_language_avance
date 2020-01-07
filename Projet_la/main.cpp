#include <QApplication>
#include <QDebug>
#include "widget.h"
#include "graphique.h"
#include "tableau_bord.h"
#include "vanne.h"
#include "pompe.h"
#include "moteur.h"
#include "reservoir.h"
#include "tableau_bord.h"
#include "QtGlobal"
#include"identification.h"

int main(int argc, char *argv[])
{

    qDebug()<< "\n----------------------------------------------------\n";



    statut = 'A';
    QApplication a(argc, argv);
    Widget w;
    graphique g;
    //identification i;

   // i.show();
    w.show();
    g.show();

    return a.exec();

}
