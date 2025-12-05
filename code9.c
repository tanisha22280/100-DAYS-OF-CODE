//Write a program to calculate simple and compound interest for given principal, rate, and time.
#include <stdio.h>
#include <math.h>
int main(){
    float p, r, t;
    float SI, CI, a;

    printf("Enter Principal amount:");
    scanf("%f", &p);

    printf("Enter rate of interest  (in %%): ");
    scanf("%f", &r);

    printf("Enter time (in years):");
    scanf("%f", &t);

    SI = (p*r*t)/100;
    a = p*pow((1+r/100), t);

    CI = a-p;

    printf("\nSimple Interest = %.2f", SI);
    printf("\nCompound Interest = %.2f\n", CI);

    return 0;


    
}