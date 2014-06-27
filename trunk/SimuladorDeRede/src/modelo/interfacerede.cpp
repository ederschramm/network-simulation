#include "interfacerede.h"
#include <QDebug>

InterfaceRede::InterfaceRede()
{
    this->numero = 0;
}

int InterfaceRede::getNumero(){
    return this->numero;
}

void InterfaceRede::setNumero(int numero){
    this->numero = numero;
}

Cabo* InterfaceRede::getCabo(){
    return this->cabo;
}

void InterfaceRede::setCabo(Cabo *cabo){
    this->cabo = cabo;
}

Frame* InterfaceRede::getFrame(){
    return this->frame;
}

void InterfaceRede::setFrame(Frame *frame){
    qDebug()<<"InterfaceRede::setFrame(Frame *frame)";
    this->frame = frame;
    this->notificaObservadores();
}

Equipamento* InterfaceRede::getEquipamento(){
    return this->equipamento;
}

void InterfaceRede::setEquipamento(Equipamento *equipamento){
    this->equipamento  = equipamento;
}
