#ifndef WIDGET_H
#define WIDGET_H

#include <QWidget>
#include <QPushButton>
#include <QHBoxLayout>
#include <QDebug>

class Widget : public QWidget
{
    Q_OBJECT

public:
    Widget(QWidget *parent = 0);
    ~Widget();
private:
    QPushButton* VT12;
    QPushButton* VT23;
    QPushButton* P12;
    QPushButton* P22;
    QPushButton* P32;
    QPushButton* V12;
    QPushButton* V13;
    QPushButton* V23;
};

#endif // WIDGET_H
