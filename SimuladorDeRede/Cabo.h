///////////////////////////////////////////////////////////
//  Cabo.h
//  Implementation of the Class Cabo
//  Created on:      03-Jun-2014 10:16:48 AM
//  Original author: Diego Heusser
///////////////////////////////////////////////////////////

#if !defined(EA_314CE177_3463_413a_BD07_CC3BE530A997__INCLUDED_)
#define EA_314CE177_3463_413a_BD07_CC3BE530A997__INCLUDED_

#include "PortaRede.h"
#include <string>
#include <vector>

using namespace std;

class PortaRede;

class Cabo
{

public:
	Cabo();
    void envia(vector<string> bits, PortaRede* porta);

private:
	string tipo;
    PortaRede* a;
    PortaRede* b;

};
#endif // !defined(EA_314CE177_3463_413a_BD07_CC3BE530A997__INCLUDED_)
