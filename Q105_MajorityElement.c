#include <stdio.h>
int main() {
    int n;
    scanf("%d",&n);
    int a[n];
    for(int i=0;i<n;i++) scanf("%d",&a[i]);
    for(int i=0;i<n;i++){
        int count=0;
        for(int j=0;j<n;j++)
            if(a[i]==a[j]) count++;
        if(count>n/2){
            printf("%d",a[i]);
            return 0;
        }
    }
    printf("-1");
    return 0;
}