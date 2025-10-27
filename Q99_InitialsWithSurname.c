#include <stdio.h>
#include <string.h>
int main() {
    char name[100];
    gets(name);
    int lastSpace=-1;
    for(int i=0; name[i]!='\0'; i++){
        if(name[i]==' '){
            printf("%c.", name[i+1]);
            lastSpace=i;
        }
    }
    for(int i=lastSpace+2; name[i]!='\0'; i++)
        printf("%c", name[i]);
    return 0;
}