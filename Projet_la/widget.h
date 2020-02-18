#ifndef WIDGET_H
#define WIDGET_H
#include <QApplication>
#include <QWidget>
#include <QPushButton>
#include <QHBoxLayout>
#include <QDebug>
#include "tableau_bord.h"
#include "QtGlobal"
extern TableauBord I;
extern char statut;



class Widget : public QWidget
{
    Q_OBJECT

public:
    Widget(QWidget *parent = 0);
    ~Widget();
private slots:
    void VT12clic();
    void VT23clic();
    void V12clic();
    void V13clic();
    void V23clic();
    void P12clic();
    void P22clic();
    void P32clic();
    void panne_P11();
    void panne_P12();
    void panne_P21();
    void panne_P22();
    void panne_P31();
    void panne_P32();
    void vidange_R1();
    void vidange_R2();
    void vidange_R3();
    void exo1clic();
    void exo2clic();
    void exo3clic();
    void exo4clic();
    void exo5clic();
    void exo6clic();

    void exoVerif();







    void statutclic();


private:
    QPushButton* VT12;
    QPushButton* VT23;
    QPushButton* P12;
    QPushButton* P22;
    QPushButton* P32;
    QPushButton* V12;
    QPushButton* V13;
    QPushButton* V23;

    QPushButton* p_P11;
    QPushButton* p_P12;
    QPushButton* p_P21;
    QPushButton* p_P22;
    QPushButton* p_P31;
    QPushButton* p_P32;

    QPushButton* v_R1;
    QPushButton* v_R2;
    QPushButton* v_R3;

    QPushButton* exo1;
    QPushButton* exo2;
    QPushButton* exo3;
    QPushButton* exo4;
    QPushButton* exo5;
    QPushButton* exo6;
    QPushButton* exoS;


     QPushButton* exoV;



};

#endif // WIDGET_H
