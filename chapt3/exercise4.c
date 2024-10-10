#include <stdio.h>

int main (void)
{
    int F = 27, C;

    C = (F - 32) / 1.8;
    printf("%i converted into Celsius is %i.\n", F, C);
    return 0;
}