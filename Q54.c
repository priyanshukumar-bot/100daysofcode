// Q54: Print symmetric pyramid
// Standard input/output, written for gcc (no stdlib.h)
#include <stdio.h>
#include <math.h>

int main()
{
    int height = 4;
    for (int i = 0; i < height; i++)
    {
        for (int s = height - 1; s > i; s--)
            putchar(' ');
        for (int k = 0; k < 2 * i + 1; k++)
            putchar('*');
        putchar('\n');
    }
    for (int i = height - 2; i >= 0; i--)
    {
        for (int s = height - 1; s > i; s--)
            putchar(' ');
        for (int k = 0; k < 2 * i + 1; k++)
            putchar('*');
        putchar('\n');
    }
    return 0;
}
