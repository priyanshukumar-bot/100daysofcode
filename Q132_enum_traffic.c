#include <stdio.h>
enum Light{RED,YELLOW,GREEN};
int main(){
    enum Light l = RED;
    if(l==RED) printf("Stop\n");
    else if(l==YELLOW) printf("Wait\n");
    else printf("Go\n");
    return 0;
}