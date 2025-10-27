#include <stdio.h>
int main() {
    int n;
    scanf("%d",&n);
    for(int x=1;x<=n;x++){
        int s1=0,s2=0;
        for(int i=1;i<=x;i++) s1+=i;
        for(int i=x;i<=n;i++) s2+=i;
        if(s1==s2){
            printf("%d",x);
            return 0;
        }
    }
    printf("-1");
    return 0;
}