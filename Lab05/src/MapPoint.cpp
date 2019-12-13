#include "MapPoint.h"
#include "MapDistance.h"
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

void MapPoint::Coordinates(float lat, float longi)
{
    _lat = lat; 
    _longi = longi;
}

void MapPoint::Print()
{
    std::cout <<  "Point: " << _name << " (" << _lat << ", " << _longi << ")" << std::endl;
}

MapDistance MapPoint::Distance(MapPoint point)
{
    MapDistance distance;
    distance.SetParams(_name + "-" + point._name, - _lat + point._lat, - _longi + point._longi);
    return distance;
}

MapPoint MapPoint::Farthest(MapPoint firstPoint, MapPoint secondPoint)
{
    MapPoint farthest;
    float distance1, distance2;
    distance1 = sqrt(_lat * firstPoint._lat + _longi * firstPoint._longi);
    distance2 = sqrt(_lat * secondPoint._lat + _longi * secondPoint._longi);
    if(distance1 > distance2)
        return firstPoint;
    else
        return secondPoint;
    
}
