// Q38: Sum of digits of a number
// Standard input/output, written for gcc (no stdlib.h)
#include <stdio.h>
#include <math.h>


int main(){ long long n; if(scanf("%lld",&n)!=1) return 0; long long x=(n<0)? -n : n, s=0; while(x){ s += x%10; x/=10; } printf("%lld\n", s); return 0; }
