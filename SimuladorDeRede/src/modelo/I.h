///////////////////////////////////////////////////////////
//  I.h
//  Implementation of the Interface I
//  Created on:      03-Jun-2014 10:16:52 AM
//  Original author: Diego Heusser
///////////////////////////////////////////////////////////

#if !defined(EA_3A866053_89D6_4867_86FA_8C1FE5A6D920__INCLUDED_)
#define EA_3A866053_89D6_4867_86FA_8C1FE5A6D920__INCLUDED_

#include "Datagrama.h"

class I
{

public:
    virtual void abrir(Datagrama* datagrama) =0;

};
#endif // !defined(EA_3A866053_89D6_4867_86FA_8C1FE5A6D920__INCLUDED_)
