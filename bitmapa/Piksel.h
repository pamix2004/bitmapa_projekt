#ifndef PIKSEL_H
#define PIKSEL_H
#include <vector>
class Piksel
{
public:
    Piksel();
    ~Piksel();
    int iloscSasiednichCzarnychPikseli(); //no clue jak nazwać metodę
    std::vector<bool*> sasiedzi;
    bool wartosc;
private:
};

#endif