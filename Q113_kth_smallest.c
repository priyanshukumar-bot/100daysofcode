#include <stdio.h>
#include <stdlib.h>

int cmp(const void *a, const void *b){ return (*(int*)a - *(int*)b); }

int main(){
    int n,k;
    if(scanf("%d",&n)!=1) return 0;
    int *arr = malloc(n * sizeof(int));
    for(int i=0;i<n;i++) scanf("%d",&arr[i]);
    scanf("%d",&k);
    if(k<1 || k>n){ printf("Invalid\n"); return 0; }
    qsort(arr,n,sizeof(int),cmp);
    printf("%d\n", arr[k-1]);
    free(arr);
    return 0;
}