// Q72: Sum of all elements in matrix
// Standard input/output, written for gcc (no stdlib.h)
#include <stdio.h>
#include <math.h>

int main()
{
    int r, c;
    if (scanf("%d %d", &r, &c) != 2)
        return 0;
    long long sum = 0;
    int x;
    for (int i = 0; i < r; i++)
        for (int j = 0; j < c; j++)
        {
            scanf("%d", &x);
            sum += x;
        }
    printf("%lld\n", sum);
    return 0;
}
