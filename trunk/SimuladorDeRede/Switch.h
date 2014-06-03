///////////////////////////////////////////////////////////
//  Switch.h
//  Implementation of the Class Switch
//  Created on:      03-Jun-2014 10:16:56 AM
//  Original author: Diego Heusser
///////////////////////////////////////////////////////////

#if !defined(EA_C54289FD_F71D_4c5f_A2CA_F35BFCFB0F41__INCLUDED_)
#define EA_C54289FD_F71D_4c5f_A2CA_F35BFCFB0F41__INCLUDED_

#include "Equipamento.h"
#include "NI.h"

class Switch : public Equipamento, public NI
{

public:
	Switch();
    virtual void abrir(Frame* frame);

};
#endif // !defined(EA_C54289FD_F71D_4c5f_A2CA_F35BFCFB0F41__INCLUDED_)
