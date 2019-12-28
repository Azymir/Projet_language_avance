#ifndef INTERFACE_H
#define INTERFACE_H

#include <QObject>
#include <QWidget>

class interface : public QGraphicsScene
{
    Q_OBJECT
public:
    interface(QWidget *parent);
protected:
    void (QPaintEvent* e);
};

#endif // INTERFACE_H
