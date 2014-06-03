///////////////////////////////////////////////////////////
//  NI.h
//  Implementation of the Interface NI
//  Created on:      03-Jun-2014 10:16:54 AM
//  Original author: Diego Heusser
///////////////////////////////////////////////////////////

#if !defined(EA_C0AD680C_F450_422b_BE86_16849595FA15__INCLUDED_)
#define EA_C0AD680C_F450_422b_BE86_16849595FA15__INCLUDED_

#include "Frame.h"

class NI
{

public:
    virtual void abrir(Frame* frame) =0;

};
#endif // !defined(EA_C0AD680C_F450_422b_BE86_16849595FA15__INCLUDED_)
