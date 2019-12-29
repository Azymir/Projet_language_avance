#ifndef GRAPHIQUE_H
#define GRAPHIQUE_H

#include <QObject>
#include <QWidget>
#include <QPainter>
#include <QtGui>
#include <QGraphicsScene>

class graphique : public QWidget
{
    Q_OBJECT
public:
    explicit graphique(QWidget *parent = nullptr);
protected:
    void paintEvent(QPaintEvent* e);
signals:

public slots:
};

#endif // GRAPHIQUE_H
