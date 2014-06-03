///////////////////////////////////////////////////////////
//  Segmento.cpp
//  Implementation of the Class Segmento
//  Created on:      03-Jun-2014 10:16:56 AM
//  Original author: Diego Heusser
///////////////////////////////////////////////////////////

#include "Segmento.h"

Segmento::Segmento(){

}

string Segmento::getDestino(){
    return this->destino;
}

void Segmento::setDestino(string destino){
    this->destino = destino;
}

string Segmento::getOrigem(){
    return this->origem;
}

void Segmento::setOrigem(string origem){
    this->origem = origem;
}

Dado* Segmento::getDado(){
    return this->dado;
}

void Segmento::setDado(Dado *dado){
    this->dado = dado;
}
