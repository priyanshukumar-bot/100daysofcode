#include <stdio.h>
#include <string.h>
typedef struct{ char name[50]; int id; } S;
int main(){
    S a,b; scanf("%s %d %s %d", a.name, &a.id, b.name, &b.id);
    if(strcmp(a.name,b.name)==0 && a.id==b.id) printf("Identical\n"); else printf("Not identical\n");
    return 0;
}