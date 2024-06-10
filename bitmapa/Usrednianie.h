#ifndef USREDNIANIE_H
#define USREDNIANIE_H
#include "Przeksztalcenie.h"
class Usrednianie : public Przeksztalcenie
{
public:
    Usrednianie();
    ~Usrednianie();
    virtual void przeksztalc(BitmapaExt& bitmapa) override;
private:

};

#endif