// Q68: Delete an element from array (first occurrence)
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
    int pos = -1;
    for (int i = 0; i < n; i++)
        if (a[i] == key)
        {
            pos = i;
            break;
        }
    if (pos != -1)
    {
        for (int i = pos; i < n - 1; i++)
            a[i] = a[i + 1];
        n--;
    }
    for (int i = 0; i < n; i++)
        printf("%d ", a[i]);
    printf("\n");
    return 0;
}
