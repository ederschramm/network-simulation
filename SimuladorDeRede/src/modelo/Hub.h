#ifndef HUB_H
#define HUB_H
#include "interfacerede.h"
#include <QString>

using namespace std;

class Hub
{
public:
    Hub();
    QString nome;
    InterfaceRede *i1;
    InterfaceRede *i2;
    InterfaceRede *i3;
    InterfaceRede *i4;
};

#endif // HUB_H
