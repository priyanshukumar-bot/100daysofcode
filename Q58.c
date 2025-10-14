// Q58: Find max and min in array
// Standard input/output, written for gcc (no stdlib.h)
#include <stdio.h>
#include <math.h>
#include <limits.h>

int main()
{
    int n;
    if (scanf("%d", &n) != 1)
        return 0;
    int x;
    int mx = INT_MIN, mn = INT_MAX;
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &x);
        if (x > mx)
            mx = x;
        if (x < mn)
            mn = x;
    }
    printf("%d %d\n", mx, mn);
    return 0;
}
