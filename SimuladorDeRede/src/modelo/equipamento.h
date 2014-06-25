#ifndef EQUIPAMENTO_H
#define EQUIPAMENTO_H

#include "src/modelo/interfacerede.h"
#include <string>
#include <vector>

using namespace std;

class InterfaceRede;

class Equipamento
{
public:
    Equipamento();
    string getNome();
    void setNome(string nome);
    void addInterfaceRede(InterfaceRede *interfaceRede);
    void delInterfaceRede(InterfaceRede *interfaceRede);
    InterfaceRede* findInterfaceRede(int numero);
protected:
    string nome;
    vector<InterfaceRede*> interfaces;
};

#endif // EQUIPAMENTO_H
