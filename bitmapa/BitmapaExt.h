#ifndef BITMAPAEXT_H
#define BITMAPAEXT_H
#include "C_Bitmapa.h"
#include "Piksel.h"
#include <iostream>
#include <vector>
/*
Klasa pochodna po klasie wirtualnej opisująca strukturę bitmapy 2D
@param wysokosc wymiar y bitmapy
@param szerokosc wymiar x bitmapy
*/
class BitmapaExt : public C_Bitmapa
{
public:
    BitmapaExt(unsigned wysokosc, unsigned szerokosc);
    virtual ~BitmapaExt();
    /*
    Metoda zwracająca stałą wysokość bitmapy
    @return wymiar y bitmapy
    */
    virtual unsigned length() const override;
    /*
    Metoda zwracająca stałą szerokość bitmapy
    @return wymiar x bitmapy
    */
    virtual unsigned width() const override;
    /*
    Przeładowanie operatora () zwracające referencję do konkretnego indexu bitmapy w celach edycji
    @param x pierwszy index bitmapy
    @param y drugi index bitmapy
    @return referencja do wartości podanej komórki bitmapy
    */
    virtual bool& operator() (unsigned x, unsigned y) override;
    /*
    Przeładowanie operatora () zwracające stałą wartość konkretnego indexu bitmapy niemożliwą do edycji
    @param x pierwszy index bitmapy
    @param y drugi index bitmapy
    @return wartośź podanej komórki bitmapy
    */
    virtual bool operator() (unsigned x, unsigned y) const override;
    /*
    Przeładowanie operatora << strumienia wyjściowego jako friend class umożliwiające wypisywanie poprzez (cout << bitmapa) zamiast (bitmapa << cout)
    @param out strumień wyjściowy po lewej stronie operatora
    @param bitMapa obiekt klasy BitmapaExt po prawej stronie operatora
    */
    friend std::ostream& operator<<(std::ostream& out, BitmapaExt bitMapa);
    //Wewnętrzna tablica przechowująca wygląd tablicy
    //bitmapa -> 0 = kolor biały, 1 = kolor czarny
    std::vector<std::vector<Piksel>> mapa;

private:
    unsigned _szerokosc;
    unsigned _wysokosc;
};

#endif