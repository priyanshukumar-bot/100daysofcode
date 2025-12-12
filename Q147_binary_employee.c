#include <stdio.h>
#include <stdlib.h>
typedef struct{ char name[50]; int id; int marks; } Emp;
int main(){
    Emp e;
    FILE *f = fopen("emps.bin","wb");
    if(!f){ perror("fopen"); return 1; }
    for(int i=0;i<2;i++){
        scanf("%s %d %d", e.name, &e.id, &e.marks);
        fwrite(&e, sizeof(e), 1, f);
    }
    fclose(f);
    f = fopen("emps.bin","rb");
    while(fread(&e,sizeof(e),1,f)==1) printf("%s %d %d\n", e.name, e.id, e.marks);
    fclose(f);
    return 0;
}