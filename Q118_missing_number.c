#include <stdio.h>

int main(){
    int n;
    if(scanf("%d",&n)!=1) return 0;
    int sum_expected = n*(n+1)/2; // numbers 0..n, but array size n has one missing -> using 0..n
    int x, sum=0;
    for(int i=0;i<n;i++){ scanf("%d",&x); sum += x; }
    printf("%d\n", sum_expected - sum);
    return 0;
}