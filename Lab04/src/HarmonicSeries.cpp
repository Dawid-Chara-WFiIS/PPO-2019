#include <iostream>
#include "HarmonicSeries.h"

SeriesPtr InitializeHarmonicSeries(Size size)
// Tworzy szereg i zwraca wskaźnik do pierwszego elementu szeregu
{
    SeriesPtr series = new float[size];
    addToMemLocs(series);

    for(int i=0; i<size; i++)
        series[i] = (float) 1/(i+1);
    return series;
} 


