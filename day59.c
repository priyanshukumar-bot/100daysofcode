#include<stdio.h>
int main(){
    int n;
    printf("enter the no of elements\n");
    scanf("%d",&n);
    int b[n];
    for(int i=0;i<n;i++){
        printf("enter b[%d]\n",i);
        scanf("%d",&b[i]);
    }
    int p;
    printf("enter the subarray element\n");
    scanf("%d",&p);
    int k=p-1;
    int t=0;
   for (int  i = 0; i < n; i++)
   {
    int sum=0;
    if(i!=k){
    for (int  j=i+1; j < n; j++)
    {
        if(j!=k){
sum=b[i]+b[j];

        }
    }
    if(sum>t){
        t=sum;
    }
}
   }
   printf("%d",t);
   



    return 0;
}