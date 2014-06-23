#ifndef INTERFACEHUB_H
#define INTERFACEHUB_H
#include "interfacerede.h"
#include "frame.h"
#include "datagrama.h"

class InterfaceHub : public InterfaceRede
{
public:
    InterfaceHub();
    void enviar(Frame *frame);
    void receber(Frame *frame);
    void enviar(Datagrama *datagrama);
    void receber(Datagrama *datagrama);
};

#endif // INTERFACEHUB_H
