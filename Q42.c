// Q42: Check perfect number
// Standard input/output, written for gcc (no stdlib.h)
#include <stdio.h>
#include <math.h>


int main(){ long long n; if(scanf("%lld",&n)!=1) return 0; if(n<=1){ printf("Not Perfect\n"); return 0; } long long sum=1; for(long long i=2;i*i<=n;i++){ if(n%i==0){ sum += i; if(i != n/i) sum += n/i; } } if(sum==n) printf("Perfect\n"); else printf("Not Perfect\n"); return 0; }
