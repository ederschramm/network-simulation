#include "controleprincipal.h"
#include "src/controle/controleconfiguracaohost.h"
#include "src/controle/controleconfiguracaohub.h"
#include "src/controle/controleconfiguracaoroteador.h"
#include "src/controle/controleconfiguracaoswitch.h"
#include <QDebug>
#include <QGraphicsScene>
#include <QGraphicsEllipseItem>
#include <QGraphicsItem>
ControlePrincipal::ControlePrincipal()
{
    qDebug() << "ControlePrincipal::ControlePrincipal()";
    this->mainWindow = new MainWindow();
    this->mainWindow->show();
    this->listeners();

}

void ControlePrincipal::listeners(){
    qDebug()<<"ControlePrincipal::listeners()";
}

void ControlePrincipal::onClickButtonHub(){
    qDebug()<<"ControlePrincipal::onClickButtonHub()";
}

void ControlePrincipal::onClickButtonComputador(){
    qDebug()<<"ControlePrincipal::onClickButtonComputador()";
}

void ControlePrincipal::onClickButtonRoteador(){
    qDebug()<<"ControlePrincipal::onClickButtonRoteador()";
}

void ControlePrincipal::onClickButtonSwitch(){
    qDebug()<<"ControlePrincipal::onClickButtonSwitch()";
}

void ControlePrincipal::onClickButtonCaboCross(){
    qDebug()<<"ControlePrincipal::onClickButtonCaboCross()";
}

void ControlePrincipal::onClickButtonCaboStraight(){
    qDebug()<<"ControlePrincipal::onClickButtonCaboStraight()";
}
