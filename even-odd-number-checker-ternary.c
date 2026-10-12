/* Project: Even-Odd Number Checker
 * Using Ternary Operator(?) */
 
 #include <stdio.h>
 
 int main(void)
 {
     // Take an integer input from the user 
     int num;
     
     printf("Enter Number: ");
     scanf("%d", &num);
     
     // Display Output Using The Ternary Operator
     (num % 2 == 0) ?  printf("Even") : printf("Odd");
     
     return 0;
 }    