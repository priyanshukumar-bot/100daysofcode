// Q34: Check if number is prime
// Standard input/output, written for gcc (no stdlib.h)
#include <stdio.h>
#include <math.h>


int main() {
    long long n; if(scanf("%lld", &n)!=1) return 0;
    if(n<=1){ printf("Not Prime\n"); return 0; }
    if(n<=3){ printf("Prime\n"); return 0; }
    if(n%2==0){ printf("Not Prime\n"); return 0; }
    for(long long i=3;i*i<=n;i+=2) if(n%i==0){ printf("Not Prime\n"); return 0; }
    printf("Prime\n");
    return 0;
}
