///////////////////////////////////////////////////////////
//  PortaRede.cpp
//  Implementation of the Class PortaRede
//  Created on:      03-Jun-2014 10:16:54 AM
//  Original author: Diego Heusser
///////////////////////////////////////////////////////////

#include "PortaRede.h"

PortaRede::PortaRede(){

}

void PortaRede::abre(Frame *frame){
    this->equipamento->abrir(frame,this);
}

Equipamento* PortaRede::getEquipamento(){
    return this->equipamento;
}

void PortaRede::setEquipamento(Equipamento *equipamento){
    this->equipamento = equipamento;
}

int PortaRede::getNumero(){
    return this->numero;
}

void PortaRede::setNumero(int numero){
    this->numero = numero;
}

Cabo* PortaRede::getCabo(){
    return this->cabo;
}

void PortaRede::setCabo(Cabo *cabo){
    this->cabo = cabo;
}
