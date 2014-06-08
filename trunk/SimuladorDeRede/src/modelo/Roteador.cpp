///////////////////////////////////////////////////////////
//  Roteador.cpp
//  Implementation of the Class Roteador
//  Created on:      03-Jun-2014 10:16:55 AM
//  Original author: Diego Heusser
///////////////////////////////////////////////////////////

#include "Roteador.h"

Roteador::Roteador(){

}

void Roteador::abrir(Datagrama *datagrama){

}

void Roteador::abrir(Frame *frame, PortaRede *porta){
    PortaRedeIP *portaIP = (PortaRedeIP*)porta;
    if (frame->getDestino() != "FF:FF:FF:FF:FF"){

    } else {
        //resposta ao broadcast
        Frame* f = new Frame();
        f->setDestino("0");
        f->setOrigem(portaIP->getMac());
        porta->getCabo()->envia(f,portaIP);
    }
}

