#ifndef CABO_H
#define CABO_H

#include "src/modelo/interfacerede.h"
#include "src/modelo/frame.h"
#include <string>

using namespace std;

class InterfaceRede;

class Cabo
{
public:
    Cabo();
    string getTipo();
    void setTipo(string tipo);
    InterfaceRede* getA();
    void setA(InterfaceRede *a);
    InterfaceRede* getB();
    void setB(InterfaceRede *b);
    void enviar(InterfaceRede *i, Frame *frame);
private:
    string tipo;
    InterfaceRede *a;
    InterfaceRede *b;
};

#endif // CABO_H
