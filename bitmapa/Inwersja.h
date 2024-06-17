#ifndef INWERSJA
#define INWERSJA
#include "Przeksztalcenie.h"
#include <vector>
/*
Klasa realizująca filtr inwersji
*/
class  Inwersja: public Przeksztalcenie
{
public:
    /*
    Metoda wykonująca inwersję na podanej jako parametr bitmapie
    @param bitmapa bitmapa do edycji
    */
    virtual void przeksztalc(BitmapaExt& bitmapa) override;

private:

};

#endif