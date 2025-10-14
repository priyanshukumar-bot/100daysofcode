// Q45: Sum series 2/3 + 4/7 + 6/11 + ... up to n terms
// Standard input/output, written for gcc (no stdlib.h)
#include <stdio.h>
#include <math.h>

int main()
{
    int n;
    if (scanf("%d", &n) != 1)
        return 0;
    double sum = 0.0;
    long long num = 2, den = 3;
    for (int i = 1; i <= n; i++)
    {
        sum += (double)num / den;
        num += 2;
        den += 4;
    }
    printf("%.6f\n", sum);
    return 0;
}
