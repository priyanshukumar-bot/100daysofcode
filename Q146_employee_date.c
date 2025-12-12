#include <stdio.h>
typedef struct{ int day, month, year; } Date;
typedef struct{ char name[50]; int id; Date join; } Employee;
int main(){
    Employee e; scanf("%s %d %d %d %d", e.name, &e.id, &e.join.day, &e.join.month, &e.join.year);
    printf("%s %d %02d-%02d-%04d\n", e.name, e.id, e.join.day, e.join.month, e.join.year);
    return 0;
}