// Q83: Count vowels and consonants in a string
// Standard input/output, written for gcc (no stdlib.h)
#include <stdio.h>
#include <math.h>
#include <ctype.h>

int main()
{
    char s[1000];
    if (scanf("%999s", s) != 1)
        return 0;
    int v = 0, c = 0;
    for (int i = 0; s[i]; i++)
    {
        char ch = s[i];
        if ((ch >= 'A' && ch <= 'Z') || (ch >= 'a' && ch <= 'z'))
        {
            char low = (ch >= 'A' && ch <= 'Z') ? (ch - 'A' + 'a') : ch;
            if (low == 'a' || low == 'e' || low == 'i' || low == 'o' || low == 'u')
                v++;
            else
                c++;
        }
    }
    printf("%d %d\n", v, c);
    return 0;
}
