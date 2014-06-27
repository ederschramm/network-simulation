#include "frame.h"

Frame::Frame()
{
}

string Frame::getDestino(){
    return this->destino;
}

void Frame::setDestino(string destino){
    this->destino = destino;
}

string Frame::getOrigem(){
    return this->origem;
}

void Frame::setOrigem(string origem){
    this->origem = origem;
}
