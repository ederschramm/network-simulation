#ifndef INTERFACEREDE_H
#define INTERFACEREDE_H
#include "datagrama.h"
#include "frame.h"
#include "cabo.h"

using namespace std;

class Cabo;

class InterfaceRede
{
public:
    InterfaceRede();
    Cabo *cabo;
    Frame *frame;
    virtual void receber(Datagrama *datagrama)=0;
    virtual void receber(Frame *frame)=0;
    virtual void enviar(Datagrama *datagrama)=0;
    virtual void enviar(Frame *frame)=0;
};

#endif // INTERFACEREDE_H
