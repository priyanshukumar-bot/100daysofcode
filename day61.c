#include<stdio.h>
int main(){
    int k,n;
    printf("Ennter k:");
    scanf("%d",&k);

int arr[5]={1,2,-9,7,-1};
int n=5;
for (int i = 0; i <= (n-k); i++)
{
    for (int j = i; j < i+k; j++)
    {
        if(arr[j]<0){
            printf("%d,",arr[j]);
            break;
        }
    }
}


    return 0;
}
