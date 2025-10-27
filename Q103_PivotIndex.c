#include <stdio.h>
int main() {
    int n;
    scanf("%d",&n);
    int a[n];
    for(int i=0;i<n;i++) scanf("%d",&a[i]);
    for(int i=0;i<n;i++){
        int left=0,right=0;
        for(int j=0;j<i;j++) left+=a[j];
        for(int j=i+1;j<n;j++) right+=a[j];
        if(left==right){
            printf("%d", i);
            return 0;
        }
    }
    printf("-1");
    return 0;
}