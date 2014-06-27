#include "src/modelo/datagrama.h"

Datagrama::Datagrama()
{
}

string Datagrama::getDestino(){
    return this->destino;
}

void Datagrama::setDestino(string destino){
    this->destino = destino;
}

string Datagrama::getOrigem(){
    return this->origem;
}

void Datagrama::setOrigem(string origem){
    this->origem = origem;
}

Segmento* Datagrama::getDado(){
    return this->dado;
}

void Datagrama::setDado(Segmento *dado){
    this->dado = dado;
}
