#ifndef SWITCH_H
#define SWITCH_H

#include "src/modelo/equipamento.h"
#include "src/modelo/observador.h"

class Switch : public Equipamento, Observador
{
public:
    Switch();
    void configuracaoInicial(InterfaceRede *interfaceRede);
    void removerConfiguracao(InterfaceRede *interfaceRede);
    void atualiza(Observavel *observavel);
};

#endif // SWITCH_H
