// Q73: Sum of each row of a matrix
// Standard input/output, written for gcc (no stdlib.h)
#include <stdio.h>
#include <math.h>

int main()
{
    int r, c;
    if (scanf("%d %d", &r, &c) != 2)
        return 0;
    int a[r][c];
    for (int i = 0; i < r; i++)
        for (int j = 0; j < c; j++)
            scanf("%d", &a[i][j]);
    for (int i = 0; i < r; i++)
    {
        long long s = 0;
        for (int j = 0; j < c; j++)
            s += a[i][j];
        printf("%lld ", s);
    }
    printf("\n");
    return 0;
}
