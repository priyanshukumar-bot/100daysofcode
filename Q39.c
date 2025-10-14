// Q39: Product of odd digits of a number
// Standard input/output, written for gcc (no stdlib.h)
#include <stdio.h>
#include <math.h>

int main()
{
    long long n;
    if (scanf("%lld", &n) != 1)
        return 0;
    long long x = (n < 0) ? -n : n, prod = 1;
    int found = 0;
    while (x)
    {
        int d = x % 10;
        if (d % 2 == 1)
        {
            prod *= d;
            found = 1;
        }
        x /= 10;
    }
    if (!found)
        printf("0\n");
    else
        printf("%lld\n", prod);
    return 0;
}
