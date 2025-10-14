// Q31: Decimal to binary representation
// Standard input/output, written for gcc (no stdlib.h)
#include <stdio.h>
#include <math.h>


int main() {
    unsigned long long n;
    if(scanf("%llu", &n)!=1) return 0;
    if(n==0) { printf("0\n"); return 0; }
    char buf[65]; int idx=0;
    while(n>0) { buf[idx++]= '0' + (n&1); n >>= 1; }
    for(int i=idx-1;i>=0;i--) putchar(buf[i]);
    putchar('\n');
    return 0;
}
