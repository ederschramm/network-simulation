#include "src/modelo/interfacerede.h"

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

Equipamento* InterfaceRede::getEquipamento(){
    return this->equipamento;
}

void InterfaceRede::setEquipamento(Equipamento *equipamento){
    this->equipamento  = equipamento;
}
