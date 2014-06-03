///////////////////////////////////////////////////////////
//  Frame.h
//  Implementation of the Class Frame
//  Created on:      03-Jun-2014 10:16:51 AM
//  Original author: Diego Heusser
///////////////////////////////////////////////////////////

#if !defined(EA_C46A3B96_C973_4a47_B415_4ED89455D0E0__INCLUDED_)
#define EA_C46A3B96_C973_4a47_B415_4ED89455D0E0__INCLUDED_

#include "Datagrama.h"

class Frame
{

public:
	Frame();
	virtual ~Frame();
	Datagrama *m_Datagrama;

private:
	string destino;
	string origem;

};
#endif // !defined(EA_C46A3B96_C973_4a47_B415_4ED89455D0E0__INCLUDED_)
