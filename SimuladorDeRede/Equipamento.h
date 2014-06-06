///////////////////////////////////////////////////////////
//  Equipamento.h
//  Implementation of the Class Equipamento
//  Created on:      03-Jun-2014 10:16:50 AM
//  Original author: Diego Heusser
///////////////////////////////////////////////////////////

#if !defined(EA_192C10D8_CF88_4c41_BC82_0939EAC0496B__INCLUDED_)
#define EA_192C10D8_CF88_4c41_BC82_0939EAC0496B__INCLUDED_

#include "PortaRede.h"
#include <vector>
#include <string>

using namespace std;

class Equipamento
{

public:
	Equipamento();
    string getNome();
    void setNome(string nome);
    vector<PortaRede*> getPortas();
    void adicionaPorta(PortaRede* porta);
    void removePorta(PortaRede* porta);
private:
	string nome;
    vector<PortaRede*> portas;

};
#endif // !defined(EA_192C10D8_CF88_4c41_BC82_0939EAC0496B__INCLUDED_)