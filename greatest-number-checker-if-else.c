/*Project: Check Greatest among the two numbers
 *Using if-else conditional statement */
 
 #include <stdio.h>
 
 int main(void)
 {
     // Take two integer input from the user
     int num1, num2;
     
     printf("Enter the values of first number: ");
     scanf("%d", &num1);
     
     printf("Enter the values of second number: ");
     scanf("%d", &num2);
     
     if (num1 > num2)
     {
         printf("First number is (%d) Greatest", num1);
     }
     else if (num1 == num2)
     {
         printf("Both numbers are equal (%d) == %d", num1, num2);
     }
     else 
     {
         printf("Second number is (%d) Greatest ", num2);
     }
     
     return 0;
  }
         