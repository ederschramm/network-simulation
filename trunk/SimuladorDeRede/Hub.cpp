///////////////////////////////////////////////////////////
//  Hub.cpp
//  Implementation of the Class Hub
//  Created on:      03-Jun-2014 10:16:52 AM
//  Original author: Diego Heusser
///////////////////////////////////////////////////////////

#include "Hub.h"

Hub::Hub(){

}

void Hub::abrir(Frame *frame, PortaRede *porta){
    for (vector<PortaRede*>::iterator it = this->portas.begin(); it != this->portas.end(); it++){
        PortaRede* p = *it;
        if (porta != p){
            p->getCabo()->envia(frame, porta);
        }
    }
}

