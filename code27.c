//Write a program to print the sum of the first n odd numbers.
#include <stdio.h>

int main() {
    int n, sum = 0;

    printf("Enter n: ");
    scanf("%d", &n);

    if (n <= 0) {
        printf("Please enter a positive value for n.\n");
        return 0;
    }

    for (int i = 1; i <= n; i++) {
        sum += (2 * i - 1);  
    }

    printf("Sum of first %d odd numbers = %d\n", n, sum);

    return 0;
}
