#ifndef INTERFACEREDE_H
#define INTERFACEREDE_H

#include "src/modelo/cabo.h"
#include "src/modelo/equipamento.h"
#include "src/modelo/observavel.h"
#include "src/modelo/frame.h"

class Cabo;
class Equipamento;

class InterfaceRede : public Observavel
{
public:
    InterfaceRede();
    int getNumero();
    void setNumero(int numero);
    Cabo* getCabo();
    void setCabo(Cabo *cabo);
    Frame* getFrame();
    void setFrame(Frame *frame);
    Equipamento* getEquipamento();
    void setEquipamento(Equipamento *equipamento);
private:
    int numero;
    Cabo *cabo;
    Frame *frame;
    Equipamento *equipamento;
};

#endif // INTERFACEREDE_H
