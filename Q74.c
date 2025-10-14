// Q74: Find transpose of matrix
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
    for (int j = 0; j < c; j++)
    {
        for (int i = 0; i < r; i++)
            printf("%d ", a[i][j]);
        printf("\n");
    }
    return 0;
}
