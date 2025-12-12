#include <stdio.h>
typedef struct{ char name[50]; int roll; int marks; } Student;
int main(){
    Student arr[5];
    for(int i=0;i<5;i++) scanf("%s %d %d", arr[i].name, &arr[i].roll, &arr[i].marks);
    for(int i=0;i<5;i++) printf("%s %d %d\n", arr[i].name, arr[i].roll, arr[i].marks);
    return 0;
}