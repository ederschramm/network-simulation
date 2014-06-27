#include "src/modelo/observavel.h"
#include <QDebug>

Observavel::Observavel()
{
}

void Observavel::addObservador(Observador *observador){
    qDebug()<<"Observavel::addObservador(Observador *observador)";
    if (std::find(this->observadores.begin(),this->observadores.end(),observador)!= this->observadores.end()){
        qDebug()<<"observadores contains observador";
    } else {
        this->observadores.push_back(observador);
    }
}

void Observavel::notificaObservadores(){
    qDebug()<<"Observavel::notificaObservadores()";
    for (vector<Observador*>::iterator it = this->observadores.begin(); it != this->observadores.end(); it++){
        Observador *observador = *it;
        observador->atualiza(this);
    }
}
