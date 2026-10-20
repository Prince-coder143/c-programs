/*Project: Even Or Odd number checker
 *Using if-else conditional statement */
 
 #include <stdio.h>
 
 int main(void)
 {
     // Take an integer input from the user
     int number;
     
     printf("Enter the number: ");
     scanf("%d", &number);
     
     if (number % 2 == 0)
     {
         printf("Even");
     }
     else 
     {
         printf("Odd");
     }
     
     return 0;
   }          