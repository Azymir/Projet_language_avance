#include <QApplication>
#include "widget.h"
#include "graphique.h"
#include "tableau_bord.h"
int main(int argc, char *argv[])

{
   /* TableauBord I;
    I.description();*/

    QApplication a(argc, argv);
    Widget w;
    //graphique g;

    w.show();
    //g.show();
    // return a.exec();
    a.exec();
}
