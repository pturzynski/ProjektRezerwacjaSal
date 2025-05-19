#ifndef SYSTEMREZERWACJI_H
#define SYSTEMREZERWACJI_H
#include "rezerwacja.h"
#include "businessLogic_global.h"

class BUSINESSLOGIC_EXPORT systemRezerwacji
{
public:
    systemRezerwacji();
    void dodajSale();
    void usunSale();
    bool czySalaWolna();
    void wyswietlWszystkieSale();
};

#endif // SYSTEMREZERWACJI_H
