#ifndef INTERFACEPC_H
#define INTERFACEPC_H
#include "interfacerede.h"
#include "frame.h"
#include "datagrama.h"
#include "cabo.h"
#include "computador.h"

using namespace std;

class InterfacePc : public InterfaceRede
{
public:
    InterfacePc();
    //Frame *frame;
    Computador *pc;
    void enviar(Frame *frame);
    void receber(Frame *frame);
    void enviar(Datagrama *datagrama);
    void receber(Datagrama *datagrama);
//    Interface(int numero, Equipamento *equipamento);
//    int getNumero();
//    void setNumero(int numero);
//    Equipamento *getEquipamento();
//    void setEquipamento(Equipamento *equipamento);
//private:
//    int numero;
//    Equipamento *equipamento;
};

#endif // INTERFACEREDE_H
