#include <stdio.h>
int main() {
    float cp, sp, profit, loss;
    printf("Enter cost price and selling price: ");
    scanf("%f %f", &cp, &sp);

    if (sp > cp) {
        profit = sp - cp;
        printf("Profit Percentage = \n", (profit/cp)*100);
    } else if (cp > sp) {
        loss = cp - sp;
        printf("Loss Percentage = \n", (loss/cp)*100);
    } else {
        printf("No Profit No Loss\n");
    }

    return 0;
}