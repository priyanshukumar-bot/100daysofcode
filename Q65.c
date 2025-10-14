// Q65: Binary search in sorted array
// Standard input/output, written for gcc (no stdlib.h)
#include <stdio.h>
#include <math.h>

int main()
{
    int n;
    if (scanf("%d", &n) != 1)
        return 0;
    int a[n];
    for (int i = 0; i < n; i++)
        scanf("%d", &a[i]);
    int key;
    if (scanf("%d", &key) != 1)
        return 0;
    int l = 0, r = n - 1, ans = -1;
    while (l <= r)
    {
        int m = (l + r) / 2;
        if (a[m] == key)
        {
            ans = m;
            break;
        }
        else if (a[m] < key)
            l = m + 1;
        else
            r = m - 1;
    }
    if (ans == -1)
        printf("Not Found\n");
    else
        printf("%d\n", ans);
    return 0;
}
