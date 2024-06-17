#include "Piksel.h"
#include <iostream>

Piksel::Piksel() : wartosc{0} //podczas tworzenia piksela, zawsze ustaw jego wartość początkową na 0
{

}

Piksel::~Piksel()
{

}

int Piksel::iloscSasiednichCzarnychPikseli()
{
    int ilosc{};
    for (int i = 0; i < sasiedzi.size(); i++) //przejdź przez listę sąsiadów
    {
        if(*sasiedzi[i] > 0) //jeżeli sąsiad jest czarnym pikselem
        {
            ilosc++; //zwiększ ich ilość
        }
    }
    return ilosc;
}

int Piksel::iloscSasiednichBialychPikseli()
{
    int ilosc{};
    for (int i = 0; i < sasiedzi.size(); i++) //przejdź przez listę sąsiadów
    {
        if(*sasiedzi[i] == 0) //jeżeli sąsiad jest białym pikselem
        {
            ilosc++; //zwiększ ich ilość
        }
    }
    return ilosc;
}
