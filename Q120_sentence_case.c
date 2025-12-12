#include <stdio.h>
#include <ctype.h>
#include <string.h>

int main(){
    char s[10005];
    if(!fgets(s, sizeof(s), stdin)) return 0;
    int n=strlen(s);
    if(n && s[n-1]=='\n') s[--n]=0;
    int i=0;
    while(s[i] && isspace((unsigned char)s[i])) i++;
    if(s[i]) s[i]=toupper((unsigned char)s[i]);
    for(i=i+1;s[i];i++) s[i]=tolower((unsigned char)s[i]);
    printf("%s\n", s);
    return 0;
}