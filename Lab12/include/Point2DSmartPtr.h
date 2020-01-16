#pragma once
#include "Point2D.h"

class Point2DSmartPtr{
    public:
        Point2DSmartPtr(Point2D* t=nullptr) : _point2DPointer(t) {}
        Point2D* operator ->();
        ~Point2DSmartPtr();
    private:
        Point2D* _point2DPointer;
};