#include <stdio.h>

int main (void)
{
   double x1 = (double) 3.31  * (10e-8), 
          x2 = (double) 2.01 * (10e-7),
          y1 = (double) 7.16 * (10e-6),
          y2= (double) 2.01 * (10e-8),
          result;

   result = (x1 * x2) / (y1 + y2);

   printf ("The answer to 3.31 * 10e-8 * 2.01 * 10e-7 / 7.16 * 10e-6 + 2.01 * 10e-8 is %e\n", result);
   return 0; 
}