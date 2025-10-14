// Q33: Check Armstrong number
// Standard input/output, written for gcc (no stdlib.h)
#include <stdio.h>
#include <math.h>

int main()
{
    long long n;
    if (scanf("%lld", &n) != 1)
        return 0;
    long long orig = (n < 0) ? -n : n, x = orig;
    int digits = 0;
    while (x > 0)
    {
        digits++;
        x /= 10;
    }
    if (digits == 0)
        digits = 1;
    x = orig;
    long long sum = 0;
    while (x > 0)
    {
        int d = x % 10;
        long long p = 1;
        for (int i = 0; i < digits; i++)
            p *= d;
        sum += p;
        x /= 10;
    }
    if (sum == orig)
        printf("Armstrong\n");
    else
        printf("Not Armstrong\n");
    return 0;
}
