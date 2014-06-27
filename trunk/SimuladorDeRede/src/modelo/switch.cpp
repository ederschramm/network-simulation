#include "switch.h"
#include <QDebug>

Switch::Switch()
{
}

void Switch::configuracaoInicial(InterfaceRede *interfaceRede){
    qDebug()<<"Switch::configuracaoInicial(InterfaceRede *interfaceRede)";
}

void Switch::removerConfiguracao(InterfaceRede *interfaceRede){
    qDebug()<<"Switch::removerConfiguracao(InterfaceRede *interfaceRede)";
}

void Switch::atualiza(Observavel *observavel){
    qDebug()<<"Switch::atualiza(Observavel *observavel)";
}
