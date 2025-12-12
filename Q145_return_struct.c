#include <stdio.h>
typedef struct{ char name[50]; int roll; int marks; } Student;
Student topStudent(Student arr[], int n){
    Student top = arr[0];
    for(int i=1;i<n;i++) if(arr[i].marks>top.marks) top=arr[i];
    return top;
}
int main(){
    int n; if(scanf("%d",&n)!=1) return 0;
    Student arr[n];
    for(int i=0;i<n;i++) scanf("%s %d %d", arr[i].name, &arr[i].roll, &arr[i].marks);
    Student t = topStudent(arr,n);
    printf("%s %d %d\n", t.name, t.roll, t.marks);
    return 0;
}