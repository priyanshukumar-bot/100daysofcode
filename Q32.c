// Q32: Check if number is palindrome
// Standard input/output, written for gcc (no stdlib.h)
#include <stdio.h>
#include <math.h>


int main() {
    long long n; if(scanf("%lld", &n)!=1) return 0;
    long long orig = n, x = (n<0)? -n : n, rev=0;
    while(x>0){ rev = rev*10 + x%10; x/=10; }
    if(orig<0) { printf("Not Palindrome\n"); return 0; }
    if(rev==orig) printf("Palindrome\n"); else printf("Not Palindrome\n");
    return 0;
}
