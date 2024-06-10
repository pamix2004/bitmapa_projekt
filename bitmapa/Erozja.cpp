#include "Erozja.h"

Erozja::Erozja()
{

}

Erozja::~Erozja()
{

}

void Erozja::przeksztalc(BitmapaExt& bitmapa)
{
    std::vector<bool*> doZamiany;
    for(int i = 0; i < bitmapa.length(); i++)
    {
        for(int j = 0; j < bitmapa.width(); j++) //dla każdej komórki mapy
        {
            bool czySasiadujeZBialymPikselem;
            if(bitmapa.mapa[i][j].iloscSasiednichBialychPikseli() > 0 and bitmapa.mapa[i][j].wartosc == 1) //jeżeli sąsiaduje z białym pikselem i jest czarnym pikselem
            {
                doZamiany.push_back(&bitmapa.mapa[i][j].wartosc); //zapisz adres wartości tego piksela
            }
        }
    } 
    for (int i = 0; i < doZamiany.size(); i++)
    {
        *doZamiany[i] = 0; //po sprawdzeniu całej mapy, nadpisz znalezione piksele
    }
    
    
}