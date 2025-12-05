//Write a program to find profit or loss percentage given cost price and selling price.

#include <stdio.h>

int main() {
    float cp, sp, percent;

    printf("Enter Cost Price (CP): ");
    scanf("%f", &cp);

    printf("Enter Selling Price (SP): ");
    scanf("%f", &sp);

    if (cp <= 0) {
        printf("Cost price must be greater than 0.\n");
        return 0;
    }

    if (sp > cp) {
        percent = ((sp - cp) / cp) * 100;
        printf("Profit Percentage = %.2f%%\n", percent);
    }
    else if (sp < cp) {
        percent = ((cp - sp) / cp) * 100;
        printf("Loss Percentage = %.2f%%\n", percent);
    }
    else {
        printf("No Profit, No Loss.\n");
    }

    return 0;
}
