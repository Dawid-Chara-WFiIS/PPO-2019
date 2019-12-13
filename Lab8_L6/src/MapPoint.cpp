#include "MapPoint.h"

//---------------------------------- MapPoint interface ------------------------------------------

MapPoint::MapPoint(std::string name, float lat, float longi)
{
    _name = name;
    _lat = lat; 
    _longi = longi;

} 

MapPoint::MapPoint(std::string name)
{
    _name = name;
}


void MapPoint::Latitude(float lat)
{
    _lat = lat;
}

void MapPoint::Longitude(float longi)
{
    _longi = longi;
}

void MapPoint::SetId(std::string name)
{
    _name = name;
}


void MapPoint::Print()
{
    std::cout <<  "Point: " << _name << " (" << _lat << ", " << _longi << ")" << std::endl;
}


Coordinates MapPoint::GetCoordinates()
{
    Coordinates* cord = new Coordinates;
    cord->_lat = _lat;
    cord->_longi = _longi;
    return *cord;
}


