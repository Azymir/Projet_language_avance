#ifndef ELEMENT_H
#define ELEMENT_H

#include <QApplication>
#include <QDebug>
#include <string.h>
#include <QString>

class Element						// M1 M2 alimenter
{
private:
    int etat;  // tout les elements du projet ont un etat
    QString nom;  // ils contiendrons aussi leur nom, ou leur id. ex: VT12

    public:
    Element();						// Constructeur par defaut
    Element(const int etat);					// constructeur avec un état passé en paramètres
    virtual int getEtat();
    virtual QString getNom();
    virtual void setEtat(int etat);
    virtual void setNom(QString nom);
    virtual void description();
    virtual ~Element();
                            // panne des pompes;

};

#endif // ELEMENT_H
