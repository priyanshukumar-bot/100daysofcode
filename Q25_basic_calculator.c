#include <stdio.h>

int main() {
    char op;
    int a, b, result;

    printf("Enter two numbers: ");
    scanf("%d %d", &a, &b);

    printf("Enter operator (+, -, *, /, %%): ");
    scanf(" %c", &op);   // space before %c to ignore newline

    switch (op) {
        case '+':
            result = a + b;
            printf("Result: %d\n", result);
            break;
        case '-':
            result = a - b;
            printf("Result: %d\n", result);
            break;
        case '*':
            result = a * b;
            printf("Result: %d\n", result);
            break;
        case '/':
            if (b != 0)
                printf("Result: %d\n", a / b);
            else
                printf("Error! Division by zero.\n");
            break;
        case '%':
            if (b != 0)
                printf("Result: %d\n", a % b);
            else
                printf("Error! Modulus by zero.\n");
            break;
        default:
            printf("Invalid operator.\n");
    }

    return 0;
}