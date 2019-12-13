#pragma once
#include "MapDistance.h"
#include <string.h>
#include <iostream>
#include <cmath>


class MapPoint
{
    
    public:
        MapPoint() = default;
        MapPoint(std::string, float, float);
        MapPoint(std::string);
        void Print();
        void Longitude(float);
        void Latitude(float);
        void SetId(std::string);
        void Coordinates(float, float);
        MapDistance Distance(MapPoint);
        MapPoint Farthest(MapPoint, MapPoint);

    private:
        std::string _name;
        float _lat;
        float _longi;
};

