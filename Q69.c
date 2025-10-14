// Q69: Find second largest element in array
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
    int mx = INT_MIN, second = INT_MIN;
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &x);
        if (x > mx)
        {
            second = mx;
            mx = x;
        }
        else if (x > second && x < mx)
            second = x;
    }
    if (second == INT_MIN)
        printf("No second largest\n");
    else
        printf("%d\n", second);
    return 0;
}
