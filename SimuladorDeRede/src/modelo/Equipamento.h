#ifndef EQUIPAMENTO_H
#define EQUIPAMENTO_H

#include "interfacerede.h"

#include <string>

using namespace std;

class InterfaceRede;

class Equipamento
{
public:
    Equipamento();
    Equipamento(string nome);
    string getNome();
    void setNome(string nome);
    InterfaceRede* getInterfaceRede();
    void setInterfaceRede(InterfaceRede *interfaceRede);
private:
    string nome;
    InterfaceRede *interfaceRede;
};

#endif // EQUIPAMENTO_H
