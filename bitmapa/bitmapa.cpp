#include <iostream>
#include "BitmapaExt.h"
int main()
{
    BitmapaExt bitmapa(3, 5);
    std::cout << bitmapa;
    std::cout << "Hello World!\n";
    bitmapa(1, 1) = true;
    std::cout << bitmapa;
    for (auto &&i : bitmapa.mapa[1][1].sasiedzi)
    {
        std::cout << *i << " ";
    }
    
    return 0;
}