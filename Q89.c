// Q89: Count frequency of a given character in a string
// Standard input/output, written for gcc (no stdlib.h)
#include <stdio.h>
#include <math.h>
#include <string.h>

int main()
{
    char s[1000];
    char key;
    if (scanf("%999s %c", s, &key) != 2)
        return 0;
    int cnt = 0;
    for (int i = 0; s[i]; i++)
        if (s[i] == key)
            cnt++;
    printf("%d\n", cnt);
    return 0;
}
