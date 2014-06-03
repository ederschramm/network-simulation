///////////////////////////////////////////////////////////
//  Cabo.cpp
//  Implementation of the Class Cabo
//  Created on:      03-Jun-2014 10:16:48 AM
//  Original author: Diego Heusser
///////////////////////////////////////////////////////////

#include "Cabo.h"

Cabo::Cabo(){

}

void Cabo::envia(vector<string> bits, PortaRede* porta){
    if (porta == this->a){
        b->abre(bits);
    } else {
        a->abre(bits);
    }
}
