#ifndef OBSERVAVEL_H
#define OBSERVAVEL_H

#include "src/modelo/observador.h"
#include <vector>

using namespace std;

class Observador;

class Observavel
{
public:
    Observavel();
    void addObservador(Observador *observador);
    void notificaObservadores();
private:
    vector<Observador*> observadores;
};

#endif // OBSERVAVEL_H
