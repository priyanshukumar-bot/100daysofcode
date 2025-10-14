// Q35: Print all factors of a number
// Standard input/output, written for gcc (no stdlib.h)
#include <stdio.h>
#include <math.h>

int main()
{
    long long n;
    if (scanf("%lld", &n) != 1)
        return 0;
    if (n == 0)
    {
        printf("All integers are factors of 0\n");
        return 0;
    }
    long long m = (n < 0) ? -n : n;
    for (long long i = 1; i * i <= m; i++)
    {
        if (m % i == 0)
        {
            printf("%lld ", i);
            if (i != m / i)
                printf("%lld ", m / i);
        }
    }
    printf("\n");
    return 0;
}
