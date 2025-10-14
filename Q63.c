// Q63: Merge two arrays (concatenate)
// Standard input/output, written for gcc (no stdlib.h)
#include <stdio.h>
#include <math.h>

int main()
{
    int n, m;
    if (scanf("%d", &n) != 1)
        return 0;
    int a[n];
    for (int i = 0; i < n; i++)
        scanf("%d", &a[i]);
    if (scanf("%d", &m) != 1)
        return 0;
    int b[m];
    for (int i = 0; i < m; i++)
        scanf("%d", &b[i]);
    for (int i = 0; i < n; i++)
        printf("%d ", a[i]);
    for (int i = 0; i < m; i++)
        printf("%d ", b[i]);
    printf("\n");
    return 0;
}
