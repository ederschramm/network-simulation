///////////////////////////////////////////////////////////
//  PortaRede.h
//  Implementation of the Class PortaRede
//  Created on:      03-Jun-2014 10:16:54 AM
//  Original author: Diego Heusser
///////////////////////////////////////////////////////////

#if !defined(EA_B19DF204_637A_4c30_B623_996FA63A6AC5__INCLUDED_)
#define EA_B19DF204_637A_4c30_B623_996FA63A6AC5__INCLUDED_

#include "Cabo.h"
#include "Equipamento.h"
#include "Frame.h"
#include <string>
#include <vector>

using namespace std;

class Cabo;
class Equipamento;

class PortaRede
{

public:
	PortaRede();
    void abre(Frame* frame);
    int getNumero();
    void setNumero(int numero);
    Cabo* getCabo();
    void setCabo(Cabo* cabo);
    Equipamento* getEquipamento();
    void setEquipamento(Equipamento* equipamento);
protected:
	int numero;
    Cabo* cabo;
    Equipamento* equipamento;

};
#endif // !defined(EA_B19DF204_637A_4c30_B623_996FA63A6AC5__INCLUDED_)
