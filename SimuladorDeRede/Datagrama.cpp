///////////////////////////////////////////////////////////
//  Datagrama.cpp
//  Implementation of the Class Datagrama
//  Created on:      03-Jun-2014 10:16:50 AM
//  Original author: Diego Heusser
///////////////////////////////////////////////////////////

#include "Datagrama.h"

Datagrama::Datagrama(){

}

string Datagrama::getOrigem(){
    return this->origem;
}

void Datagrama::setOrigem(string origem){
    this->origem = origem;
}

string Datagrama::getDestino(){
    return this->destino;
}

void Datagrama::setDestino(string destino){
    this->destino = destino;
}

Segmento* Datagrama::getDado(){
    return this->dado;
}

void Datagrama::setDado(Segmento *dado){
    this->dado = dado;
}
