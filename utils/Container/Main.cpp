#include <iostream>
#include "Container.h"

int main()
{
    Container box;
    box.push(3.14);
    box.push(2.7);
    box.push(0);
    box[2] = 4;
    std::cout << box;
    Container backup_box = box;
    std::cout << box.sorted();
    box.sort();
    std::cout << box;
    
}