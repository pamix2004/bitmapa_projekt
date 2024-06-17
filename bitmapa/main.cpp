#include <iostream>
#include "BitmapaExt.h"
#include "Dylatacja.h"
#include "Erozja.h"
#include "Usrednianie.h"
#include "Inwersja.h"
#include "Zerowanie.h"
#include "ZlozeniePrzeksztalcen.h"

int main()
{
    //test z polecenia
    BitmapaExt bitmapa(5, 5);
    bitmapa(1, 1) = bitmapa(2, 1) = bitmapa(3, 1) = bitmapa(2, 2) = bitmapa(1, 3) = bitmapa(2, 3) = bitmapa(3, 3) = true;
    std::cout << bitmapa;
    Usrednianie u;
    Dylatacja d;
    ZlozeniePrzeksztalcen z;
        
    z.dodajPrzeksztalcenie(&u);
    z.dodajPrzeksztalcenie(&d);

    z.przeksztalc(bitmapa);
    std::cout << "\n" << bitmapa;


    //nasze testy

    //testy błędów
    /*
    BitmapaExt bitmapa(5, 5);
    bitmapa(99, 1) = 1;
    //BitmapaExt bitmapa(0, 5);
    */

   /*
    //testy przekształceń
    BitmapaExt bitmapa(7, 7);
    bitmapa(1, 3) = bitmapa(2, 2) = bitmapa(2, 3) = bitmapa(2, 4) = bitmapa(3, 1) = bitmapa(3, 2) = bitmapa(3, 3) = bitmapa(3, 4) = bitmapa(3, 5) = bitmapa(4, 2) = bitmapa(4, 3) = bitmapa(4, 4) = bitmapa(5, 3) = true;
    std::cout << bitmapa;
    Zerowanie zerowanie;
    Inwersja inwersja;
    Erozja e;
    Dylatacja d;
    Usrednianie u;
    ZlozeniePrzeksztalcen z;
    e.przeksztalc(bitmapa);
    std::cout << "\n" << bitmapa;
    u.przeksztalc(bitmapa);
    std::cout << "\n" << bitmapa;

    z.dodajPrzeksztalcenie(&d);
    z.dodajPrzeksztalcenie(&inwersja);

    z.przeksztalc(bitmapa);
    std::cout << "\n" << bitmapa;
    */

    return 0;
}