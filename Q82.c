// Q82: Print each character of a string on new line
// Standard input/output, written for gcc (no stdlib.h)
#include <stdio.h>
#include <math.h>
#include <string.h>

int main()
{
    char s[1000];
    if (scanf("%999s", s) != 1)
        return 0;
    for (int i = 0; i < (int)strlen(s); i++)
        printf("%c\n", s[i]);
    return 0;
}
