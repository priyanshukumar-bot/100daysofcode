// Q64: Find digit that occurs most in an integer
// Standard input/output, written for gcc (no stdlib.h)
#include <stdio.h>
#include <math.h>

int main()
{
    long long n;
    if (scanf("%lld", &n) != 1)
        return 0;
    int cnt[10] = {0};
    long long x = (n < 0) ? -n : n;
    if (x == 0)
        cnt[0]++;
    while (x)
    {
        cnt[x % 10]++;
        x /= 10;
    }
    int best = 0;
    for (int d = 1; d < 10; d++)
        if (cnt[d] > cnt[best])
            best = d;
    printf("%d\n", best);
    return 0;
}
