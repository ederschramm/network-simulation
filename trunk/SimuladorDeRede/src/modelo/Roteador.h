#ifndef ROTEADOR_H
#define ROTEADOR_H

#include "equipamento.h"

#include <string>
#include <map>

class Roteador : public Equipamento
{
public:
    Roteador();
    void addIP(int interfaceRede, string ip);
    void addMAC(int interfaceRede, string mac);
    void delIP(int interfaceRede);
    void delMAC(int interfaceRede);
    string findIP(int interfaceRede);
    string findMAC(int interfaceRede);
private:
    map<int, string> ip;
    map<int, string> mac;
};

#endif // ROTEADOR_H
