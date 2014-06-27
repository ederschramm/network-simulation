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
    virtual void configuracaoInicial(InterfaceRede *interfaceRede)=0;
    virtual void removerConfiguracao(InterfaceRede *interfaceRede)=0;
    InterfaceRede* findInterfaceRede(int numero);
protected:
    string nome;
    vector<InterfaceRede*> interfaces;
};

#endif // EQUIPAMENTO_H
