#include "Coordinates.h"

double Coordinates::Longitude() const
{
    return _long;
}

double Coordinates::Latitude() const
{
    return _lat;
}

void Coordinates::Set(double latitude, double longitude)
{
    _lat = latitude;
    _long = longitude;
}

void Coordinates::Latitude(const double latitude)
{
    _lat = latitude;
}

void Coordinates::Longitude(const double longitude)
{
    _long = longitude;
}
