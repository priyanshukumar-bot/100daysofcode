#include <stdio.h>
enum Month{JAN=1,FEB,MAR,APR,MAY,JUN,JUL,AUG,SEP,OCT,NOV,DEC};
int days_in_month(int m){
    if(m==2) return 28;
    if(m==4||m==6||m==9||m==11) return 30;
    return 31;
}
int main(){ for(int m=JAN;m<=DEC;m++) printf("%d: %d days\n", m, days_in_month(m)); return 0; }