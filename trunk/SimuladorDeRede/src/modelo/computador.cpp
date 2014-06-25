#include "src/modelo/computador.h"

Computador::Computador()
{
}

void Computador::addIP(int numero, string ip){
    this->ip[numero]=ip;
}

void Computador::addMAC(int numero, string mac){
    this->mac[numero]=mac;
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
