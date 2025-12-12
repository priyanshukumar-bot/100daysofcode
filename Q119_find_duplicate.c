#include <stdio.h>
// Uses Floyd's Tortoise and Hare algorithm.
// Assumes numbers are in range 0..n-1 and there is exactly one duplicate.

int main(){
    int n;
    if(scanf("%d",&n)!=1) return 0;
    int a[n];
    for(int i=0;i<n;i++) scanf("%d",&a[i]);
    int tortoise = a[0], hare = a[0];
    do{ tortoise = a[tortoise]; hare = a[a[hare]]; } while(tortoise!=hare);
    tortoise = a[0];
    while(tortoise!=hare){ tortoise=a[tortoise]; hare=a[hare]; }
    printf("%d\n", tortoise);
    return 0;
}