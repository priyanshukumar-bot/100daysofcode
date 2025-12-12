#include <stdio.h>
#include <ctype.h>

int main(){
    FILE *in = fopen("input.txt","r");
    FILE *out = fopen("output.txt","w");
    if(!in || !out){ perror("fopen"); return 1; }
    int ch;
    while((ch=fgetc(in))!=EOF){
        if(islower(ch)) ch = toupper(ch);
        fputc(ch, out);
    }
    fclose(in); fclose(out);
    printf("Converted to output.txt\n");
    return 0;
}