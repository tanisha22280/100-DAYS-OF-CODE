//Write a program to input two numbers and display their sum, difference, product, and quotient.
#include <stdio.h>
int main(){
    int num1, num2 , sum, difference, product, div;
    printf("Enter the first integer:");
    scanf("%d", &num1);

    printf("Enter the second integer:");
    scanf("%d", &num2);
    
    sum = num1 + num2;
    difference = num1 - num2;
    product = num1 * num2;

    printf("The sum of %d & %d is: %d\n", num1, num2, sum);
    printf("The difference of %d & %d is: %d\n", num1, num2, difference);
    printf("The product of %d & %d is: %d\n", num1, num2, product);

    if (num2 != 0){
        printf("\nQuotient = %d\n", num1/num2);
    } else{
        printf("\ndivision is not possible (denominator is 0)\n");
    }

    return 0;

    

    


}