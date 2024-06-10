#include <iostream>
#include "BitmapaExt.h"
#include "Dylatacja.h"
#include "Erozja.h"
#include "Usrednianie.h"
int main()
{
    BitmapaExt bitmapa(7, 7);
    bitmapa(1, 3) = bitmapa(2, 2) = bitmapa(2, 3) = bitmapa(2, 4) = bitmapa(3, 1) = bitmapa(3, 2) = bitmapa(3, 3) = bitmapa(3, 4) = bitmapa(3, 5) = bitmapa(4, 2) = bitmapa(4, 3) = bitmapa(4, 4) = bitmapa(5, 3) = true;
    //bitmapa(1, 1) = bitmapa(2, 1) = bitmapa(3, 1) = bitmapa(2, 2) = bitmapa(1, 3) = bitmapa(2, 3) = bitmapa(3, 3) = true;
    std::cout << bitmapa;
    Dylatacja dyl;
    Erozja er;
    Usrednianie usr;
    //er.przeksztalc(bitmapa);
    //dyl.przeksztalc(bitmapa);
    usr.przeksztalc(bitmapa);
    std::cout << "\n" << bitmapa;
    return 0;
}