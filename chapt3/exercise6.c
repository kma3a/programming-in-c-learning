#include <stdio.h>

int main (void)
{
   float x = 2.55, val;

   float ex1, ex2;
   ex1 =  x^3;
   ex2 = x^2;

   val = 3 * ex1 - 5 * ex2 + 6;

   printf ("The answer to 3x^3 - 5x^2 + 6 is %f\n", val);
   return 0; 
}