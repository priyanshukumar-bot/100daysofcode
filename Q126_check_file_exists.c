#include <stdio.h>

int main(){
    char filename[256];
    if(scanf("%s", filename)!=1) return 0;
    FILE *f = fopen(filename,"r");
    if(!f){ printf("Error: could not open %s\n", filename); return 1; }
    char line[256];
    while(fgets(line,sizeof(line),f)) printf("%s", line);
    fclose(f);
    return 0;
}