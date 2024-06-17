#ifndef ZEROWANIE
#define ZEROWANIE
#include "Przeksztalcenie.h"
#include <vector>
/*
Klasa zerująca wszystkie wartości bitmapy
*/
class  Zerowanie : public Przeksztalcenie
{
public:
    /*
    Metoda wykonująca zerowanie na podanej jako parametr bitmapie
    @param bitmapa bitmapa do edycji
    */
    virtual void przeksztalc(BitmapaExt& bitmapa) override;

private:

};

#endif