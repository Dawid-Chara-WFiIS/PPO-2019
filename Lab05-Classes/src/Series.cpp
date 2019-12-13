#include "Series.h"
// Series** memoryManager;
// Size counter = 0;


Series::~Series()
{
    delete [] seriesElements;
}

/*void Series::AddToMemoryManager()
{
    if(counter==0)
        {
            memoryManager = new Series*[1];
            memoryManager[counter] = this;
        }
    else
    {
        Series** resizedMemoryManager;
        resizedMemoryManager = new Series*[counter+1];
        for(int i = 0; i<counter; i++)
            resizedMemoryManager[i] = memoryManager[i];
        resizedMemoryManager[counter + 1] = this;
        delete [] memoryManager;
        memoryManager = resizedMemoryManager; 
    }
    counter ++;
    
} */
void Series::InitializeHarmonicSeries(Size size)
{
    seriesElements = new SeriesType[size];
    //AddToMemoryManager();
    seriesSize = size;
    for(int i=0; i<seriesSize; i++)
        seriesElements[i] = (float) 1/(i+1);
}

void Series::InitializeGeometricSeries(Size size, SeriesType ratio)
{
    seriesElements = new SeriesType[size];
    seriesSize = size;
    seriesElements[0] = 1;
    for(int i=1; i<seriesSize; i++)
        seriesElements[i] = seriesElements[i-1] * ratio;
}

void Series::PrintSeries()
{
    for(int i=0; i<seriesSize; i++)
        printf(" %.2f ", seriesElements[i]);
    printf("\n");
}

SeriesType Series::SeriesSum()
{
    SeriesType sum = 0;
    for(int i=0; i<seriesSize; i++)
        sum+=seriesElements[i];
    return sum;
}

SeriesType Series::SeriesProduct()
{
    SeriesType prod=1;
    for(int i=0; i<seriesSize; i++)
        prod*=seriesElements[i];
    return prod;
}
SeriesType Series::SeriesMax()
{
    SeriesType max = seriesElements[0];
    for(int i=1; i<seriesSize; i++)
        if(seriesElements[i] > max)
            max = seriesElements[i];
    return max;
}

SeriesType Series::SeriesMin()
{
    float min = seriesElements[0];
    for(int i=1; i<seriesSize; i++)
        if(seriesElements[i] < min)
            min = seriesElements[i];
    return min;
}


