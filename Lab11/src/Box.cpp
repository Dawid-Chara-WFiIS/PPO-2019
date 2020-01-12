#include "Box.h"


std::ostream& operator << (std::ostream& out, const Box& item)
{
    out<<"Box(length:" << item._length<<", width:" << item._width << ", height:" << item._height << ")";
}

double Box::GetLength() const {return _length;}

double Box::GetWidth() const {return _width;}

double Box::GetHeight() const {return _height;}
