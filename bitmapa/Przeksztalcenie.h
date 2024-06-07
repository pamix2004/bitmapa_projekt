#ifndef PRZEKSZTALCENIE_H
#define PRZEKSZTALCENIE_H
#include "BitmapaExt.h"

class Przeksztalcenie
{
public:
    Przeksztalcenie();
    ~Przeksztalcenie();
    virtual void przeksztalc(BitmapaExt& bitmapa) = 0;
private:

};

#endif