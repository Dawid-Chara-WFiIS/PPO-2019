#include "MapPoint.h"
#include "MapDistance.h"
// ---------------------------- MAP DISTANCE INTERFACE -------------------------------------------

void MapDistance::SetParams(std::string distanceName, float latDistance, float longiDistance)
{
    this->_distanceName = distanceName;
    this->_latDistance = latDistance;
    this->_longiDistance = longiDistance;
}
void MapDistance::Print()
{
    std::cout <<  "Distance: " << this->_distanceName << " (" << this->_latDistance << ", " << this->_longiDistance << ")" << std::endl;
}