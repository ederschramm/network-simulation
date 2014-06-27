#ifndef OBSERVADOR_H
#define OBSERVADOR_H

#include "src/modelo/observavel.h"

class Observavel;

class Observador
{
public:
    Observador();
    virtual void atualiza(Observavel *observavel) = 0;
};

#endif // OBSERVADOR_H
