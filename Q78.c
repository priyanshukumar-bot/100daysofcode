// Q78: Sum of main diagonal elements
// Standard input/output, written for gcc (no stdlib.h)
#include <stdio.h>
#include <math.h>

int main()
{
    int n;
    if (scanf("%d", &n) != 1)
        return 0;
    long long sum = 0;
    int x;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            scanf("%d", &x);
            if (i == j)
                sum += x;
        }
    }
    printf("%lld\n", sum);
    return 0;
}
