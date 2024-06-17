#ifndef DYLATACJA_H
#define DYLATACJA_H
#include "Przeksztalcenie.h"
#include <vector>
#include "Piksel.h"
/*
Klasa realizująca filtr dylatacji
*/
class Dylatacja : public Przeksztalcenie
{
public:
    Dylatacja();
    ~Dylatacja();
    /*
    Metoda wykonująca dylatację na podanej jako parametr bitmapie
    @param bitmapa bitmapa do edycji
    */
    virtual void przeksztalc(BitmapaExt& bitmapa) override;
private:

};

#endif