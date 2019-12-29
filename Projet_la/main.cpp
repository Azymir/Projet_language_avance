
#include <QApplication>
#include "widget.h"
#include "graphique.h"
int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    Widget w;
    graphique g;

    //w.show();
    g.show();

    return a.exec();
}
