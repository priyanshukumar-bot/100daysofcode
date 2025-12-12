#include <stdio.h>

int main(){
    FILE *f = fopen("numbers.txt","r");
    if(!f){ perror("fopen"); return 1; }
    long long sum=0; int x; int count=0;
    while(fscanf(f,"%d",&x)==1){ sum+=x; count++; }
    if(count==0){ printf("No numbers\n"); fclose(f); return 0; }
    printf("Sum: %lld\nAverage: %.6f\n", sum, (double)sum/count);
    fclose(f);
    return 0;
}