// Q79: Diagonal traversal of matrix (two main diagonals)
// Standard input/output, written for gcc (no stdlib.h)
#include <stdio.h>
#include <math.h>

int main()
{
    int n;
    if (scanf("%d", &n) != 1)
        return 0;
    int a[n][n];
    for (int i = 0; i < n; i++)
        for (int j = 0; j < n; j++)
            scanf("%d", &a[i][j]);
    for (int i = 0; i < n; i++)
        printf("%d ", a[i][i]);
    printf("\n");
    for (int i = 0; i < n; i++)
        printf("%d ", a[i][n - 1 - i]);
    printf("\n");
    return 0;
}
