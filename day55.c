#include<stdio.h>
int main(){
  int n;
    printf("enter no of elements in arrays\n");
    scanf("%d",&n);
int a[n];
for(int i=0;i<n;i++){
    printf("enter a[%d]\n",i);
    scanf("%d",&a[i]);
}
int sum=0;
for(int i=0;i<n;i++){
    sum=sum+a[i];
}
int k=0;
for (int  i = 1; i < n; i++)
{
    int leftsum=0;
    int rightsum;
    for (int  j = i-1; j>=0;j--)
    {
        leftsum=leftsum+a[j];
    }
    rightsum=sum-leftsum-a[i];
    if(rightsum==leftsum){
        printf("%d",i);
        k=1;
        break;
    }
}
if(k==0){
    printf("-1");
}
    

    return 0;
}
