//Write a program to find the LCM of two numbers.
#include <stdio.h>

int hcf(int a, int b) {
    while (b != 0) {
        int remainder = a % b;
        a = b;
        b = remainder;
    }
    return a;
}

int main() {
    int num1, num2, lcmValue;

    printf("Enter two numbers: ");
    scanf("%d %d", &num1, &num2);

    if (num1 <= 0 || num2 <= 0) {
        printf("Please enter positive numbers only.\n");
        return 0;
    }

    int h = hcf(num1, num2);
    lcmValue = (num1 * num2) / h;

    printf("LCM of %d and %d is %d\n", num1, num2, lcmValue);

    return 0;
}
