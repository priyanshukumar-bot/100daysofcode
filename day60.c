#include<stdio.h>
int main(){
 int n;
    printf("enter the no of elements\n");
    scanf("%d",&n);
    int arr[n];
    for(int i=0;i<n;i++){
        printf("enter b[%d]\n",i);
        scanf("%d",&arr[i]);
    }
    int k;
    printf("enter k\n");
    scanf("%d",&k);
for (int  i = 0; i < n-k-1; i++)
{
    int max=0;
for (int j = i; j < i+k; j++)
{
    if(arr[j]>max){
max=arr[j];
    }
}
printf("%d ",max);
}

    return 0;
}