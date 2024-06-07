#include "Dylatacja.h"

Dylatacja::Dylatacja()
{

}

Dylatacja::~Dylatacja()
{

}
void Dylatacja::przeksztalc(BitmapaExt& bitmapa)
{
    std::vector<bool*> doZamiany;
    for(int i = 0; i < bitmapa.length(); i++)
    {
        for(int j = 0; j < bitmapa.width(); j++) //dla każdej komórki mapy
        {
            if(bitmapa.mapa[i][j].iloscSasiednichCzarnychPikseli() > 0 and bitmapa.mapa[i][j].wartosc == 0) //jeżeli sąsiaduje z czarnym pikselem i jest białym pikselem
            {
                doZamiany.push_back(&bitmapa.mapa[i][j].wartosc); //zapisz adres wartości tego piksela
            }
        }
    } 
    for (int i = 0; i < doZamiany.size(); i++)
    {
        *doZamiany[i] = 1; //po sprawdzeniu całej mapy, nadpisz znalezione piksele
    }
    
    
}