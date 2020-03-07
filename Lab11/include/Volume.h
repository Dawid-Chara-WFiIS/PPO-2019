#include "Box.h"
#include "BContainer.h"

class Volume{
    public:
        Volume() = default;
        double operator ()(const double&, const double&, const double&);
        double operator ()(const Box&);
};

using comparator =  bool(*)(Box*, Box*);
bool smaller(Box*, Box*);
Box* find_box_optimum(BContainer&, comparator);