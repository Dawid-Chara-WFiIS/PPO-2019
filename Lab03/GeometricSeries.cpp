#include <iostream>
#include "GeometricSeries.h"
float** memLocs;
int counter = 0;

void addToMemLocs(SeriesPtr series)
{
    if(counter==0)
    {
        memLocs = new float* [1];
        memLocs[0] = series;
    }
    else
    {
        float** newMemLocs = new float* [counter + 1];
        for(int i = 0; i < counter; i++)
            newMemLocs[i] = memLocs[i];
        newMemLocs[counter] = series;
        delete [] memLocs;
        memLocs = newMemLocs;
    }
    counter++;
    
}

SeriesPtr InitializeGeometricSeries(Size size, SeriesType ratio)
// Tworzy szereg i zwraca wskaźnik do pierwszego elementu szeregu
{
    float* series = new float[size];
    addToMemLocs(series);
    series[0] = 1;
    for(int i=1; i<size; i++)
        series[i] = series[i-1] * ratio;
    return series;
} 

void PrintSeries(SeriesPtr series, Size size)
// Wypisuje szereg
{
    for(int i=0; i<size; i++)
        printf(" %.f ", series[i]);
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

void DeleteSeries()
// Zwalnia pamięć zaalokowaną na utworzenie szeregu (usuwa szereg)
{
    printf("Deleting %d series...\n", counter);
    while (counter > 0)
    {
        counter--;
        delete [] memLocs[counter];
    }
    delete [] memLocs;

    printf(" *** Memory cleanded up ***\n");
        
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
    printf("%.f\n", result);
}




