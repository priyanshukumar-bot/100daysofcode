// Q67: Insert element in array at given position
// Standard input/output, written for gcc (no stdlib.h)
#include <stdio.h>
#include <math.h>

int main()
{
    int n;
    if (scanf("%d", &n) != 1)
        return 0;
    int a[1000];
    for (int i = 0; i < n; i++)
        scanf("%d", &a[i]);
    int pos, val;
    if (scanf("%d %d", &pos, &val) != 2)
        return 0;
    if (pos < 0)
        pos = 0;
    if (pos > n)
        pos = n;
    for (int i = n; i > pos; i--)
        a[i] = a[i - 1];
    a[pos] = val;
    n++;
    for (int i = 0; i < n; i++)
        printf("%d ", a[i]);
    printf("\n");
    return 0;
}
