#include <stdio.h>
enum Choice{ADD,SUBTRACT,MULTIPLY};
int main(){
    int a,b; if(scanf("%d %d",&a,&b)!=2) return 0;
    enum Choice c = ADD;
    switch(c){
        case ADD: printf("%d\n", a+b); break;
        case SUBTRACT: printf("%d\n", a-b); break;
        case MULTIPLY: printf("%d\n", a*b); break;
    }
    return 0;
}