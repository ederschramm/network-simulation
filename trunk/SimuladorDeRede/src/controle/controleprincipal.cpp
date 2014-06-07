#include "controleprincipal.h"
#include "src/controle/controleconfiguracaohost.h"
ControlePrincipal::ControlePrincipal()
{
    this->mainWindow = new MainWindow();
    this->mainWindow->show();
    this->listeners();
}

void ControlePrincipal::listeners(){
    QPushButton *btComputador;
    QPushButton *btSwitch;
    QPushButton *btHub;
    QPushButton *btRoteador;
    QPushButton *btCaboStraight;
    QPushButton *btCaboCross;

    btComputador = this->mainWindow->centralWidget()->findChild<QPushButton*>("btComputador");
    btSwitch = this->mainWindow->centralWidget()->findChild<QPushButton*>("btSwitch");
    btHub = this->mainWindow->centralWidget()->findChild<QPushButton*>("btHub");
    btRoteador = this->mainWindow->centralWidget()->findChild<QPushButton*>("btRoteador");
    btCaboStraight = this->mainWindow->centralWidget()->findChild<QPushButton*>("btCaboStraight");
    btCaboCross = this->mainWindow->centralWidget()->findChild<QPushButton*>("btCaboCross");

    connect(btComputador,SIGNAL(clicked()), this, SLOT(onClickButtonComputador()));
    connect(btSwitch, SIGNAL(clicked()), this, SLOT(onClickButtonSwitch()));
    connect(btHub, SIGNAL(clicked()), this, SLOT(onClickButtonHub()));
    connect(btRoteador, SIGNAL(clicked()), this, SLOT(onClickButtonRoteador()));
    connect(btCaboStraight, SIGNAL(clicked()), this,SLOT(onClickButtonCaboStraight()));
    connect(btCaboCross, SIGNAL(clicked()), this, SLOT(onClickButtonCaboCross()));
}

void ControlePrincipal::onClickButtonHub(){
    QMessageBox message;
    message.setText("Hub");
    message.exec();
}

void ControlePrincipal::onClickButtonComputador (){
    QMessageBox message;
    message.setText("Computador");
    message.exec();
    ConfiguracaoHostDialog* dialog = new ConfiguracaoHostDialog(this->mainWindow);
    dialog->show();
}

void ControlePrincipal::onClickButtonRoteador(){
    QMessageBox message;
    message.setText("Roteador");
    message.exec();
}

void ControlePrincipal::onClickButtonSwitch(){
    QMessageBox message;
    message.setText("Switch");
    message.exec();
}

void ControlePrincipal::onClickButtonCaboCross(){
    QMessageBox message;
    message.setText("Cabo cross");
    message.exec();
}

void ControlePrincipal::onClickButtonCaboStraight(){
    QMessageBox message;
    message.setText("Cabo Straight");
    message.exec();
}
