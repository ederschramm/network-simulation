#include "roteador.h"

Roteador::Roteador(): Equipamento()
{
}

void Roteador::addIP(int interfaceRede, string ip){
    this->ip[interfaceRede] = ip;
}

void Roteador::addMAC(int interfaceRede, string mac){
    this->mac[interfaceRede] = mac;
}

void Roteador::delIP(int interfaceRede){
    this->ip.erase(interfaceRede);
}

void Roteador::delMAC(int interfaceRede){
    this->mac.erase(interfaceRede);
}

string Roteador::findIP(int interfaceRede){
    map<int, string>::iterator i = this->ip.find(interfaceRede);
    if (i != this->ip.end()){
        return i->second;
    } else {
        return "";
    }
}

string Roteador::findMAC(int interfaceRede){
    map<int, string>::iterator i = this->mac.find(interfaceRede);
    if (i != this->mac.end()){
        return i->second;
    } else {
        return "";
    }
}
