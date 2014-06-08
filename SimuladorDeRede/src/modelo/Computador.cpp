///////////////////////////////////////////////////////////
//  Computador.cpp
//  Implementation of the Class Computador
//  Created on:      03-Jun-2014 10:16:49 AM
//  Original author: Diego Heusser
///////////////////////////////////////////////////////////

#include "Computador.h"


Computador::Computador(){

}

void Computador::abrir(Datagrama *datagrama){
}

void Computador::abrir(Segmento *segmento){

}

void Computador::abrir(Dado *dado){

}

void Computador::abrir(Frame *frame, PortaRede *porta){
    PortaRedeIP *portaIP = (PortaRedeIP*)porta;
    if (frame->getDestino() != "FF:FF:FF:FF:FF:FF"){
        if (frame->getDestino()==portaIP->getMac()){
            Datagrama* datagrama = frame->getDado();
            this->abrir(datagrama);
        }
    } else {
        //Resposta ao broadcast
        Frame* f = new Frame();
        f->setDestino("0");
        f->setOrigem(portaIP->getMac());
        porta->getCabo()->envia(f,portaIP);
    }
}
