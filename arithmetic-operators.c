
#include <stdio.h>
int main()
{
/* Calculate arithmetic operators. */
// Input variables
int first_number, second_number;
// Result variables
int sum, difference, product, remainder;
// Float result variable
float quotient;
printf("Enter two numbers: \n");
scanf("%d %d", &first_number, &second_number);
sum = first_number + second_number;
printf("Sum: %d\n", sum);
difference = first_number - second_number;
printf("Difference: %d\n", difference);
product = first_number * second_number;
printf("Product: %d\n", product);
quotient = (float)first_number / second_number;
printf("Quotient %.2f\n", quotient);
remainder = first_number % second_number;
printf("Remainder: %d\n", remainder);
return 0;
}

 
  
