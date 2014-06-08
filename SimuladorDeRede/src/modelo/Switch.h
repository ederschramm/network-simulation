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
#include <map>
#include <vector>

class Switch : public Equipamento
{

public:
	Switch();
    void abrir(Frame *frame, PortaRede *porta);
private:
    map<string, PortaRede*> tabelaMAC;
    void broadcast();
    void atualizaTabela(string mac, PortaRede* porta);
};
#endif // !defined(EA_C54289FD_F71D_4c5f_A2CA_F35BFCFB0F41__INCLUDED_)