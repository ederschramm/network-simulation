///////////////////////////////////////////////////////////
//  Datagrama.h
//  Implementation of the Class Datagrama
//  Created on:      03-Jun-2014 10:16:50 AM
//  Original author: Diego Heusser
///////////////////////////////////////////////////////////

#if !defined(EA_417495C4_62C2_4a6c_868E_7618EB2DF7D6__INCLUDED_)
#define EA_417495C4_62C2_4a6c_868E_7618EB2DF7D6__INCLUDED_

#include "Segmento.h"
#include <string>

using namespace std;

class Datagrama
{

public:
	Datagrama();
    string getDestino();
    void setDestino(string destino);
    string getOrigem();
    void setOrigem(string origem);
    Segmento* getDado();
    void setDado(Segmento* dado);
private:
	string destino;
	string origem;
    Segmento* dado;

};
#endif // !defined(EA_417495C4_62C2_4a6c_868E_7618EB2DF7D6__INCLUDED_)
