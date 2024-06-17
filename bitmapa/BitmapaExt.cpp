#include "BitmapaExt.h"
#include "Blad_Rozmiaru.h"
#include "Blad_Poza_Zakresem.h"
BitmapaExt::BitmapaExt(unsigned wysokosc, unsigned szerokosc) : _wysokosc{wysokosc}, _szerokosc{szerokosc}
{
    try
    {
        const int MAX_SIZE = 65535; //16bit, ograniczenie wielkości, ponieważ gdyby użytkownik wprowadził liczbę ujemną, zmienna robi underflow w liczby bliskie limitu zmiennej
        if(_wysokosc >=  MAX_SIZE or _szerokosc >= MAX_SIZE or _wysokosc ==  0 || _szerokosc == 0) //jeżeli wymiar bitapy jest równy 0 lub przekracza limit
        {
            Blad_Rozmiaru e;
            throw e; //rzuć błędem
        }
        mapa = std::vector<std::vector<Piksel>>(_wysokosc, std::vector<Piksel>(_szerokosc, Piksel())); //utwórz bitmapę
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << '\n';
        exit(-1); //zakoncz program
    }
    
    //uzupełnij wektor sąsiedztwa
    for(int i = 0; i < wysokosc; i++) 
    {
        for(int j = 0; j < szerokosc; j++)
        {
            if(i != 0) //jeżeli nie leży na górnym brzegu bitmapy
            {
                mapa[i][j].sasiedzi.push_back(&mapa[i - 1][j].wartosc); //połącz z górnym sąsiadem
            }
            if(j != 0) //jeżeli nie leży na lewym brzegu bitmapy
            {
                mapa[i][j].sasiedzi.push_back(&mapa[i][j - 1].wartosc); //połącz z lewym sąsiadem
            }
            if(i != wysokosc - 1) //jeżeli nie leży na dolnym brzegu bitmapy
            {
                mapa[i][j].sasiedzi.push_back(&mapa[i + 1][j].wartosc); //połącz z dolnym sąsiadem
            }
            if(j != szerokosc - 1) //jeżeli nie leży na prawym brzegu bitmapy
            {
                mapa[i][j].sasiedzi.push_back(&mapa[i][j + 1].wartosc); //połącz z prawym sąsiadem
            }
        }
    }
}

BitmapaExt::~BitmapaExt()
{

}

unsigned BitmapaExt::length() const
{
    return _wysokosc;
}

unsigned BitmapaExt::width() const
{
    return _szerokosc;
}

bool& BitmapaExt::operator() (unsigned x, unsigned y)
{
    try
    {
        if(x >= _wysokosc or y >= _szerokosc) //jeżeli podany index nie mależy do tablicy
        {
            Blad_Poza_Zakresem e;
            throw e;
        }
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << '\n';
        exit(-1); //zakoncz program
    }
    
    return mapa[x][y].wartosc;
}

bool BitmapaExt::operator() (unsigned x, unsigned y) const
{
    try
    {
        if(x >= _wysokosc or y >= _szerokosc) //jeżeli podany index nie mależy do tablicy
        {
            Blad_Poza_Zakresem e;
            throw e;
        }
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << '\n';
        exit(-1); //zakoncz program
    }
    
    return mapa[x][y].wartosc;
}

std::ostream& operator<<(std::ostream& out, BitmapaExt bitMapa)
{
    for (std::vector<Piksel> wiersz : bitMapa.mapa) //przejdź przez każdy element bitmapy
    {
        for (Piksel komorka : wiersz)
        {
            out << komorka.wartosc << " "; //zapisz go do wyjścia
        }
        out << "\n";
    }
    return out; //zwróć strumień wyjściowy
}
