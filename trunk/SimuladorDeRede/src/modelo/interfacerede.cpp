#include "interfacerede.h"

InterfaceRede::InterfaceRede()
{
}

InterfaceRede::InterfaceRede(int numero, Equipamento *equipamento)
{
    this->numero = numero;
    this->equipamento = equipamento;
}

int InterfaceRede::getNumero(){
    return this->numero;
}

void InterfaceRede::setNumero(int numero){
    this->numero = numero;
}

Equipamento* InterfaceRede::getEquipamento(){
    return this->equipamento;
}

void InterfaceRede::setEquipamento(Equipamento *equipamento){
    this->equipamento = equipamento;
}
