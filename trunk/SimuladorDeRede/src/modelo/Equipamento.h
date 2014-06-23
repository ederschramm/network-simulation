#ifndef EQUIPAMENTO_H
#define EQUIPAMENTO_H
//#include "interface.h"
#include <string>

using namespace std;

//class Interface;

class Equipamento
{
public:
    Equipamento();
    Equipamento(string nome);
    string getNome();
    void setNome(string nome);
//    Interface* getInterface();
//    void setInterface(Interface *interfaceRede);
private:
    string nome;
//    Interface *interface;
};

#endif // EQUIPAMENTO_H
