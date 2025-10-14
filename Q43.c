// Q43: Check strong number
// Standard input/output, written for gcc (no stdlib.h)
#include <stdio.h>
#include <math.h>


long long fact(int d){ long long f=1; for(int i=2;i<=d;i++) f*=i; return f; }
int main(){ long long n; if(scanf("%lld",&n)!=1) return 0; long long x=(n<0)? -n : n, sum=0, orig=x; while(x){ sum += fact(x%10); x/=10; } if(sum==orig) printf("Strong\n"); else printf("Not Strong\n"); return 0; }
