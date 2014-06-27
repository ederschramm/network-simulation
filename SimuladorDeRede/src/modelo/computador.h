#ifndef COMPUTADOR_H
#define COMPUTADOR_H

#include "src/modelo/equipamento.h"
#include "src/modelo/observador.h"
#include "src/modelo/interfacerede.h"
#include "src/modelo/tabelaarp.h"
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
    void encapsula(Dado *dado, string ip);
    void encapsula(Segmento *segmento, string ip);
    void encapsula(Datagrama *datagrama);
    map<int,string> ip;
    map<int,string> mac;
    map<int,TabelaARP> tabelaARP;
};

#endif // COMPUTADOR_H
