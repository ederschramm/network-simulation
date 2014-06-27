#ifndef FRAME_H
#define FRAME_H

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
private:
    string origem;
    string destino;
};

#endif // FRAME_H
