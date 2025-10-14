// Q87: Count spaces, digits and special characters in a string (read line)
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
    int spaces = 0, digits = 0, special = 0;
    for (int j = 0; s[j]; j++)
    {
        if (s[j] == ' ')
            spaces++;
        else if (s[j] >= '0' && s[j] <= '9')
            digits++;
        else if ((s[j] >= 'A' && s[j] <= 'Z') || (s[j] >= 'a' && s[j] <= 'z'))
            ;
        else
            special++;
    }
    printf("%d %d %d\n", spaces, digits, special);
    return 0;
}
