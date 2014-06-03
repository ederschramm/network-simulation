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

class PortaRede
{

public:
	PortaRede();
	virtual ~PortaRede();
	Cabo *m_Cabo;
	IP *m_IP;
	MAC *m_MAC;

	void abre(vector<bit> bits);

private:
	int numero;

};
#endif // !defined(EA_B19DF204_637A_4c30_B623_996FA63A6AC5__INCLUDED_)
