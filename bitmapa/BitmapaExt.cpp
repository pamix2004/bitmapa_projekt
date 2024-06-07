#include "BitmapaExt.h"

BitmapaExt::BitmapaExt(unsigned wysokosc, unsigned szerokosc) : _wysokosc{wysokosc}, _szerokosc{szerokosc}, mapa{wysokosc, std::vector<bool>(szerokosc, 0)}
{

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
    //return mapa[x][y]; z jakiś niewyjaśnionych przyczyn nie chce mi zwrócić referencji, do naprawy
}

bool BitmapaExt::operator() (unsigned x, unsigned y) const
{
    return mapa[x][y];
}

std::ostream& operator<<(std::ostream& out, BitmapaExt bitMapa)
{
    for (std::vector<bool> wiersz : bitMapa.mapa)
    {
        for (bool komorka : wiersz)
        {
            out << komorka << " ";
        }
        out << "\n";
    }
    return out;
}
