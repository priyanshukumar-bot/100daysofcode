#include <stdio.h>
typedef struct{ char name[50]; int roll; int marks; } Student;
int main(){
    int n; if(scanf("%d",&n)!=1) return 0;
    Student s; Student top; top.marks=-1;
    for(int i=0;i<n;i++){
        scanf("%s %d %d", s.name, &s.roll, &s.marks);
        if(s.marks>top.marks) top=s;
    }
    printf("%s %d %d\n", top.name, top.roll, top.marks);
    return 0;
}