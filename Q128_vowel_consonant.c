#include <stdio.h>
#include <ctype.h>

int main(){
    FILE *f = fopen("input.txt","r");
    if(!f){ perror("fopen"); return 1; }
    int ch, vowels=0, cons=0;
    while((ch=fgetc(f))!=EOF){
        if(isalpha(ch)){
            char c = tolower(ch);
            if(c=='a'||c=='e'||c=='i'||c=='o'||c=='u') vowels++;
            else cons++;
        }
    }
    printf("Vowels: %d\nConsonants: %d\n", vowels, cons);
    fclose(f);
    return 0;
}