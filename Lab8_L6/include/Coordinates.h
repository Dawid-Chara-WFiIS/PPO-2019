#pragma once
#include "MapPoint.h"


class Coordinates{
  
    friend class MapPoint;
    public:
        Coordinates() = default;
        float Latitude() ;
        float Longitude() ;

    private:
        float  _lat;
        float  _longi;
};