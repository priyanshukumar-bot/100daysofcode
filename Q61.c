// Q61: Linear search in array
// Standard input/output, written for gcc (no stdlib.h)
#include <stdio.h>
#include <math.h>

int main()
{
    int n, key;
    if (scanf("%d", &n) != 1)
        return 0;
    int a[n];
    for (int i = 0; i < n; i++)
        scanf("%d", &a[i]);
    if (scanf("%d", &key) != 1)
        return 0;
    int idx = -1;
    for (int i = 0; i < n; i++)
        if (a[i] == key)
        {
            idx = i;
            break;
        }
    if (idx == -1)
        printf("Not Found\n");
    else
        printf("%d\n", idx);
    return 0;
}
