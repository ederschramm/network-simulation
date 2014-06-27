#include "src/modelo/dado.h"

Dado::Dado()
{
}

string Dado::getDados(){
    return this->dados;
}

void Dado::setDados(string dados){
    this->dados = dados;
}
