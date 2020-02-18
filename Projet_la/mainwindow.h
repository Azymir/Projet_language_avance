#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
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

namespace Ui {
class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainWindow(QWidget *parent = 0);
    ~MainWindow();

private slots:
    void on_pushButton_clicked();

private:
    Ui::MainWindow *ui;
    Widget *w;
    graphique *g;
};

#endif // MAINWINDOW_H
