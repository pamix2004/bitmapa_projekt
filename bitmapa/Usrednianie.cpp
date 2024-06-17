#include "Usrednianie.h"

Usrednianie::Usrednianie()
{

}

Usrednianie::~Usrednianie()
{

}
void Usrednianie::przeksztalc(BitmapaExt& bitmapa)
{
    std::vector<bool*> doZamiany; //lista pikseli wymagających zamiany
    for(int i = 0; i < bitmapa.length(); i++) //przejdź przez całą bitmapę
    {
        for(int j = 0; j < bitmapa.width(); j++) //dla każdej komórki mapy
        {
            if((bitmapa.mapa[i][j].iloscSasiednichCzarnychPikseli() > 2 and bitmapa.mapa[i][j].wartosc == 0) or (bitmapa.mapa[i][j].iloscSasiednichBialychPikseli() > 2 and bitmapa.mapa[i][j].wartosc == 1)) //jeżeli sąsiaduje z więcej niż dwoma pikselami przeciwnego koloru
            {
                doZamiany.push_back(&bitmapa.mapa[i][j].wartosc); //zapisz adres wartości tego piksela
            }
        }
    } 
    for (int i = 0; i < doZamiany.size(); i++)
    {
        
        *doZamiany[i] = !(*doZamiany[i]); //ustaw kolor piksela na przeciwny do obecnego
    }
}