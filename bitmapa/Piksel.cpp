#include "Piksel.h"
#include <iostream>

Piksel::Piksel() : wartosc{0}
{

}

Piksel::~Piksel()
{

}

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

int Piksel::iloscSasiednichBialychPikseli()
{
    int ilosc{};
    for (int i = 0; i < sasiedzi.size(); i++)
    {
        if(*sasiedzi[i] == 0)
        {
            ilosc++;
        }
    }
    return ilosc;
}
