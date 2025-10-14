// Q80: Multiply two matrices
// Standard input/output, written for gcc (no stdlib.h)
#include <stdio.h>
#include <math.h>

int main()
{
    int r1, c1, r2, c2;
    if (scanf("%d %d %d %d", &r1, &c1, &r2, &c2) != 4)
        return 0;
    if (c1 != r2)
    {
        printf("Incompatible\n");
        return 0;
    }
    int A[r1][c1], B[r2][c2];
    for (int i = 0; i < r1; i++)
        for (int j = 0; j < c1; j++)
            scanf("%d", &A[i][j]);
    for (int i = 0; i < r2; i++)
        for (int j = 0; j < c2; j++)
            scanf("%d", &B[i][j]);
    for (int i = 0; i < r1; i++)
    {
        for (int j = 0; j < c2; j++)
        {
            long long s = 0;
            for (int k = 0; k < c1; k++)
                s += (long long)A[i][k] * B[k][j];
            printf("%lld ", s);
        }
        printf("\n");
    }
    return 0;
}
