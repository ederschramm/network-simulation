#include "interfacepc.h"
#include <iostream>

InterfacePc::InterfacePc():InterfaceRede()
{
    frame = new Frame();
}

void InterfacePc::enviar(Frame *frame){
    this->cabo->setFrame(frame);
}

void InterfacePc::enviar(Datagrama *datagrama){

}

void InterfacePc::receber(Frame *frame){

}

void InterfacePc::receber(Datagrama *datagrama){
    cout << "passou aqui" << endl;
    this->frame = new Frame();
    this->frame->num = 5;
    enviar(frame);
}

/*Interface::Interface(int numero, Equipamento *equipamento)
{
    this->numero = numero;
    this->equipamento = equipamento;
}

int Interface::getNumero(){
    return this->numero;
}

void Interface::setNumero(int numero){
    this->numero = numero;
}

Equipamento* Interface::getEquipamento(){
    return this->equipamento;
}

void Interface::setEquipamento(Equipamento *equipamento){
    this->equipamento = equipamento;
}
*/
