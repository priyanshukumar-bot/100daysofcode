// Q36: GCD (HCF) of two numbers
// Standard input/output, written for gcc (no stdlib.h)
#include <stdio.h>
#include <math.h>


long long gcd(long long a, long long b){ if(b==0) return (a>=0)? a:-a; return gcd(b, a%b); }
int main(){
    long long a,b; if(scanf("%lld %lld",&a,&b)!=2) return 0;
    printf("%lld\n", gcd(a,b));
    return 0;
}
