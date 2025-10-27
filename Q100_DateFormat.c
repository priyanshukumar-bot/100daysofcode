#include <stdio.h>
int main() {
    char date[15];
    gets(date);
    char dd[3], mm[3], yy[5];
    dd[0]=date[0]; dd[1]=date[1]; dd[2]='\0';
    mm[0]=date[3]; mm[1]=date[4]; mm[2]='\0';
    for(int i=6,j=0;i<10;i++,j++) yy[j]=date[i];
    yy[4]='\0';
    char *months[]={"Jan","Feb","Mar","Apr","May","Jun","Jul","Aug","Sep","Oct","Nov","Dec"};
    int m=(mm[0]-'0')*10+(mm[1]-'0');
    printf("%s-%s-%s", dd, months[m-1], yy);
    return 0;
}