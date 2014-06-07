///////////////////////////////////////////////////////////
//  Frame.cpp
//  Implementation of the Class Frame
//  Created on:      03-Jun-2014 10:16:51 AM
//  Original author: Diego Heusser
///////////////////////////////////////////////////////////

#include "Frame.h"

Frame::Frame(){

}

string Frame::getDestino(){
    return this->destino;
}

void Frame::setDestino(string destino){
    this->destino = destino;
}

string Frame::getOrigem(){
    return this->origem;
}

void Frame::setOrigem(string origem){
    this->origem = origem;
}

Datagrama* Frame::getDado(){
    return this->dado;
}

void Frame::setDado(Datagrama *dado){
    this->dado = dado;
}
