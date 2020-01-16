#include "Point2DSmartPtr.h"

Point2D* Point2DSmartPtr::operator ->()
// overloading -> operator, to make functionallity of smart pointer
{
    return _point2DPointer;
}

Point2DSmartPtr::~Point2DSmartPtr()
// destructor of smart poiner
{
    delete _point2DPointer;
}
