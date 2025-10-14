// Q81: Count characters in string without strlen
// Standard input/output, written for gcc (no stdlib.h)
#include <stdio.h>
#include <math.h>

int main()
{
    char s[1000];
    if (scanf("%999s", s) != 1)
        return 0;
    int cnt = 0;
    while (s[cnt])
        cnt++;
    printf("%d\n", cnt);
    return 0;
}
