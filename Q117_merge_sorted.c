#include <stdio.h>
#include <stdlib.h>

int main(){
    int m,n;
    if(scanf("%d",&m)!=1) return 0;
    int *A = malloc(m*sizeof(int));
    for(int i=0;i<m;i++) scanf("%d",&A[i]);
    scanf("%d",&n);
    int *B = malloc(n*sizeof(int));
    for(int i=0;i<n;i++) scanf("%d",&B[i]);
    int *C = malloc((m+n)*sizeof(int));
    int i=0,j=0,k=0;
    while(i<m && j<n){
        if(A[i]<=B[j]) C[k++]=A[i++];
        else C[k++]=B[j++];
    }
    while(i<m) C[k++]=A[i++];
    while(j<n) C[k++]=B[j++];
    for(int t=0;t<k;t++){ printf("%d ", C[t]); }
    printf("\n");
    free(A); free(B); free(C);
    return 0;
}