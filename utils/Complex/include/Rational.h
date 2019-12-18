#pragma once
#include <iostream>

class Rational
{
    public:
        Rational(int l, int m) : _l(l), _m(m) {}
        void Print() const {std::cout << _l << "/" << _m << std::endl;}
        Rational() = default;
        Rational operator * (const double& number)
        {
            Rational result;
            result._l = _l * number;
            result._m = _m;
            return result;
        }
        operator double() const {return (double)_l/(double)_m;}
    private:
        int _l;
        int _m;
};