// Q70: Rotate array to right by k positions
// Standard input/output, written for gcc (no stdlib.h)
#include <stdio.h>
#include <math.h>

int main()
{
    int n;
    if (scanf("%d", &n) != 1)
        return 0;
    int a[n];
    for (int i = 0; i < n; i++)
        scanf("%d", &a[i]);
    int k;
    if (scanf("%d", &k) != 1)
        return 0;
    if (n > 0)
    {
        k %= n;
        if (k < 0)
            k += n;
        int b[n];
        for (int i = 0; i < n; i++)
            b[(i + k) % n] = a[i];
        for (int i = 0; i < n; i++)
            printf("%d ", b[i]);
    }
    printf("\n");
    return 0;
}
