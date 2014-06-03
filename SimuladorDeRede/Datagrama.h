///////////////////////////////////////////////////////////
//  Datagrama.h
//  Implementation of the Class Datagrama
//  Created on:      03-Jun-2014 10:16:50 AM
//  Original author: Diego Heusser
///////////////////////////////////////////////////////////

#if !defined(EA_417495C4_62C2_4a6c_868E_7618EB2DF7D6__INCLUDED_)
#define EA_417495C4_62C2_4a6c_868E_7618EB2DF7D6__INCLUDED_

#include "Segmento.h"

class Datagrama
{

public:
	Datagrama();
	virtual ~Datagrama();
	Segmento *m_Segmento;

private:
	string destino;
	string origem;

};
#endif // !defined(EA_417495C4_62C2_4a6c_868E_7618EB2DF7D6__INCLUDED_)
