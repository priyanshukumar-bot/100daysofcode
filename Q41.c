// Q41: Swap first and last digit of a number
// Standard input/output, written for gcc (no stdlib.h)
#include <stdio.h>
#include <math.h>
#include <math.h>

int main(){
    long long n; if(scanf("%lld",&n)!=1) return 0;
    int neg = n<0; long long x=(n<0)? -n : n;
    if(x<10){ if(neg) printf("-%lld\n", x); else printf("%lld\n", x); return 0; }
    long long last = x%10;
    long long first = x;
    long long p=1;
    while(first>=10){ first/=10; p*=10; }
    long long middle = x % p;
    long long res = last * p + (middle - last) + first;
    if(neg) printf("-%lld\n", res); else printf("%lld\n", res);
    return 0;
}
