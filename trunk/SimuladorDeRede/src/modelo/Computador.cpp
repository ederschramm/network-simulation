#include "computador.h"

Computador::Computador():Equipamento()
{
}

void Computador::addIP(int interfaceRede, string ip){
    this->ip[interfaceRede] = ip;
}

void Computador::addMAC(int interfaceRede, string mac){
    this->mac[interfaceRede] = mac;
}

void Computador::delIP(int interfaceRede){
    this->ip.erase(interfaceRede);
}

void Computador::delMAC(int interfaceRede){
    this->mac.erase(interfaceRede);
}

string Computador::findIP(int interfaceRede){
     map<int, string>::iterator i = this->ip.find(interfaceRede);
     if ( i != this->ip.end()){
         return i->second;
     } else {
         return "";
     }
}

string Computador::findMAC(int interfaceRede){
    map<int, string>::iterator i = this->mac.find(interfaceRede);
    if ( i != this->mac.end()){
        return i->second;
    } else {
        return "";
    }
}
