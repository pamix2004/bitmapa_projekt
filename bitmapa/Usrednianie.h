#ifndef USREDNIANIE_H
#define USREDNIANIE_H
#include "Przeksztalcenie.h"
/*
Klasa realizująca filtr uśredniania
*/
class Usrednianie : public Przeksztalcenie
{
public:
    Usrednianie();
    ~Usrednianie();
    /*
    Metoda wykonująca uśrednianie na podanej jako parametr bitmapie
    @param bitmapa bitmapa do edycji
    */
    virtual void przeksztalc(BitmapaExt& bitmapa) override;
private:

};

#endif