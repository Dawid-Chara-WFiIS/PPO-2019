#pragma once
#include <iostream>

class Box{
    friend std::ostream& operator << (std::ostream&, const Box&);
    public:
        Box(double length, double width, double height) : _length(length), _width(width), _height(height) {}
        double GetLength() const;
        double GetWidth() const;
        double GetHeight() const;

    private:
        double _length;
        double _width;
        double _height;
};

std::ostream& operator << (std::ostream&, const Box&);