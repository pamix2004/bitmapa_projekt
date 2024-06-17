#include "Zerowanie.h"

void Zerowanie::przeksztalc(BitmapaExt& bitmapa)
{
    for (std::vector<Piksel>& wiersz : bitmapa.mapa) //dla każdego piksela
    {
        for (Piksel& komorka : wiersz)
        {
            //Zerujemy
            komorka.wartosc = 0;
        }
    }
}
