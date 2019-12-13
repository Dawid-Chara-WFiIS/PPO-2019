#pragma once
#include <iostream>

class MapDistance
{
    public:
        MapDistance() = default;
        void Print();
        void SetParams(std::string, float, float);

    private:
        std::string _distanceName = "None";
        float _latDistance = 0;
        float _longiDistance = 0;
};