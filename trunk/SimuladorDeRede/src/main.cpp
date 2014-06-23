#include <QtGui/QApplication>
//#include "src/controle/controleprincipal.h"
//#include <QDebug>
#include <iostream>
#include "src/modelo/computador.h"
#include "src/modelo/hub.h"
#include "src/modelo/cabo.h"
#include "src/modelo/frame.h"
#include "src/modelo/datagrama.h"

int main(int argc, char *argv[])
{
    //qDebug()<<"main()";
    //QApplication a(argc, argv);
    //ControlePrincipal c;
    //return a.exec();
    Computador *pc1 = new Computador();
    pc1->nome = "pc1";
    pc1->ip = "192.168.0.10";
    pc1->mac = "aa:bb:cc";
    pc1->gateway = "192.168.0.1";
    pc1->mascara = "255.255.255.0";
    Computador *pc2 = new Computador();
    pc2->nome = "pc2";
    pc2->ip = "192.168.0.10";
    pc2->mac = "aa:bb:cc";
    pc2->gateway = "192.168.0.1";
    pc2->mascara = "255.255.255.0";
    Hub *hub1 = new Hub();
    hub1->nome = "hub1";
    Cabo *cabo1 = new Cabo();
    cabo1->i1 = pc1->interface;
    cabo1->i2 = hub1->i1;
    pc1->interface->cabo = cabo1;
    hub1->i1->cabo = cabo1;
    Cabo *cabo2 = new Cabo();
    cabo2->i1 = pc2->interface;
    cabo2->i2 = hub1->i2;
    pc2->interface->cabo = cabo2;
    hub1->i2->cabo = cabo2;
    Datagrama *datagrama1 = new Datagrama();
    pc1->interface->receber(datagrama1);
    cout << pc1->interface->frame->num << endl;
    cout << hub1->i1->frame->num << endl;

    //cout << pc2->interface->frame->num << endl;
}
