#include <stdio.h>
int main() {
    char str[200];
    gets(str);
    int max=0, len=0, start=0, end=0, temp=0;
    for(int i=0; ; i++) {
        if(str[i]==' ' || str[i]=='\0') {
            if(len>max) {
                max=len;
                start=temp;
                end=i-1;
            }
            len=0;
            temp=i+1;
        } else len++;
        if(str[i]=='\0') break;
    }
    for(int i=start; i<=end; i++) printf("%c", str[i]);
    return 0;
}