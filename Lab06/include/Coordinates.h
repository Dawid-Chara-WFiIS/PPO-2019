#pragma once


class Coordinates{
    public:
        double Latitude() const;
        double Longitude() const;
        void Set(double, double);
        void Latitude(const double);
        void Longitude(const double);
    private: 
        double _lat;
        double _long;
};