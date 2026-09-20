#include <stdio.h>
#include <math.h>
int main()
{
  // Calculate power using pow() function
int number1, number2;
float result;
printf("Enter two numbers: \n");
scanf("%d %d", &number1, &number2);
// number1 to the power number2
result = pow((float)number1, number2);
printf("Number1^number2: %.0f\n", result);
return 0;
}
