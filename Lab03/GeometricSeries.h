#pragma once
#include <cstdio>
// Definicje typów dla naszych szeregów
typedef int Size;
typedef float* SeriesPtr;
typedef float SeriesType;
typedef float (*SeriesFunctionPtr)(SeriesPtr, Size);

// Prototypy funkcji interfejsu do obsługi szeregów
SeriesPtr InitializeGeometricSeries(Size, SeriesType);
void PrintSeries(SeriesPtr, Size);
SeriesType SeriesSum(SeriesPtr, Size);
SeriesType SeriesProduct(SeriesPtr, Size);
SeriesType SeriesMax(SeriesPtr, Size);
SeriesType SeriesMin(SeriesPtr, Size);
void DeleteSeries();
void RunAndPrint(SeriesFunctionPtr, SeriesPtr, SeriesType);



