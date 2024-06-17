#ifndef PIKSEL_H
#define PIKSEL_H
#include <vector>
/*
Klasa obsługująca pojedynczą komórkę bitmapy
*/
class Piksel
{
public:
    Piksel();
    ~Piksel();
    /*
    Metoda zwraca ilość sąsiednich pikseli koloru czarnego
    */
    int iloscSasiednichCzarnychPikseli();
    /*
    Metoda zwraca ilość sąsiednich pikseli koloru czarnego
    */
    int iloscSasiednichBialychPikseli();
    std::vector<bool*> sasiedzi; //wektor adresów komórek sąsiadów umożliwiający automatyczne aktualizowanie wartości komórek sąsiednich
    bool wartosc; //kolor piksela 0 - biały, 1 - czarny
private:
};

#endif