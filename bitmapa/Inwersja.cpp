#include "Inwersja.h"

void Inwersja::przeksztalc(BitmapaExt& bitmapa)
{
    for (std::vector<Piksel>& wiersz : bitmapa.mapa)
    {
        for (Piksel& komorka : wiersz)
        {
            //Negujemy wartosc
            komorka.wartosc = !(komorka.wartosc);
        }
       
     
    }
}
