// Q60: Count positive, negative, and zero elements
// Standard input/output, written for gcc (no stdlib.h)
#include <stdio.h>
#include <math.h>

int main()
{
    int n;
    if (scanf("%d", &n) != 1)
        return 0;
    int pos = 0, neg = 0, zer = 0, x;
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &x);
        if (x > 0)
            pos++;
        else if (x < 0)
            neg++;
        else
            zer++;
    }
    printf("%d %d %d\n", pos, neg, zer);
    return 0;
}
