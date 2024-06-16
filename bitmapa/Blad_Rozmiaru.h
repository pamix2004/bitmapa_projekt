#ifndef BLAD_ROZMIARU_H
#define BLAD_ROZMIARU_H
#include <exception>


class Blad_Rozmiaru : public std::exception
{
public:
    Blad_Rozmiaru();
    ~Blad_Rozmiaru();
    virtual const char* what() const noexcept override;
private:

};

#endif