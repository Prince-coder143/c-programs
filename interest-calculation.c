#include <stdio.h>
#include <math.h>
int main()
{
    // Calculation simple interest, amount, compound interest
    float principal, rate, time, amount, simple_interest, compound_interest;
    // Input
    printf("Enter value of principal, time and rate: \n");
    scanf("%f %f %f", &principal, &time, &rate);
    // Calculation
    simple_interest = principal * time * rate/100;
    amount = principal * pow(1 + rate/100, time);
    compound_interest= amount - principal;
    // Output
    printf("Simple interest: %.2f\n", simple_interest);
    printf("Amount: %.2f\n", amount);
    printf("Compound interest: %.2f\n", compound_interest);
    return 0;
    }