#ifndef COMPUTADOR_H
#define COMPUTADOR_H

#include "equipamento.h"

#include <Map>
#include <string>

using namespace std;

class Computador : public Equipamento
{
public:
    Computador();
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

#endif // COMPUTADOR_H
