#pragma once
#include "Point2D.h"
#include <vector>

class PointAverage{
    public:
        PointAverage() = default;
        void operator () (const Point2D&);
        void Print() const;
        void Reset();
    private:
        std::vector<Point2D> _points;
        Point2D _average;

};