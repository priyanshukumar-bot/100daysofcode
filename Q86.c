// Q86: Check if string is palindrome
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
    int ok = 1;
    for (int i = 0; i < n / 2; i++)
        if (s[i] != s[n - 1 - i])
        {
            ok = 0;
            break;
        }
    if (ok)
        printf("Palindrome\n");
    else
        printf("Not Palindrome\n");
    return 0;
}
