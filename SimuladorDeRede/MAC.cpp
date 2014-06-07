///////////////////////////////////////////////////////////
//  MAC.cpp
//  Implementation of the Class MAC
//  Created on:      03-Jun-2014 10:16:53 AM
//  Original author: Diego Heusser
///////////////////////////////////////////////////////////

#include "MAC.h"

MAC::MAC(){

}

string MAC::getEndereco(){
    return this->endereco;
}

void MAC::setEndereco(string endereco){
    this->endereco = endereco;
}
