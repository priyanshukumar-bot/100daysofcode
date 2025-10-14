// Q44: Sum series 1 + 3/4 + 5/6 + ... up to n terms
// Standard input/output, written for gcc (no stdlib.h)
#include <stdio.h>
#include <math.h>


int main(){ int n; if(scanf("%d",&n)!=1) return 0; double sum=0.0; for(int i=1;i<=n;i++){ double num = 2*i - 1; double den = 2*i; sum += num/den; } printf("%.6f\n", sum); return 0; }
