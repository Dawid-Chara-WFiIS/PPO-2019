#include "SeriesInterface.h"
SeriesPtr* arrayOfSeries;
Size counter = 0; 

void addToMemLocs(SeriesPtr series)
{
    if(counter == 0){
        arrayOfSeries = new SeriesPtr[1];
        arrayOfSeries[counter] = series;
    }
    else {
        SeriesPtr* resizedArrayOfSeries;
        resizedArrayOfSeries = new SeriesPtr[counter + 1];
        for(Size i=0; i<counter; i++)
            resizedArrayOfSeries[i] = arrayOfSeries[i];

        resizedArrayOfSeries[counter] = series;
        delete [] arrayOfSeries;
        arrayOfSeries = resizedArrayOfSeries;
    }
    counter++;
}

void DeleteSeries()
// Zwalnia pamięć zaalokowaną na utworzenie szeregu (usuwa szereg)
{
    printf("Deleting %d series...\n", counter);
    while(--counter>0)
    {
        delete [] arrayOfSeries[counter];
    }
    delete [] arrayOfSeries[counter];
    delete [] arrayOfSeries;
    printf(" *** Memory cleanded up ***\n");
        
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
    std::cout<<result<<std::endl;
}