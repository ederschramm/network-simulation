#ifndef COMPUTADOR_H
#define COMPUTADOR_H

#include "src/modelo/equipamento.h"
#include "src/modelo/observador.h"
#include "src/modelo/interfacerede.h"
#include <map>
#include <string>

using namespace std;

class Computador : public Equipamento, Observador
{
public:
    Computador();
    void configuraIP(int numero, string ip);
    void configuraMAC(int numero, string mac);
    void delIP(int numero);
    void delMAC(int numero);
    string findIP(int numero);
    string findMAC(int numero);
    void atualiza(Observavel *observavel);
    void configuracaoInicial(InterfaceRede *interfaceRede);
    void removerConfiguracao(InterfaceRede *interfaceRede);
private:
    void abrir(Frame *frame, int interface);
    void abrir(Datagrama *datagrama, int interface);
    void abrir(Segmento *segmento);
    void abrir(Dado *dado);
    map<int,string> ip;
    map<int,string> mac;
};

#endif // COMPUTADOR_H
