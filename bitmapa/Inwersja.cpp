#include "Inwersja.h"

void Inwersja::przeksztalc(BitmapaExt& bitmapa)
{
    for (std::vector<Piksel>& wiersz : bitmapa.mapa) //dla każdego elementu bitmapy
    {
        for (Piksel& komorka : wiersz)
        {
            //Negujemy wartosc
            komorka.wartosc = !(komorka.wartosc);
        }  
    }
}
