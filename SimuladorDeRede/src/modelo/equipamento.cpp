#include "equipamento.h"

Equipamento::Equipamento()
{
    this->nome = "";
}

string Equipamento::getNome(){
    return this->nome;
}

void Equipamento::setNome(string nome){
    this->nome = nome;
}

void Equipamento::addInterfaceRede(InterfaceRede *interfaceRede){
    this->interfaces.push_back(interfaceRede);
    this->configuracaoInicial(interfaceRede);
}

void Equipamento::delInterfaceRede(InterfaceRede *interfaceRede){
    vector<InterfaceRede*>::iterator i;
    bool achou = false;
    for (vector<InterfaceRede*>::iterator it = this->interfaces.begin(); it != this->interfaces.end(); it++){
        InterfaceRede *interface = *it;
        if (interface == interfaceRede){
            i = it;
            achou = true;
        }
    }
    if (achou){
        this->interfaces.erase(i);
        this->removerConfiguracao(interfaceRede);
    }
}

InterfaceRede* Equipamento::findInterfaceRede(int numero){
    InterfaceRede *interface = new InterfaceRede();
    for (vector<InterfaceRede*>::iterator it = this->interfaces.begin(); it != this->interfaces.end(); it++){
        InterfaceRede *interfaceRede = *it;
        if (interfaceRede->getNumero()==numero){
            interface = interfaceRede;
        }
    }
    return interface;
}
