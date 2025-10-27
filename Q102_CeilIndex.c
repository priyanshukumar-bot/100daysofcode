#include <stdio.h>
int main() {
    int n,x;
    scanf("%d",&n);
    int a[n];
    for(int i=0;i<n;i++) scanf("%d",&a[i]);
    scanf("%d",&x);
    int index=-1;
    for(int i=0;i<n;i++){
        if(a[i]>=x){
            index=i;
            break;
        }
    }
    printf("%d", index);
    return 0;
}