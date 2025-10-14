// Q30: Reverse a given number
// Standard input/output, written for gcc (no stdlib.h)
#include <stdio.h>
#include <math.h>


int main() {
    long long n;
    if(scanf("%lld", &n)!=1) return 0;
    long long x = (n<0)? -n : n;
    long long rev = 0;
    while(x>0) { rev = rev*10 + x%10; x/=10; }
    if(n<0) printf("-%lld\n", rev); else printf("%lld\n", rev);
    return 0;
}
