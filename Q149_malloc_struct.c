#include <stdio.h>
#include <stdlib.h>
typedef struct{ char name[50]; int id; } Item;
int main(){
    Item *p = malloc(sizeof(Item));
    if(!p) return 1;
    scanf("%s %d", p->name, &p->id);
    printf("%s %d\n", p->name, p->id);
    free(p);
    return 0;
}