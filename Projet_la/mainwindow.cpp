#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QMessageBox>
#include "widget.h"
#include "graphique.h"



MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::on_pushButton_clicked()
{
    QString Username = ui->lineEdit->text();        // met dans Username le premier slot de text
    QString Password = ui->lineEdit_2->text();      // met dans Password le deuxieme slot de text

    if(Username ==  "pilot" && Password == "pilot") // pour les pilots
    {
        QMessageBox::information(this, "Login", "Username and password is correct Bienvenu Pilot");
        hide();
        qDebug()<< "\n----------------------------------------------------\n";
        statut = 'P';
        w = new Widget();
        g = new graphique();
        w->show();
        g->show();
    }
    else if (Username ==  "admin" && Password == "admin")   // pour l'admin
    {
        QMessageBox::information(this, "Login", "Username and password is correct Bienvenu Administrateur");
        hide();
        qDebug()<< "\n----------------------------------------------------\n";
        statut = 'A';
        w = new Widget();
        g = new graphique();
        w->show();
        g->show();
    }
    else
    {
        QMessageBox::warning(this,"Login", "Username and password is not correct");
    }

}
