#include "computador.h"
#include <QDebug>

Computador::Computador()
{
}

void Computador::configuraIP(int numero, string ip){
    this->ip[numero]=ip;
}

void Computador::configuraMAC(int numero, string mac){
    qDebug()<<"Computador::addMAC(int numero, string mac)";
    this->mac[numero]=mac;
    for (vector<InterfaceRede*>::iterator it = this->interfaces.begin(); it != this->interfaces.end(); it++){
        InterfaceRede* interface = *it;
        if (interface->getNumero()==numero){
            interface->addObservador(this);
        }
    }
}

void Computador::delIP(int numero){
    this->ip.erase(numero);
}

void Computador::delMAC(int numero){
    this->mac.erase(numero);
}

string Computador::findIP(int numero){
    map<int,string>::iterator it = this->ip.find(numero);
    string retorno = it->second;
    return retorno;
}

string Computador::findMAC(int numero){
    map<int,string>::iterator it = this->mac.find(numero);
    string retorno = it->second;
    return retorno;
}

void Computador::atualiza(Observavel *observavel){
    qDebug()<<"Computador::atualiza(Observavel *observavel)";
    InterfaceRede *interface = (InterfaceRede*) observavel;
    string origem = interface->getFrame()->getOrigem();
    qDebug()<< QString::fromStdString(origem);
}

void Computador::configuracaoInicial(InterfaceRede *interfaceRede){
    qDebug()<<"Computador::configuracaoInicial(InterfaceRede *interfaceRede)";
    this->configuraIP(interfaceRede->getNumero(),"");
    this->configuraMAC(interfaceRede->getNumero(),"");
}

void Computador::removerConfiguracao(InterfaceRede *interfaceRede){
    qDebug()<<"Computador::removerConfiguracao(InterfaceRede *interfaceRede)";
    this->delIP(interfaceRede->getNumero());
    this->delMAC(interfaceRede->getNumero());
}
