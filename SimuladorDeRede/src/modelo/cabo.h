#ifndef CABO_H
#define CABO_H
#include "interfacerede.h"
#include "frame.h"

using namespace std;

class InterfaceRede;

class Cabo
{
public:
    Cabo();
    void setFrame(Frame *frame);
    InterfaceRede *i1;
    InterfaceRede *i2;
};

#endif // CABO_H
