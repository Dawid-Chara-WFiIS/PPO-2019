#include "MapPoint.h"
#include "MapDistance.h"
//---------------------------------- MapPoint interface ------------------------------------------

MapPoint::MapPoint(std::string name, float lat, float longi)
{
    this->_name = name;
    this->_lat = lat; 
    this->_longi = longi;

} 

MapPoint::MapPoint(std::string name)
{
    this->_name = name;
}

MapPoint::MapPoint()
{
}

void MapPoint::Latitude(float lat)
{
    this->_lat = lat;
}

void MapPoint::Longitude(float longi)
{
    this->_longi = longi;
}

void MapPoint::SetId(std::string name)
{
    this->_name = name;
}

void MapPoint::Coordinates(float lat, float longi)
{
    this->_lat = lat; 
    this->_longi = longi;
}

void MapPoint::Print()
{
    std::cout <<  "Point: " << this->_name << " (" << this->_lat << ", " << this->_longi << ")" << std::endl;
}

MapDistance MapPoint::Distance(MapPoint point)
{
    MapDistance distance;
    distance.SetParams(this->_name + "-" + point._name, - this->_lat + point._lat, - this->_longi + point._longi);
    return distance;
}

MapPoint MapPoint::Farthest(MapPoint firstPoint, MapPoint secondPoint)
{
    MapPoint farthest;
    float distance1, distance2;
    distance1 = sqrt(this->_lat * firstPoint._lat + this->_longi * firstPoint._longi);
    distance2 = sqrt(this->_lat * secondPoint._lat + this->_longi * secondPoint._longi);
    if(distance1 > distance2)
        return firstPoint;
    else
        return secondPoint;
    
}
