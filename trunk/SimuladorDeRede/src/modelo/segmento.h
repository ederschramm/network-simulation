#ifndef SEGMENTO_H
#define SEGMENTO_H

#include "src/modelo/dado.h"
#include <string>

using namespace std;

class Segmento
{
public:
    Segmento();
    string getOrigem();
    void setOrigem(string origem);
    string getDestino();
    void setDestino(string destino);
    Dado* getDado();
    void setDado(Dado *dado);
private:
    string origem;
    string destino;
    Dado *dado;
};

#endif // SEGMENTO_H
