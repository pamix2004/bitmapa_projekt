#ifndef PRZEKSZTALCENIE_H
#define PRZEKSZTALCENIE_H
#include "BitmapaExt.h"
/*
Klasa wirtualna zawierająca metody wszystkich przekształceń
*/
class Przeksztalcenie
{
public:
    Przeksztalcenie();
    ~Przeksztalcenie();
    /*
    Metoda realizująca konkretne dla danego przekształcenia przekształcenie
    */
    virtual void przeksztalc(BitmapaExt& bitmapa) = 0;
private:

};

#endif