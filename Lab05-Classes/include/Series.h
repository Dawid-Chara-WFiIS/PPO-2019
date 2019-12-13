#pragma once
#include <stdio.h>
#include <iostream>

typedef int Size;
typedef float* SeriesPtr;
typedef float SeriesType;

class Series
{
    
    public:
        ~Series();
        // void AddToMemoryManager();
        void InitializeHarmonicSeries(Size);
        void InitializeGeometricSeries(Size, SeriesType);
        void PrintSeries();
        SeriesType SeriesSum();
        SeriesType SeriesProduct();
        SeriesType SeriesMax();
        SeriesType SeriesMin();
        void RunAndPrint();
        void DeleteSeries();
        void addToMemLocs();
    private:
        SeriesPtr seriesElements;
        Size seriesSize;
};

void DeleteSeries();