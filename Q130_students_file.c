#include <stdio.h>

typedef struct{ char name[50]; int roll; int marks; } Student;

int main(){
    FILE *f = fopen("students.txt","w");
    if(!f){ perror("fopen"); return 1; }
    int n=3;
    Student s;
    for(int i=0;i<n;i++){
        printf("Enter name roll marks: ");
        if(scanf("%s %d %d", s.name, &s.roll, &s.marks)!=3) return 0;
        fprintf(f, "%s %d %d\n", s.name, s.roll, s.marks);
    }
    fclose(f);
    // read back
    f = fopen("students.txt","r");
    while(fscanf(f,"%s %d %d", s.name, &s.roll, &s.marks)==3){
        printf("Name:%s Roll:%d Marks:%d\n", s.name, s.roll, s.marks);
    }
    fclose(f);
    return 0;
}