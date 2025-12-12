#include <stdio.h>
#include <ctype.h>

int main(){
    FILE *f = fopen("input.txt","r");
    if(!f){ perror("fopen"); return 1; }
    int ch, chars=0, words=0, lines=0;
    int in_word=0;
    while((ch=fgetc(f))!=EOF){
        chars++;
        if(ch=='\n') lines++;
        if(!isspace(ch) && !in_word){ in_word=1; words++; }
        if(isspace(ch)) in_word=0;
    }
    if(chars>0 && lines==0) lines=1;
    printf("Characters: %d\nWords: %d\nLines: %d\n", chars, words, lines);
    fclose(f);
    return 0;
}