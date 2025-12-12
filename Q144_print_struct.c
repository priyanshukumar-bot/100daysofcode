#include <stdio.h>
typedef struct{ char name[50]; int age; } Person;
void printPerson(Person p){ printf("Name:%s Age:%d\n", p.name, p.age); }
int main(){
    Person p; scanf("%s %d", p.name, &p.age);
    printPerson(p);
    return 0;
}