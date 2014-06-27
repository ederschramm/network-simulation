#ifndef DADO_H
#define DADO_H

#include <string>

using namespace std;

class Dado
{
public:
    Dado();
    string getDados();
    void setDados(string dados);
private:
    string dados;
};

#endif // DADO_H
