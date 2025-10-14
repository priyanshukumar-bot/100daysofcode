// Q59: Count even and odd numbers in array
// Standard input/output, written for gcc (no stdlib.h)
#include <stdio.h>
#include <math.h>

int main()
{
    int n;
    if (scanf("%d", &n) != 1)
        return 0;
    int even = 0, odd = 0, x;
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &x);
        if (x % 2 == 0)
            even++;
        else
            odd++;
    }
    printf("%d %d\n", even, odd);
    return 0;
}
