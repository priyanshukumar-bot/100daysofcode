// Q88: Replace spaces with hyphens in a line
// Standard input/output, written for gcc (no stdlib.h)
#include <stdio.h>
#include <math.h>
#include <string.h>

int main()
{
    char s[1000];
    int c;
    int i = 0;
    while ((c = getchar()) != EOF && c != '\n')
    {
        if (i < 999)
            s[i++] = c;
    }
    s[i] = 0;
    for (int j = 0; s[j]; j++)
    {
        if (s[j] == ' ')
            putchar('-');
        else
            putchar(s[j]);
    }
    putchar('\n');
    return 0;
}
