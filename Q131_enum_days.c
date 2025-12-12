#include <stdio.h>
enum Days{SUNDAY,MONDAY,TUESDAY,WEDNESDAY,THURSDAY,FRIDAY,SATURDAY};
int main(){
    for(int d=SUNDAY; d<=SATURDAY; d++) printf("%d\n", d);
    return 0;
}