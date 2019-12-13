#include <iostream>
#include "HarmonicSeries.h"

SeriesPtr InitializeHarmonicSeries(Size size)
// Tworzy szereg i zwraca wskaźnik do pierwszego elementu szeregu
{
    float* series = new float[size];
    for(int i=0; i<size; i++)
        series[i] = (float) 1/(i+1);
    return series;
} 

void PrintSeries(SeriesPtr series, Size size)
// Wypisuje szereg
{
    for(int i=0; i<size; i++)
        printf(" %.2f ", series[i]);
    printf("\n");
}

SeriesType SeriesSum(SeriesPtr series, Size size)
// Zwraca sumę szeregu
{
    float sum = 0;
    for(int i=0; i<size; i++)
        sum+=series[i];
    return sum;
}

SeriesType SeriesProduct(SeriesPtr series, Size size)
// Zwraca iloczyn wszystkich wyrazów szeregu
{
    float prod=1;
    for(int i=0; i<size; i++)
        prod*=series[i];
    return prod;
}
SeriesType SeriesMax(SeriesPtr series, Size size)
// Zwraca maksymalny element w szeregu
{
    float max = series[0];
    for(int i=1; i<size; i++)
        if(series[i] > max)
            max = series[i];
    return max;
}

SeriesType SeriesMin(SeriesPtr series, Size size)
// Zwraca minimalny element w szeregu
{
    float min = series[0];
    for(int i=1; i<size; i++)
        if(series[i] < min)
            min = series[i];
    return min;
}

void DeleteSeries(SeriesPtr series)
// Zwalnia pamięć zaalokowaną na utworzenie szeregu (usuwa szereg)
{
    delete [] series;
}

void RunAndPrint(SeriesFunctionPtr ptr, SeriesPtr series, SeriesType size)
// Wywołuje funkcję i wypisuje rezultat
{
    SeriesType result = ptr(series, size);
    if(ptr == SeriesSum)
        printf("Sum: ");
    else if(ptr == SeriesProduct)
        printf("Product: ");
    else if(ptr == SeriesMax)
        printf("Maximum: ");
    else if(ptr == SeriesMin)
        printf("Minimum: ");
    printf("%.2f\n", result);
}


