#pragma once
#include <iostream>

typedef float point_type;

class SmartPointer{
    public:
        SmartPointer(): _pointer(NULL) {}
        SmartPointer(point_type* pointer): _pointer(pointer) {}
        //~SmartPointer(){delete _pointer;}
    private:
        point_type* _pointer;



};