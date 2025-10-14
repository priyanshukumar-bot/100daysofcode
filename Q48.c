// Q48: Print numbers triangle 1..n per line
// Standard input/output, written for gcc (no stdlib.h)
#include <stdio.h>
#include <math.h>

int main()
{
    for (int i = 1; i <= 5; i++)
    {
        for (int j = 1; j <= i; j++)
            printf("%d", j);
        printf("\n");
    }
    return 0;
}
