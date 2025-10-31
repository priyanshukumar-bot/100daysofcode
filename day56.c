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


for (int  i = 0; i < n-1; i++)
{
    for (int  j= i+1; j <n ; j++)
    {
        if(a[i]<a[j]){
            printf("%d",a[j]);
            break;
        }
    }
    
}
printf("-1");

    return 0;
}