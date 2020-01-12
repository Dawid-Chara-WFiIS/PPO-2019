#pragma once
#include "Box.h"
#include <vector>
#include <iostream>


class BContainer{
    friend std::ostream& operator <<(std::ostream&, const BContainer&);
    public:
        BContainer() = default;
        void Insert(Box*);
        Box* operator [](unsigned);
        unsigned GetSize() const;

    private:
        std::vector<Box*> _boxes;


};

std::ostream& operator <<(std::ostream&, const BContainer&);