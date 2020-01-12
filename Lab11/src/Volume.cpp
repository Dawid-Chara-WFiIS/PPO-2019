#include "Volume.h"


double Volume::operator ()(const double& length, const double& width, const double& height)
    {
        return length*width*height;
        
    }

double Volume::operator ()(const Box& item)
{
    return item.GetHeight()*item.GetLength()*item.GetWidth();
}

bool smaller(Box* item, Box* otherItem)
// returns true if left argument is smaller than right, otherwise false
{
    Volume volume;
    if(volume(*item) > volume(*otherItem))
        return false;
    else return true;
}

Box* find_box_optimum(BContainer& boxesContainer, comparator)
{
    Box* smallest = boxesContainer[0];
    for(unsigned i=1; i < boxesContainer.GetSize(); i++)
        if(!smaller(smallest, boxesContainer[i]))
            smallest = boxesContainer[i];
        
    return smallest; 
}
