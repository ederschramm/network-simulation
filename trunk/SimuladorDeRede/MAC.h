///////////////////////////////////////////////////////////
//  MAC.h
//  Implementation of the Class MAC
//  Created on:      03-Jun-2014 10:16:53 AM
//  Original author: Diego Heusser
///////////////////////////////////////////////////////////

#if !defined(EA_70D07AE8_FA51_4719_9A98_A267C3401557__INCLUDED_)
#define EA_70D07AE8_FA51_4719_9A98_A267C3401557__INCLUDED_

#include <string>

using namespace std;

class MAC
{

public:
	MAC();
    string getEnderco();
    void setEndereco(string endereco);
private:
	string endereco;
};
#endif // !defined(EA_70D07AE8_FA51_4719_9A98_A267C3401557__INCLUDED_)
