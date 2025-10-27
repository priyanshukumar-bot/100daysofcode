#include <stdio.h>
#include <string.h>
int main() {
    char s1[100], s2[100];
    gets(s1);
    gets(s2);
    int len1=strlen(s1), len2=strlen(s2);
    if(len1!=len2){
        printf("Not Rotation");
        return 0;
    }
    for(int i=0;i<len1;i++){
        int j=0;
        while(j<len2 && s1[(i+j)%len1]==s2[j]) j++;
        if(j==len2){
            printf("Rotation");
            return 0;
        }
    }
    printf("Not Rotation");
    return 0;
}