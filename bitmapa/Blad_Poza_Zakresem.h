#ifndef BLAD_POZA_ZAKRESEM_H
#define BLAD_POZA_ZAKRESEM_H
#include <exception>

class Blad_Poza_Zakresem : public std::exception
{
public:
    Blad_Poza_Zakresem();
    ~Blad_Poza_Zakresem();
    virtual const char* what() const noexcept override;
private:

};

#endif