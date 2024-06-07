#include "BitmapaExt.h"

BitmapaExt::BitmapaExt(unsigned wysokosc, unsigned szerokosc) : _wysokosc{wysokosc}, _szerokosc{szerokosc}, mapa{wysokosc, std::vector<Piksel>(szerokosc, Piksel())}
{
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
            if(i != szerokosc - 1) //jeżeli nie leży na dolnym brzegu bitmapy
            {
                mapa[i][j].sasiedzi.push_back(&mapa[i + 1][j].wartosc); //połącz z dolnym sąsiadem
            }
            if(j != wysokosc - 1) //jeżeli nie leży na prawym brzegu bitmapy
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
    return mapa[x][y].wartosc;
}

bool BitmapaExt::operator() (unsigned x, unsigned y) const
{
    return mapa[x][y].wartosc;
}

std::ostream& operator<<(std::ostream& out, BitmapaExt bitMapa)
{
    for (std::vector<Piksel> wiersz : bitMapa.mapa)
    {
        for (Piksel komorka : wiersz)
        {
            out << komorka.wartosc << " ";
        }
        out << "\n";
    }
    return out;
}
