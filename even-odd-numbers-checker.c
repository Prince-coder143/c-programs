/* Project: Even Odd Numbers Checker
 * Using Bitwise And and Ternary Operators */
 
 #include <stdio.h>
 
 int main(void)
 {
     // Take an integer input from the user
     int num;
     int result;
     
     printf("Entered Number: ");
     scanf("%d",&num);
     
     //Calculation
     result = (num & 1);
     
     //Display the result using ternary operator 
     (result == 1) ? printf("Odd") : printf("Even");
     
     return 0;
  }   
     