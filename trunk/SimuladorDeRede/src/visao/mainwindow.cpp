#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    btComputador = this->ui->btComputador;
    btSwitch = this->ui->btSwitch;
    btHub = this->ui->btHub;
    btRoteador = this->ui->btRoteador;
    btCaboStraight = this->ui->btCaboStraight;
    btCaboCross = this->ui->btCaboCross;
}

MainWindow::~MainWindow()
{
    delete ui;
}
