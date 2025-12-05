//Write a program to swap the first and last digit of a number.
#include <stdio.h>
#include <math.h>

int main() {
    int num, original, firstDigit, lastDigit, digits, swapped;

    printf("Enter a number: ");
    scanf("%d", &num);

    if (num < 0) {
        printf("Please enter a positive number.\n");
        return 0;
    }

    original = num;
    lastDigit = num % 10;

    
    digits = (int)log10(num);

    firstDigit = num / pow(10, digits);

   
    int middle = num % (int)pow(10, digits); 
    middle = middle / 10;                    

   
    swapped = lastDigit * pow(10, digits) + middle * 10 + firstDigit;

    printf("Number after swapping first and last digit of %d is %d\n", original, swapped);

    return 0;
}
