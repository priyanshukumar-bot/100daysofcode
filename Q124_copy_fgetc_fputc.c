#include <stdio.h>

int main(){
    char src[256], dst[256];
    if(scanf("%s %s", src, dst)!=2) return 0;
    FILE *fs = fopen(src,"r");
    if(!fs){ perror("fopen src"); return 1; }
    FILE *fd = fopen(dst,"w");
    if(!fd){ perror("fopen dst"); fclose(fs); return 1; }
    int ch;
    while((ch=fgetc(fs))!=EOF) fputc(ch, fd);
    fclose(fs); fclose(fd);
    printf("Copied successfully\n");
    return 0;
}