#ifndef FRAME_H
#define FRAME_H

#include "src/modelo/datagrama.h"
#include <string>

using namespace std;

class Frame
{
public:
    Frame();
    string getOrigem();
    void setOrigem(string origem);
    string getDestino();
    void setDestino(string destino);
    Datagrama* getDado();
    void setDado(Datagrama *dado);
private:
    string origem;
    string destino;
    Datagrama* dado;
};

#endif // FRAME_H
