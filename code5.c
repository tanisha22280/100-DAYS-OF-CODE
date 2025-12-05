//Write a program to convert temperature from Celsius to Fahrenheit.
#include <stdio.h>
int main(){
    int celsius;
    int fahrenheit;

printf("Enter temperature in Celsius (integer value): ");
scanf("%d", &celsius);
fahrenheit = (celsius*9)/ 5 + 32;

printf("%d Celsius is %d Fahrenheit\n", celsius, fahrenheit);

return 0;


}