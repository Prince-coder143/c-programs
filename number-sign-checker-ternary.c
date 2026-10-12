/* Project: Negative and Positive Numbers Checker
 * Using Ternary Operator
 */
 
 #include <stdio.h> 
 
 int main(void)
 {
     // Take an integer input form the user
     int num;
     printf("Enter Number: ");
     scanf("%d",&num);
     
     // Display Output Using the Ternary Operators
     (num > 0) ? printf("Positive") :
     (num < 0) ? printf("Negative") :
     printf("zero");
     
     return 0;
   }  