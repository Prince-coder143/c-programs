/* Program to Demonstrate Bitwise AND Operator */ 

#include <stdio.h>

int main(void)

{
    int num1, num2;

    printf("Enter first number: ");
    scanf("%d", &num1);

    printf("Enter second number: ");
    scanf("%d", &num2);
    
    printf("Bitwise AND: %d", num1 & num2);
    
    return 0;
 }   