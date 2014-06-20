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

    // construimos a cena
    QGraphicsScene *cena = new QGraphicsScene();


    // definimos o tamanho da cena
    cena->setSceneRect(0,0,700,500);

    // setamos a cena no graphicsview
    this->mainWindow->diagrama->setScene(cena);

    // criamos uma elipse
    //QGraphicsEllipseItem *it = new QGraphicsEllipseItem();
    QPixmap pixmap(25,25);
    QGraphicsPixmapItem *pc = new QGraphicsPixmapItem(pixmap);

    // definimos as dimensões e posição da elipse
    //it->setRect(5,5,30,30);

    // setamos a elipse como sendo um objeto selecionável e móvel.
    // isso quer dizer que podemos selecioná-la e movê-la na tela.
    //it->setFlags(QGraphicsItem::ItemIsMovable | QGraphicsItem::ItemIsSelectable);
    pc->setFlags(QGraphicsItem::ItemIsMovable | QGraphicsItem::ItemIsSelectable);
    // colocamos a elipse na cena
    //cena->addItem(it);
    cena->addItem(pc);
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
