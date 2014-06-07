///////////////////////////////////////////////////////////
//  Switch.cpp
//  Implementation of the Class Switch
//  Created on:      03-Jun-2014 10:16:56 AM
//  Original author: Diego Heusser
///////////////////////////////////////////////////////////

#include "Switch.h"

Switch::Switch(){

}

void Switch::abrir(Frame *frame, PortaRede *porta){
    this->atualizaTabela(frame->getOrigem(),porta);
    if (frame->getDestino()!= "0"){
        if (frame->getDestino() != "FF:FF:FF:FF:FF:FF"){
            map<string,PortaRede*>::iterator it = this->tabelaMAC.find(frame->getDestino());
            if (it != this->tabelaMAC.end()){
                PortaRede* p = it->second;
                p->getCabo()->envia(frame,p);
            } else {
                this->broadcast();
                map<string,PortaRede*>::iterator it = this->tabelaMAC.find(frame->getDestino());
                if (it != this->tabelaMAC.end()){
                    PortaRede* p = it->second;
                    p->getCabo()->envia(frame,p);
                }
            }
        } else {
            // Resposta ao broadcast
            for (vector<PortaRede*>::iterator it = this->portas.begin(); it != this->portas.end(); it++){
                PortaRede* p = *it;
                p->getCabo()->envia(frame, p);
            }
        }
    }
}

void Switch::broadcast(){
    Frame* frame = new Frame();
    frame->setDestino("FF:FF:FF:FF:FF:FF");
    for(vector<PortaRede*>::iterator it = this->portas.begin(); it != this->portas.end(); it++){
        PortaRede* p = *it;
        p->getCabo()->envia(frame,p);
    }
}

void Switch::atualizaTabela(string mac, PortaRede *porta){
    map<string,PortaRede*>::iterator it = this->tabelaMAC.find(mac);
    if (it == this->tabelaMAC.end()){
        this->tabelaMAC.insert(pair<string, PortaRede*>(mac, porta));
    }
}
