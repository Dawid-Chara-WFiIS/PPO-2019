#pragma once
#include <iostream>
#include <stddef.h>
class Point2D{
    friend Point2D operator +(const double&, const Point2D&);
    public:
        Point2D(const double& x=0.0, const double& y=0.0) : _x(x), _y(y) {}
        Point2D operator +(const Point2D&);
        void Print() const;
        Point2D operator --();
        Point2D operator ++(int);
        void* operator new(size_t);
        void operator delete(void*);
        void SetX(const double&);
        void SetY(const double&);
        const double& GetX();
        const double& GetY();
    private:
        double _x;
        double _y;
};

Point2D operator +(const double&, const Point2D&);
