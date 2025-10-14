// Q46: Print 5x5 star square
// Standard input/output, written for gcc (no stdlib.h)
#include <stdio.h>
#include <math.h>

int main()
{
    for (int i = 0; i < 5; i++)
    {
        for (int j = 0; j < 5; j++)
            putchar('*');
        putchar('\n');
    }
    return 0;
}
