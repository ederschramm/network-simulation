///////////////////////////////////////////////////////////
//  Frame.h
//  Implementation of the Class Frame
//  Created on:      03-Jun-2014 10:16:51 AM
//  Original author: Diego Heusser
///////////////////////////////////////////////////////////

#if !defined(EA_C46A3B96_C973_4a47_B415_4ED89455D0E0__INCLUDED_)
#define EA_C46A3B96_C973_4a47_B415_4ED89455D0E0__INCLUDED_

#include "Datagrama.h"
#include <string>

using namespace std;

class Frame
{

public:
	Frame();
    string getDestino();
    void setDestino(string destino);
    string getOrigem();
    void setOrigem(string origem);
    Datagrama* getDado();
    void setDado(Datagrama* dado);
private:
	string destino;
	string origem;
    Datagrama* dado;

};
#endif // !defined(EA_C46A3B96_C973_4a47_B415_4ED89455D0E0__INCLUDED_)
