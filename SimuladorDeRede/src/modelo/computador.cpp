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
    this->abrir(interface->getFrame(), interface->getNumero());
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

void Computador::abrir(Frame *frame, int interface){
    qDebug()<<"Computador::abrir(Frame *frame)";
    if(frame->getDestino()==this->findMAC(interface)){
        this->abrir(frame->getDado(),interface);
    }
}

void Computador::abrir(Datagrama *datagrama, int interface){
    qDebug()<<"Computador::abrir(Datagrama *datagrama, int interface)";
    if(datagrama->getDestino()==this->findIP(interface)){
        this->abrir(datagrama->getDado());
    }
}

void Computador::abrir(Segmento *segmento){
    qDebug()<<"Computador::abrir(Segmento *segmento)";
    this->abrir(segmento->getDado());
}

void Computador::abrir(Dado *dado){
    qDebug()<<"Computador::abrir(Dado *dado)";
    if(dado->getDados().find("ping") != std::string::npos){
        string destino = dado->getDados().substr(3,dado->getDados().size()-1);
        qDebug()<<QString::fromStdString(destino);
        Dado *novo = new Dado();
        novo->setDados("sucefull");
        //this->encapsula(novo);
    }
    if (dado->getDados().find("sucefull") != std::string::npos){

    }
}

void Computador::encapsula(Dado *dado, string ip){
    qDebug()<<"Computador::encapsula(Dado *dado)";
    Segmento *segmento = new Segmento();
    segmento->setDado(dado);
    encapsula(segmento,ip);
}

void Computador::encapsula(Segmento *segmento, string ip){
    qDebug()<<"Computador::encapsula(Segmento *segmento)";
    Datagrama *datagrama = new Datagrama();
    datagrama->setDado(segmento);
    datagrama->setDestino(ip);
}

void Computador::encapsula(Datagrama *datagrama){
    qDebug()<<"Computador::encapsula(Datagrama *datagrama)";
}
