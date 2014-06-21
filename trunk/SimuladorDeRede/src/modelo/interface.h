#ifndef INTERFACEREDE_H
#define INTERFACEREDE_H
#include "equipamento.h"

class Equipamento;

class Interface
{
public:
    Interface();
    Interface(int numero, Equipamento *equipamento);
    int getNumero();
    void setNumero(int numero);
    Equipamento *getEquipamento();
    void setEquipamento(Equipamento *equipamento);
private:
    int numero;
    Equipamento *equipamento;
};

#endif // INTERFACEREDE_H
