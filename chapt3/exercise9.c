#include <stdio.h>

int main (void)
{
   // int i= 365, j= 7; 
   // int i= (int) 12.258, j= 23; 
   int i=996, j= 4; 
   int next_multiple = i + j - i % j;

   printf("The next multiple of %i and %i is %i.\n", i,j, next_multiple);
   return 0; 
}