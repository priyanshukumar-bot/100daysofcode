// Q47: Print increasing triangle
// Standard input/output, written for gcc (no stdlib.h)
#include <stdio.h>
#include <math.h>

int main()
{
    for (int i = 1; i <= 5; i++)
    {
        for (int j = 0; j < i; j++)
            putchar('*');
        putchar('\n');
    }
    return 0;
}
