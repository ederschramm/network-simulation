///////////////////////////////////////////////////////////
//  Hub.h
//  Implementation of the Class Hub
//  Created on:      03-Jun-2014 10:16:52 AM
//  Original author: Diego Heusser
///////////////////////////////////////////////////////////

#if !defined(EA_DD92E5A1_7938_4aa2_9109_62A458A16B3F__INCLUDED_)
#define EA_DD92E5A1_7938_4aa2_9109_62A458A16B3F__INCLUDED_

#include "Equipamento.h"
#include "NI.h"

class Hub : public Equipamento, public NI
{

public:
	Hub();
	virtual ~Hub();

	void abrir(Frame frame);

};
#endif // !defined(EA_DD92E5A1_7938_4aa2_9109_62A458A16B3F__INCLUDED_)
