///////////////////////////////////////////////////////////
//  Equipamento.cpp
//  Implementation of the Class Equipamento
//  Created on:      03-Jun-2014 10:16:51 AM
//  Original author: Diego Heusser
///////////////////////////////////////////////////////////

#include "Equipamento.h"

Equipamento::Equipamento(){

}

string Equipamento::getNome(){
    return this->nome;
}

void Equipamento::setNome(string nome){
    this->nome = nome;
}

vector<PortaRede*> Equipamento::getPortas(){
    return this->portas;
}

void Equipamento::adicionaPorta(PortaRede *porta){
    portas.push_back(porta);
}

void Equipamento::removePorta(PortaRede *porta){
    //implementar
}
