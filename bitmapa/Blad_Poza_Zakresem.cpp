#include "Blad_Poza_Zakresem.h"

Blad_Poza_Zakresem::Blad_Poza_Zakresem()
{

}

Blad_Poza_Zakresem::~Blad_Poza_Zakresem()
{

}

const char* Blad_Poza_Zakresem::what() const noexcept
{
    return "Blad zakresu: podany index nie nalezy do zakresu tablicy";
}
