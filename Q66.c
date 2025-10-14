// Q66: Insert element in sorted array
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
    int key;
    if (scanf("%d", &key) != 1)
        return 0;
    int i = n - 1;
    while (i >= 0 && a[i] > key)
    {
        a[i + 1] = a[i];
        i--;
    }
    a[i + 1] = key;
    n++;
    for (int j = 0; j < n; j++)
        printf("%d ", a[j]);
    printf("\n");
    return 0;
}
