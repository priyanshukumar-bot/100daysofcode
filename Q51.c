// Q51: Right aligned numeric pattern
// Standard input/output, written for gcc (no stdlib.h)
#include <stdio.h>
#include <math.h>

int main()
{
    for (int i = 1; i <= 5; i++)
    {
        for (int s = 5; s > i; s--)
            putchar(' ');
        for (int j = 5 - i + 1; j <= 5; j++)
            printf("%d", j);
        putchar('\n');
    }
    return 0;
}
