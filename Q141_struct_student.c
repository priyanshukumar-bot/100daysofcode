#include <stdio.h>
typedef struct{ char name[50]; int roll; int marks; } Student;
int main(){
    Student s;
    printf("Enter name roll marks: ");
    if(scanf("%s %d %d", s.name, &s.roll, &s.marks)!=3) return 0;
    printf("%s %d %d\n", s.name, s.roll, s.marks);
    return 0;
}