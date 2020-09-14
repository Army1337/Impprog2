#include <stdio.h>
const int lower = -100;
const int upper =  400;
const int step  =  100;
double fahr2cels( double f)
{
  return 5./9. * (f-32);
}
int main()
{
  int fahr;

  for ( fahr = lower; fahr <= upper; fahr += step )
  {
    printf( "Fahr = %4d,\tCels = %7.2f\n", fahr, fahr2cels(fahr) );
  }
  return 0;
}