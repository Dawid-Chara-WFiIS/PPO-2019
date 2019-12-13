#include "MapDistance.h"
// ---------------------------- MAP DISTANCE INTERFACE -------------------------------------------

void MapDistance::SetParams(std::string distanceName, float latDistance, float longiDistance)
{
    _distanceName = distanceName;
    _latDistance = latDistance;
    _longiDistance = longiDistance;
}
void MapDistance::Print()
{
    std::cout <<  "Distance: " << _distanceName << " (" << _latDistance << ", " <<_longiDistance << ")" << std::endl;
}