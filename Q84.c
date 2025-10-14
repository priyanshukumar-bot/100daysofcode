// Q84: Convert lowercase string to uppercase without built-in
// Standard input/output, written for gcc (no stdlib.h)
#include <stdio.h>
#include <math.h>

int main()
{
    char s[1000];
    if (scanf("%999s", s) != 1)
        return 0;
    for (int i = 0; s[i]; i++)
    {
        if (s[i] >= 'a' && s[i] <= 'z')
            s[i] = s[i] - 'a' + 'A';
    }
    printf("%s\n", s);
    return 0;
}
