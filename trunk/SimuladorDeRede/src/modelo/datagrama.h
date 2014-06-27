#ifndef DATAGRAMA_H
#define DATAGRAMA_H

#include "src/modelo/segmento.h"
#include <string>

using namespace std;

class Datagrama
{
public:
    Datagrama();
    string getOrigem();
    void setOrigem(string origem);
    string getDestino();
    void setDestino(string destino);
    Segmento* getDado();
    void setDado(Segmento *dado);
private:
    string origem;
    string destino;
    Segmento *dado;
};

#endif // DATAGRAMA_H
