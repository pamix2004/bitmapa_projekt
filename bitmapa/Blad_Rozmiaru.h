#ifndef BLAD_ROZMIARU_H
#define BLAD_ROZMIARU_H
#include <exception>
/*
Klasa pochodna po std::exception odpowiadająca błednemu rozmiarowi tablicy
*/
class Blad_Rozmiaru : public std::exception
{
public:
    Blad_Rozmiaru();
    ~Blad_Rozmiaru();
    /*
    Przeładowana metoda wypisująca komunikat błędu
    */
    virtual const char* what() const noexcept override;
private:

};

#endif