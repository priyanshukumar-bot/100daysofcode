// Q77: Check diagonal elements distinct
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
        for (int j = i + 1; j < n; j++)
            if (a[i][i] == a[j][j])
            {
                printf("Not Distinct\n");
                return 0;
            }
    printf("Distinct\n");
    return 0;
}
