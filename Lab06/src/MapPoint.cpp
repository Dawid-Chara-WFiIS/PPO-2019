#include "MapPoint.h"
#include "Coordinates.h"

int MapPoint::numberOfPoints = 0;

MapPoint::MapPoint(std::string name, double latitude, double longitude)
{
    _name = name;
    _lat = latitude;
    _long = longitude;
    _coords.Set(latitude, longitude);
    MapPoint::numberOfPoints++;
}

MapPoint::MapPoint(std::string name)
{
    _name = name;
    _coords.Set(0, 0);
    MapPoint::numberOfPoints++;

}

MapPoint::MapPoint()
{
    MapPoint::numberOfPoints++;
}
Coordinates MapPoint::GetCoordinates() const
{
    return _coords;
}

Coordinates& MapPoint::GetCoordinates()
{
    return _coords;
}

Coordinates* MapPoint::GetCoordinatesPtr()
{
    return &_coords;
}

void MapPoint::Print() const
{
    std::cout<< "Point: KRK "
            << "("<< _coords.Latitude()
            << ","<< _coords.Longitude()
            << ")"<<std::endl;
}

void MapPoint::SetId(std::string name)
{
    _name = name;
}


double surfaceTriangleArea(const MapPoint* firstPoint, MapPoint* secondPoint, MapPoint* thirdPoint)
{
    std::cout << MapPoint::NumberOfPoints() << std::endl;
    double x1 = firstPoint->_lat;
    double y1 = firstPoint->_long;
    double x2 = secondPoint->GetCoordinatesPtr()->Latitude();
    double y2 = secondPoint->GetCoordinatesPtr()->Longitude();
    double x3 = thirdPoint->GetCoordinatesPtr()->Latitude();
    double y3 = thirdPoint->GetCoordinatesPtr()->Longitude();
    std::cout << x1 <<" "<<y1<<std::endl;
    std::cout<< x2 <<" "<<y2<<std::endl;
    std::cout<<x3<<" "<<y3<<std::endl;

    return 0.5 * ((x2-x1)*(y3-y1)-(x3-x1)*(y2-y1));

    }