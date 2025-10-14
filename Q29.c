// Q29: Factorial of a number
// Standard input/output, written for gcc (no stdlib.h)
#include <stdio.h>
#include <math.h>


int main() {
    long long n;
    if(scanf("%lld", &n)!=1) return 0;
    if(n < 0) { printf("Factorial not defined for negative numbers\n"); return 0; }
    unsigned long long fact = 1;
    for(long long i=1;i<=n;i++) fact *= i;
    printf("%llu\n", fact);
    return 0;
}
