#include <stdio.h>

int main (void)
{
   int i= 256, j= 7; 
   int next_multiple = i + j - i % j;

   printf("The next multiple of %i and %i is %i.\n", i,j, next_multiple);
   return 0; 
}