#ifndef DYLATACJA_H
#define DYLATACJA_H
#include "Przeksztalcenie.h"
#include <vector>
#include "Piksel.h"
class Dylatacja : public Przeksztalcenie
{
public:
    Dylatacja();
    ~Dylatacja();
    virtual void przeksztalc(BitmapaExt& bitmapa) override;
private:

};

#endif