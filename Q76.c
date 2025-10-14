// Q76: Check if matrix is symmetric
// Standard input/output, written for gcc (no stdlib.h)
#include <stdio.h>
#include <math.h>
#include <stdbool.h>

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
        for (int j = 0; j < n; j++)
            if (a[i][j] != a[j][i])
            {
                printf("Not Symmetric\n");
                return 0;
            }
    printf("Symmetric\n");
    return 0;
}
