// Q53: Print diamond-like star pattern
// Standard input/output, written for gcc (no stdlib.h)
#include <stdio.h>
#include <math.h>

int main()
{
    int n = 5;
    for (int i = 1; i <= n; i += 2)
    {
        for (int j = 0; j < i; j++)
            putchar('*');
        putchar('\n');
    }
    for (int i = n - 2; i >= 1; i -= 2)
    {
        for (int j = 0; j < i; j++)
            putchar('*');
        putchar('\n');
    }
    return 0;
}
