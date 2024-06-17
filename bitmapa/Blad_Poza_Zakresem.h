#ifndef BLAD_POZA_ZAKRESEM_H
#define BLAD_POZA_ZAKRESEM_H
#include <exception>

/*
Klasa pochodna po std::exception odpowiadająca błedowi przekroczenia zakresu tablicy
*/
class Blad_Poza_Zakresem : public std::exception
{
public:
    Blad_Poza_Zakresem();
    ~Blad_Poza_Zakresem();
    /*
    Przeładowana metoda wypisująca komunikat błędu
    */
    virtual const char* what() const noexcept override;
private:

};

#endif