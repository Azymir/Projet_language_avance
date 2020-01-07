#ifndef GRAPHIQUE_H
#define GRAPHIQUE_H

#include <QObject>
#include <QWidget>
#include <QPainter>
#include <QtGui>
#include <QGraphicsScene>
#include "element.h"
#include "vanne.h"
#include "moteur.h"
#include "reservoir.h"
#include "pompe.h"
#include "tableau_bord.h"

class graphique : public QWidget
{
    Q_OBJECT
public:
    explicit graphique(QWidget *parent = nullptr);
protected:
    void paintEvent(QPaintEvent* e);
    void mousePressEvent(QMouseEvent *event);
signals:

private:
    bool VT12 = false;

public slots:
};

#endif // GRAPHIQUE_H

