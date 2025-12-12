#include <stdio.h>
enum Gender{MALE,FEMALE,OTHER};
typedef struct{ char name[50]; enum Gender g; } Person;
int main(){
    Person p = {"Alex", MALE};
    printf("%s: %d\n", p.name, p.g);
    return 0;
}