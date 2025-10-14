// Q85: Reverse a string
// Standard input/output, written for gcc (no stdlib.h)
#include <stdio.h>
#include <math.h>
#include <string.h>

int main()
{
    char s[1000];
    if (scanf("%999s", s) != 1)
        return 0;
    int n = (int)strlen(s);
    for (int i = n - 1; i >= 0; i--)
        putchar(s[i]);
    putchar('\n');
    return 0;
}
