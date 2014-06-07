///////////////////////////////////////////////////////////
//  IP.cpp
//  Implementation of the Class IP
//  Created on:      03-Jun-2014 10:16:53 AM
//  Original author: Diego Heusser
///////////////////////////////////////////////////////////

#include "IP.h"

IP::IP(){

}

string IP::getEndereco(){
    return this->endereco;
}

void IP::setEndereco(string endereco){
    this->endereco = endereco;
}
