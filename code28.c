//Write a program to print the product of even numbers from 1 to n.
#include <stdio.h>

int main() {
    int n, i;
    unsigned long long product = 1;

    printf("Enter a number: ");
    scanf("%d", &n);

    if (n < 2) {
        printf("No even numbers to multiply.\n");
        return 0;
    }

    
    for (i = 2; i <= n; i = i + 2) {
        product = product * i;
    }

    printf("Product of even numbers from 1 to %d is %llu\n", n, product);

    return 0;
}
