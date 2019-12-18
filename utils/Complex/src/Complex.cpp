#include "Complex.h"


void Complex::Print() const
{
    std::cout << _re << "+i" << _im << std::endl;
}

double Complex::Modulo(Complex object)
{
    return sqrt(pow(object._re, 2) + pow(object._im, 2));
}


