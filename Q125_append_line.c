#include <stdio.h>

int main(){
    char filename[256];
    if(scanf("%s", filename)!=1) return 0;
    getchar(); // consume newline
    char line[1005];
    if(!fgets(line, sizeof(line), stdin)) return 0;
    FILE *f = fopen(filename, "a");
    if(!f){ perror("fopen"); return 1; }
    fputs(line, f);
    if(line[strlen(line)-1]!='\n') fputs("\n", f);
    fclose(f);
    printf("Appended to %s\n", filename);
    return 0;
}