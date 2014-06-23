#include "interfacehub.h"
#include <iostream>

InterfaceHub::InterfaceHub()
{
    frame = new Frame();
}

void InterfaceHub::enviar(Frame *frame){
    //this->cabo->setFrame(frame);
}

void InterfaceHub::enviar(Datagrama *datagrama){

}

void InterfaceHub::receber(Frame *frame){

}

void InterfaceHub::receber(Datagrama *datagrama){
    //cout << "passou aqui" << endl;
    //this->frame = new Frame();
    //this->frame->num = 5;
    //enviar(frame);
}
