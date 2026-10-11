/* Project: Greatest Number Checker
 * Purpose: Find the greatest among four numbers
 * using the ternary operator */
 
 #include <stdio.h>
 
 int main(void)
 {
     // Input four integers numbers
     int num1, num2, num3, num4, max3, max4;
     printf("Enter the value of four numbers: ");
     scanf("%d %d %d %d", &num1, &num2, &num3, &num4);
     
     // Find the greatest among the first three numbers 
     max3 = (num1 > num2) ? ((num1 > num3) ? num1 : num3) :
            ((num2 > num3) ? num2 : num3);
            
     // Compare the greatest of three with four numbers 
     max4 = (max3 > num4) ? max3 : num4;
     
     // Display Greatest numbers 
     printf("Greatest Numbers: %d",max4);
     
     return 0;
  }    
     