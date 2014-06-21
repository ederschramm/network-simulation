#include "interface.h"

Interface::Interface()
{
}

Interface::Interface(int numero, Equipamento *equipamento)
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
