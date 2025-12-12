#include <stdio.h>

int main(){
    FILE *f = fopen("info.txt","r");
    if(!f){ perror("fopen"); return 1; }
    char line[256];
    while(fgets(line,sizeof(line),f)) printf("%s", line);
    fclose(f);
    return 0;
}