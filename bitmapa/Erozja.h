#ifndef EROZJA_H
#define EROZJA_H
#include "Przeksztalcenie.h"
#include <vector>
class Erozja : public Przeksztalcenie
{
public:
    Erozja();
    ~Erozja();
    virtual void przeksztalc(BitmapaExt& bitmapa) override;

private:

};

#endif