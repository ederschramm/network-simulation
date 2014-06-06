///////////////////////////////////////////////////////////
//  Dado.h
//  Implementation of the Class Dado
//  Created on:      03-Jun-2014 10:16:49 AM
//  Original author: Diego Heusser
///////////////////////////////////////////////////////////

#if !defined(EA_F22FCCE9_E41A_43a0_8528_80B4E59CB7DF__INCLUDED_)
#define EA_F22FCCE9_E41A_43a0_8528_80B4E59CB7DF__INCLUDED_

#include <string>

using namespace std;

class Dado
{

public:
	Dado();
    string getMensagem();
    void setMensagem(string mensagem);
private:
	string mensagem;

};
#endif // !defined(EA_F22FCCE9_E41A_43a0_8528_80B4E59CB7DF__INCLUDED_)