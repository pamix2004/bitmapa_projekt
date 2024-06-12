#include "Zerowanie.h"

void Zerowanie::przeksztalc(BitmapaExt& bitmapa)
{
    for (std::vector<Piksel>& wiersz : bitmapa.mapa)
    {
        for (Piksel& komorka : wiersz)
        {
            //Zerujemy
            komorka.wartosc = 0;
        }
    }
}
