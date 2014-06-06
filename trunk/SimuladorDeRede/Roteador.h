///////////////////////////////////////////////////////////
//  Roteador.h
//  Implementation of the Class Roteador
//  Created on:      03-Jun-2014 10:16:55 AM
//  Original author: Diego Heusser
///////////////////////////////////////////////////////////

#if !defined(EA_84ABF8E1_B853_4e4e_BF5A_2920A1C1DE18__INCLUDED_)
#define EA_84ABF8E1_B853_4e4e_BF5A_2920A1C1DE18__INCLUDED_

#include "Equipamento.h"
#include "I.h"
#include "NI.h"

class Roteador : public Equipamento, public I
{

public:
	Roteador();
    virtual void abrir(Datagrama* datagrama);
};
#endif // !defined(EA_84ABF8E1_B853_4e4e_BF5A_2920A1C1DE18__INCLUDED_)
