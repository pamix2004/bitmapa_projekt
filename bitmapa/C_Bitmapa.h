#ifndef C_BITMAPA_H
#define C_BITMAPA_H

class C_Bitmapa
{
public:
    C_Bitmapa();
    virtual ~C_Bitmapa();
    virtual unsigned length() const = 0;
    virtual unsigned width() const = 0;
    virtual bool& operator() (unsigned x, unsigned y) = 0;
    virtual bool operator() (unsigned x, unsigned y) const = 0;
private:

};

#endif