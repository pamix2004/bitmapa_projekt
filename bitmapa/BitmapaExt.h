#ifndef BITMAPAEXT_H
#define BITMAPAEXT_H
#include "C_Bitmapa.h"
#include "Piksel.h"
#include <iostream>
#include <vector>
class BitmapaExt : public C_Bitmapa
{
public:
    BitmapaExt(unsigned wysokosc, unsigned szerokosc);
    virtual ~BitmapaExt();
    virtual unsigned length() const override;
    virtual unsigned width() const override;
    virtual bool& operator() (unsigned x, unsigned y) override;
    virtual bool operator() (unsigned x, unsigned y) const override;
    friend std::ostream& operator<<(std::ostream& out, BitmapaExt bitMapa);
        std::vector<std::vector<Piksel>> mapa;

private:
    unsigned _szerokosc;
    unsigned _wysokosc;
    //bitmapa -> 0 = kolor biały, 1 = kolor czarny
    //std::vector<std::vector<bool>> mapa; //zostawiam jakby nie wypaliło
    //std::vector<std::vector<Piksel>> mapa;
};

#endif