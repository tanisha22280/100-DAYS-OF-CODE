//Write a program to find the HCF (GCD) of two numbers.
#include <stdio.h>

int main() {
    int a, b, tempA, tempB, hcf;

    printf("Enter two numbers: ");
    scanf("%d %d", &a, &b);

    if (a <= 0 || b <= 0) {
        printf("Please enter positive numbers only.\n");
        return 0;
    }

    tempA = a;
    tempB = b;

   
    while (tempB != 0) {
        int remainder = tempA % tempB;
        tempA = tempB;
        tempB = remainder;
    }

    hcf = tempA;

    printf("HCF (GCD) of %d and %d is %d\n", a, b, hcf);

    return 0;
}
