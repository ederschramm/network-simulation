///////////////////////////////////////////////////////////
//  IP.h
//  Implementation of the Class IP
//  Created on:      03-Jun-2014 10:16:52 AM
//  Original author: Diego Heusser
///////////////////////////////////////////////////////////

#if !defined(EA_0BD33558_D02D_4a98_AA59_990D4E786186__INCLUDED_)
#define EA_0BD33558_D02D_4a98_AA59_990D4E786186__INCLUDED_

#include <string>

using namespace std;

class IP
{

public:
	IP();
    string getEndereco();
    void setEndereco(string endereco);
private:
	string endereco;

};
#endif // !defined(EA_0BD33558_D02D_4a98_AA59_990D4E786186__INCLUDED_)
