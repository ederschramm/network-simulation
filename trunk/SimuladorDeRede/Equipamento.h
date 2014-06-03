///////////////////////////////////////////////////////////
//  Equipamento.h
//  Implementation of the Class Equipamento
//  Created on:      03-Jun-2014 10:16:50 AM
//  Original author: Diego Heusser
///////////////////////////////////////////////////////////

#if !defined(EA_192C10D8_CF88_4c41_BC82_0939EAC0496B__INCLUDED_)
#define EA_192C10D8_CF88_4c41_BC82_0939EAC0496B__INCLUDED_

#include "PortaRede.h"

class Equipamento
{

public:
	Equipamento();
	virtual ~Equipamento();
	PortaRede *m_PortaRede;

private:
	string nome;

};
#endif // !defined(EA_192C10D8_CF88_4c41_BC82_0939EAC0496B__INCLUDED_)
