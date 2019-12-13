#pragma once
#include "Coordinates.h"
#include <string.h>
#include <iostream>
#include <cmath>

typedef int nPoints;

class MapPoint
{

    friend class Coordinates;
    public:
        MapPoint() = default;
        MapPoint(std::string, float, float);
        MapPoint(std::string);
        void Print();
        void Longitude(float) ;
        void Latitude(float) ;
        void SetId(std::string);
        Coordinates GetCoordinates();
        Coordinates& GetCoordinates();

    private:
        std::string _name;
        float _lat;
        float _longi;

};

