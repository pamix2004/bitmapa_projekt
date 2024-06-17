#ifndef EROZJA_H
#define EROZJA_H
#include "Przeksztalcenie.h"
#include <vector>
/*
Klasa realizująca filtr erozji
*/
class Erozja : public Przeksztalcenie
{
public:
    Erozja();
    ~Erozja();
    /*
    Metoda wykonująca erozję na podanej jako parametr bitmapie
    @param bitmapa bitmapa do edycji
    */
    virtual void przeksztalc(BitmapaExt& bitmapa) override;

private:

};

#endif