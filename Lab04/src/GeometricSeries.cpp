#include <iostream>
#include "GeometricSeries.h"

SeriesPtr InitializeGeometricSeries(Size size, SeriesType ratio)
// Tworzy szereg i zwraca wskaźnik do pierwszego elementu szeregu
{
    SeriesPtr series = new SeriesType[size];
    addToMemLocs(series);
    series[0] = 1;
    for(int i=1; i<size; i++)
        series[i] = series[i-1] * ratio;
    
    return series;
} 
