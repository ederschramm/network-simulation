#include "cabo.h"
#include <QDebug>

Cabo::Cabo()
{
    this->tipo = "";
}

string Cabo::getTipo(){
    return this->tipo;
}

void Cabo::setTipo(string tipo){
    this->tipo = tipo;
}

InterfaceRede* Cabo::getA(){
    return this->a;
}

void Cabo::setA(InterfaceRede *a){
    this->a = a;
}

InterfaceRede* Cabo::getB(){
    return this->b;
}

void Cabo::setB(InterfaceRede *b){
    this->b = b;
}

void Cabo::enviar(InterfaceRede *i, Frame *frame){
    qDebug()<<"Cabo::enviar(InterfaceRede *i, Frame *frame)";
    if (i == a) {
        qDebug()<<"i == a";
        a->setFrame(frame);
    }
    if (i == b){
        qDebug()<<"i == b";
        b->setFrame(frame);
    }
}
