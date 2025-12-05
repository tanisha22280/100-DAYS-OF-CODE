//Write a program to implement a basic calculator using switch-case for +, -, *, /, %.
#include <stdio.h>

int main() {
    char op;
    int a, b;

    printf("Enter first number: ");
    scanf("%d", &a);

    printf("Enter operator (+, -, *, /, %%): ");
    scanf(" %c", &op);  
    printf("Enter second number: ");
    scanf("%d", &b);

    switch (op) {
        case '+':
            printf("Result: %d\n", a + b);
            break;

        case '-':
            printf("Result: %d\n", a - b);
            break;

        case '*':
            printf("Result: %d\n", a * b);
            break;

        case '/':
            if (b == 0)
                printf("Error: Division by zero not allowed.\n");
            else
                printf("Result: %d\n", a / b);
            break;

        case '%':
            if (b == 0)
                printf("Error: Modulo by zero not allowed.\n");
            else
                printf("Result: %d\n", a % b);
            break;

        default:
            printf("Invalid operator!\n");
    }

    return 0;
}
