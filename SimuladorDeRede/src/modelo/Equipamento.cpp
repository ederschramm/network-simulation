#include "equipamento.h"

Equipamento::Equipamento()
{
}

Equipamento::Equipamento(string nome)
{
    this->nome = nome;
}

string Equipamento::getNome(){
    return this->nome;
}

void Equipamento::setNome(string nome){
    this->nome = nome;
}
