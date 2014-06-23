#ifndef COMPUTADOR_H
#define COMPUTADOR_H
#include <QString>
#include "interfacerede.h".h"

using namespace std;

class Computador
{
public:
    Computador();
    QString nome;
    QString ip;
    QString mac;
    QString gateway;
    QString mascara;
    InterfaceRede *interface;
};

#endif // COMPUTADOR_H
