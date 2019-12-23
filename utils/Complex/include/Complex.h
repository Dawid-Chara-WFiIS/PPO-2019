#pragma once
#include <iostream>
#include "Rational.h"
#include <cmath>

class Complex
{
    public:
        friend std::ostream & operator << (std::ostream &out, Complex& complex);
        static double Modulo(Complex);
        Complex(const double re, const double im) : _re(re), _im(im) {}
        Complex() = default;
        Complex(const double& number) : _re(number), _im(0) {}
        Complex(const Rational& rationalObject): _re((double)rationalObject), _im(0) {}
        void Print() const;
        double Im() const {return _im;}
        explicit operator double() const {return _re;}
        Complex operator + (const Complex& object)
        {
            Complex result;
            result._re = _re + object._re;
            result._im = _im + object._im;
            return result;
        }
        Complex operator + (const double& number)
        {
            Complex result;
            result._re = _re + number;
            result._im = _im;
            return result;
        }
        Complex operator * (const Rational& object)
        {
            Complex result;
            result._re = _re * (double) object;
            result._im = _im * (double) object;
            return result;
        }
        
        

    private:
        double _re;
        double _im;

};
