// Q55: Print all prime numbers from 1 to n
// Standard input/output, written for gcc (no stdlib.h)
#include <stdio.h>
#include <math.h>
#include <stdbool.h>

int main()
{
    int n;
    if (scanf("%d", &n) != 1)
        return 0;
    for (int num = 2; num <= n; num++)
    {
        bool isPrime = true;
        for (int d = 2; d * d <= num; d++)
        {
            if (num % d == 0)
            {
                isPrime = false;
                break;
            }
        }
        if (isPrime)
            printf("%d ", num);
    }
    printf("\n");
    return 0;
}
