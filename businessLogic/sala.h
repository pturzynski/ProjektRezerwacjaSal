#ifndef SALA_H
#define SALA_H

#include <string>

class Sala
{
protected:
    std::string numer;
    int pojemnosc;
public:
    Sala(const std::string &numer, int pojemnosc);
};

#endif // SALA_H
