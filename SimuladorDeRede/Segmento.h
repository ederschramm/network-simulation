///////////////////////////////////////////////////////////
//  Segmento.h
//  Implementation of the Class Segmento
//  Created on:      03-Jun-2014 10:16:55 AM
//  Original author: Diego Heusser
///////////////////////////////////////////////////////////

#if !defined(EA_91319C17_77A2_4bf1_BA78_856D3875544C__INCLUDED_)
#define EA_91319C17_77A2_4bf1_BA78_856D3875544C__INCLUDED_

#include "Dado.h"
#include <string>

class Segmento
{

public:
	Segmento();
    string getDestino();
    void setDestino(string destino);
    string getOrigem();
    void setOrigem(string origem);
    Dado* getDado();
    void setDado(Dado* dado);
private:
	string destino;
	string origem;
    Dado* dado;

};
#endif // !defined(EA_91319C17_77A2_4bf1_BA78_856D3875544C__INCLUDED_)
