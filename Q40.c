// Q40: 1's complement of a binary number
// Standard input/output, written for gcc (no stdlib.h)
#include <stdio.h>
#include <math.h>
#include <string.h>

int main()
{
    char s[1024];
    if (scanf("%1023s", s) != 1)
        return 0;
    for (int i = 0; i < (int)strlen(s); i++)
    {
        if (s[i] == '0')
            putchar('1');
        else if (s[i] == '1')
            putchar('0');
        else
        {
            printf("\nInvalid binary\n");
            return 0;
        }
    }
    putchar('\n');
    return 0;
}
