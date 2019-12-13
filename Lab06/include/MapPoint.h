#pragma once
#include <iostream>
#include <string.h>
#include "Coordinates.h"

class MapPoint{
    public:
        static int numberOfPoints;
        MapPoint(std::string, double, double);
        MapPoint(std::string);
        MapPoint();
        Coordinates GetCoordinates() const;
        Coordinates& GetCoordinates();
        void Print() const;
        void SetId(std::string name);
        static int NumberOfPoints() {return MapPoint::numberOfPoints;};
        Coordinates* GetCoordinatesPtr();
        friend double surfaceTriangleArea(const MapPoint*, MapPoint*, MapPoint*);



    private:
        double _long;
        double _lat;
        std::string _name;
        Coordinates _coords;
        
};
