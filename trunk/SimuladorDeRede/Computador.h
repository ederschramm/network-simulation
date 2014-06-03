///////////////////////////////////////////////////////////
//  Computador.h
//  Implementation of the Class Computador
//  Created on:      03-Jun-2014 10:16:48 AM
//  Original author: Diego Heusser
///////////////////////////////////////////////////////////

#if !defined(EA_2AE89DAE_7BE2_4716_AE13_F6BC1C380877__INCLUDED_)
#define EA_2AE89DAE_7BE2_4716_AE13_F6BC1C380877__INCLUDED_

#include "Equipamento.h"
#include "I.h"
#include "T.h"
#include "A.h"
#include "NI.h"

class Computador : public Equipamento, public I, public T, public A, public NI
{

public:
	Computador();
	virtual ~Computador();

	virtual void abrir(Frame frame);
	virtual void abrir(Datagrama datagrama);
	virtual void abrir(Segmento segmento);
	virtual void abrir(Dado dado);

};
#endif // !defined(EA_2AE89DAE_7BE2_4716_AE13_F6BC1C380877__INCLUDED_)
