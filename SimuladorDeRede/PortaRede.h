///////////////////////////////////////////////////////////
//  PortaRede.h
//  Implementation of the Class PortaRede
//  Created on:      03-Jun-2014 10:16:54 AM
//  Original author: Diego Heusser
///////////////////////////////////////////////////////////

#if !defined(EA_B19DF204_637A_4c30_B623_996FA63A6AC5__INCLUDED_)
#define EA_B19DF204_637A_4c30_B623_996FA63A6AC5__INCLUDED_

#include "Cabo.h"
#include "IP.h"
#include "MAC.h"
#include "Equipamento.h"
#include <string>
#include <vector>

using namespace std;

class Cabo;

class PortaRede
{

public:
	PortaRede();
    void abre(vector<string> bits);
    int getNumero();
    void setNumero(int numero);
    Cabo* getCabo();
    void setCabo(Cabo* cabo);
    IP* getIp();
    void setIp(IP* ip);
    MAC* getMac();
    void setMac(MAC* mac);
    Equipamento* getEquipamento();
    void setEquipamento(Equipamento* equipamento);
private:
	int numero;
    Cabo* cabo;
    IP* ip;
    MAC* mac;
    Equipamento* equipamento;

};
#endif // !defined(EA_B19DF204_637A_4c30_B623_996FA63A6AC5__INCLUDED_)
