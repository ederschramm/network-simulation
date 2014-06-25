#include "src/modelo/cabo.h"

Cabo::Cabo()
{
    this->tipo = "";
}

string Cabo::getTipo(){
    return this->tipo;
}

void Cabo::setTipo(string tipo){
    this->tipo = tipo;
}

InterfaceRede* Cabo::getA(){
    return this->a;
}

void Cabo::setA(InterfaceRede *a){
    this->a = a;
}

InterfaceRede* Cabo::getB(){
    return this->b;
}

void Cabo::setB(InterfaceRede *b){
    this->b = b;
}
