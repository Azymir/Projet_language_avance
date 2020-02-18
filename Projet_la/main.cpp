#include "mainwindow.h"
#include <QApplication>
#include "widget.h"
#include "graphique.h"

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    Widget w;
    graphique g;
    MainWindow ww;
    ww.show();



    return a.exec();
}
