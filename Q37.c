// Q37: LCM of two numbers
// Standard input/output, written for gcc (no stdlib.h)
#include <stdio.h>
#include <math.h>


long long gcd(long long a, long long b){ if(b==0) return (a>=0)? a:-a; return gcd(b,a%b); }
long long llabs_inline(long long x){ return x<0? -x : x; }
int main(){
    long long a,b; if(scanf("%lld %lld",&a,&b)!=2) return 0;
    if(a==0 || b==0){ printf("0\n"); return 0; }
    long long g = gcd(a,b);
    long long l = llabs_inline(a / g * b);
    printf("%lld\n", l);
    return 0;
}
