#ifndef INTERFACEREDE_H
#define INTERFACEREDE_H

#include "src/modelo/cabo.h"
#include "src/modelo/equipamento.h"

class Cabo;
class Equipamento;

class InterfaceRede
{
public:
    InterfaceRede();
    int getNumero();
    void setNumero(int numero);
    Cabo* getCabo();
    void setCabo(Cabo *cabo);
    Equipamento* getEquipamento();
    void setEquipamento(Equipamento *equipamento);
private:
    int numero;
    Cabo *cabo;
    Equipamento *equipamento;
};

#endif // INTERFACEREDE_H
