///////////////////////////////////////////////////////////
//  Dado.cpp
//  Implementation of the Class Dado
//  Created on:      03-Jun-2014 10:16:49 AM
//  Original author: Diego Heusser
///////////////////////////////////////////////////////////

#include "Dado.h"

Dado::Dado(){

}

string Dado::getMensagem(){
    return this->mensagem;
}

void Dado::setMensagem(string mensagem){
    this->mensagem = mensagem;
}
