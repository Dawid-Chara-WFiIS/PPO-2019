#include "Point2D.h"

Point2D Point2D::operator +(const Point2D& other)
// overloading + operator Point2D + Point2D
{
    Point2D result(other._x + _x, other._y + _y);
    return result;
}

Point2D operator +(const double& number, const Point2D& point)
// overloading + operator double + Point2D
{
    Point2D result(point._x + number, point._y);
    return result;
}

void Point2D::Print() const
// display Point2D 
{
    std::cout << "Point2D:: (" << _x <<"," << _y <<")\n";
}

Point2D Point2D::operator --()
// predecrementation overloading
{
    --_x;
    --_y;
    return *this;
}
Point2D Point2D::operator ++(int)
// post incrementation overloading
{
    Point2D temp = *this;
    _x++;
    _y++;
    return temp;
}

void* Point2D::operator new(size_t size)
// overloading new operator, additional feature: showing size of allocated memory
{
    std::cout<<"Point2D:: alokowanie " << size << " bajtow\n";
    void *p;
    p = ::new Point2D();
    return p;
}
void Point2D::operator delete(void* p)
// overloading delete operator, additional feature: info about deallocating pointer
{
    std::cout << "Point2D:: zwalnianie wskaznika\n";
    ::delete static_cast<Point2D*> (p);
}

void Point2D::SetX(const double& value)
// setter, _x member value
{
    _x = value;
}
void Point2D::SetY(const double& value)
// setter, _y member value

{
    _y = value;
}

const double& Point2D::GetX()
// getter, _x member value

{
    return _x;
}
const double& Point2D::GetY()
// getter, _y member value

{
    return _y;
}