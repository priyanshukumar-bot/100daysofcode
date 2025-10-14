// Q52: Print grouped star blocks (example)
// Standard input/output, written for gcc (no stdlib.h)
#include <stdio.h>
#include <math.h>


int main(){
    int blocks[] = {1,2,3,4,1,2,3,4,3,2,1};
    int m = sizeof(blocks)/sizeof(blocks[0]);
    for(int i=0;i<m;i++){
        for(int r=0;r<blocks[i];r++) putchar('*');
        putchar('\n');
    }
    return 0;
}
