#include "Piksel.h"

Piksel::Piksel() : wartosc{0}
{

}

Piksel::~Piksel()
{

}
#include <iostream>
int Piksel::iloscSasiednichCzarnychPikseli()
{
    int ilosc{};
    for (int i = 0; i < sasiedzi.size(); i++)
    {
        if(*sasiedzi[i] > 0)
        {
            ilosc++;
        }
    }
    return ilosc;
}
