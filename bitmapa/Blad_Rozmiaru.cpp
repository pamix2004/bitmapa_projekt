#include "Blad_Rozmiaru.h"

Blad_Rozmiaru::Blad_Rozmiaru()
{

}

Blad_Rozmiaru::~Blad_Rozmiaru()
{

}

const char* Blad_Rozmiaru::what() const noexcept
{
    return "Blad rozmiaru: wartosc musi byc dodatnia liczba 16bit";
}
