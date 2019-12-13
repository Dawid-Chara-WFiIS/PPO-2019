#include "Series.h"

int main ()
{
  const Size size = 4;      
  Series gSeries;
  
  const float ratio = 2;   
  gSeries.InitializeGeometricSeries(size, ratio);

  Series hSeries;
  hSeries.InitializeHarmonicSeries(size);


  gSeries.PrintSeries();
  hSeries.PrintSeries();
  
  SeriesType gSeriesSum = gSeries.SeriesSum();
  SeriesType hSeriesSum = hSeries.SeriesSum();
  
  printf("Sum of geometric series: %.2f\n",gSeriesSum);
  printf("Sum of harmonic series: %.2f\n",hSeriesSum);


}

