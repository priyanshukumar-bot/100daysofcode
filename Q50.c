// Q50: Print inverted right triangle with leading spaces
// Standard input/output, written for gcc (no stdlib.h)
#include <stdio.h>
#include <math.h>

int main()
{
    for (int i = 0; i < 5; i++)
    {
        for (int s = 0; s < i; s++)
            putchar(' ');
        for (int j = 5 - i; j > 0; j--)
            putchar('*');
        putchar('\n');
    }
    return 0;
}
