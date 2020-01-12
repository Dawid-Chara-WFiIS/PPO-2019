#include "BContainer.h"


void BContainer::Insert(Box* item)
{
    _boxes.push_back(item);
}

std::ostream& operator <<(std::ostream& out, const BContainer& boxesContainer)
{
    unsigned i = 0;
    out << "Box Container:\n";
    for(auto const& box: boxesContainer._boxes)
    {
        out << "\t[" << i << "] ";
        i++;
        out<<*box<<std::endl;
    }
    return out;
}

Box* BContainer::operator [](unsigned index)
{
    return _boxes[index];
}

unsigned BContainer::GetSize() const {return _boxes.size();}
