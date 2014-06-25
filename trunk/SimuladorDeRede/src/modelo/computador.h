#ifndef COMPUTADOR_H
#define COMPUTADOR_H

#include "src/modelo/equipamento.h"
#include <map>
#include <string>

using namespace std;

class Computador : public Equipamento
{
public:
    Computador();
    void addIP(int numero, string ip);
    void addMAC(int numero, string mac);
    void delIP(int numero);
    void delMAC(int numero);
    string findIP(int numero);
    string findMAC(int numero);
private:
    map<int,string> ip;
    map<int,string> mac;
};

#endif // COMPUTADOR_H
