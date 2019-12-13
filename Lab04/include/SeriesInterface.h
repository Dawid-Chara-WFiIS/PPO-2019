#pragma once
#include <cstdio>
#include <iostream>
typedef int Size;
typedef float* SeriesPtr;
typedef float SeriesType;
typedef float (*SeriesFunctionPtr)(SeriesPtr, Size);

void PrintSeries(SeriesPtr, Size);
SeriesType SeriesSum(SeriesPtr, Size);
SeriesType SeriesProduct(SeriesPtr, Size);
SeriesType SeriesMax(SeriesPtr, Size);
SeriesType SeriesMin(SeriesPtr, Size);
void RunAndPrint(SeriesFunctionPtr, SeriesPtr, SeriesType);
void DeleteSeries();
void addToMemLocs(SeriesPtr);
