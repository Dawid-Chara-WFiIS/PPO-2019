#include "PointAverage.h"

void PointAverage::operator () (const Point2D& point)
// add point to std::vector pointers container, then count _average to get average point
{
    _points.push_back(point);
    _average.SetX(0);
    _average.SetY(0);
    if(_points.size() > 1)
        for (auto const& point: _points)
            _average = _average +  point;
        
    _average.SetX(_average.GetX() / _points.size());
    _average.SetY(_average.GetY() / _points.size());


}

void PointAverage::Print() const
// display average
{
    _average.Print();
}

void PointAverage::Reset()
// reset variables to initial state
{
    _points.clear();
    _average.SetX(0);
    _average.SetY(0);
}
