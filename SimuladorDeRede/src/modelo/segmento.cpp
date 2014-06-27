#include "src/modelo/segmento.h"

Segmento::Segmento()
{
}

string Segmento::getOrigem(){
    return this->origem;
}

void Segmento::setOrigem(string origem){
    this->origem = origem;
}

string Segmento::getDestino(){
    return this->destino;
}

void Segmento::setDestino(string destino){
    this->destino = destino;
}

Dado* Segmento::getDado(){
    return this->dado;
}

void Segmento::setDado(Dado *dado){
    this->dado = dado;
}
