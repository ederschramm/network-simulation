#include "controleprincipal.h"
#include "src/controle/controleconfiguracaohost.h"
#include "src/controle/controleconfiguracaohub.h"
#include "src/controle/controleconfiguracaoroteador.h"
#include "src/controle/controleconfiguracaoswitch.h"
#include <QDebug>
ControlePrincipal::ControlePrincipal()
{
    qDebug() << "ControlePrincipal::ControlePrincipal()";
    this->mainWindow = new MainWindow();
    this->mainWindow->show();
    this->listeners();
}

void ControlePrincipal::listeners(){
    qDebug()<<"ControlePrincipal::listeners()";
    connect(this->mainWindow->btComputador,SIGNAL(clicked()), this, SLOT(onClickButtonComputador()));
    connect(this->mainWindow->btSwitch, SIGNAL(clicked()), this, SLOT(onClickButtonSwitch()));
    connect(this->mainWindow->btHub, SIGNAL(clicked()), this, SLOT(onClickButtonHub()));
    connect(this->mainWindow->btRoteador, SIGNAL(clicked()), this, SLOT(onClickButtonRoteador()));
    connect(this->mainWindow->btCaboStraight, SIGNAL(clicked()), this,SLOT(onClickButtonCaboStraight()));
    connect(this->mainWindow->btCaboCross, SIGNAL(clicked()), this, SLOT(onClickButtonCaboCross()));
}

void ControlePrincipal::onClickButtonHub(){
    qDebug()<<"ControlePrincipal::onClickButtonHub()";
    ControleConfiguracaoHub *controleHub = new ControleConfiguracaoHub(this->mainWindow);
    controleHub->show();
}

void ControlePrincipal::onClickButtonComputador(){
    qDebug()<<"ControlePrincipal::onClickButtonComputador()";
    //ControleConfiguracaoHost *controleDialog = new ControleConfiguracaoHost(this->mainWindow);
    //controleDialog->show();

}

void ControlePrincipal::onClickButtonRoteador(){
    qDebug()<<"ControlePrincipal::onClickButtonRoteador()";
    ControleConfiguracaoRoteador *controleRoteador = new ControleConfiguracaoRoteador(this->mainWindow);
    controleRoteador->show();
}

void ControlePrincipal::onClickButtonSwitch(){
    qDebug()<<"ControlePrincipal::onClickButtonSwitch()";
    ControleConfiguracaoSwitch *controleSwitch = new ControleConfiguracaoSwitch(this->mainWindow);
    controleSwitch->show();
}

void ControlePrincipal::onClickButtonCaboCross(){
    qDebug()<<"ControlePrincipal::onClickButtonCaboCross()";
}

void ControlePrincipal::onClickButtonCaboStraight(){
    qDebug()<<"ControlePrincipal::onClickButtonCaboStraight()";
}
