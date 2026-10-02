/* Project: Logical operator in c
 * Demonstrate: AND, OR, NOT 
 * and relational operator 
 */
 
 #include <stdio.h>
 int main(void)
 {
     // Numbers entered by the user
     int num1, num2;
     
     printf(" ==========================\n");
     printf(" |--- LOGICAL OPERATOR ---|\n");
     printf(" ==========================\n");
     printf("Enter first number: ");
     scanf("%d", &num1);
     printf("Enter second number: ");
     scanf("%d", &num2);
     
     // AND: Both numbers must be positive 
     printf("\n--- LOGICAL AND(&&) ---\n");
     printf("Both numbers are positive: %d\n", num1 > 0 && num2 > 0);
     
     // OR: At least one number must be positive
     printf("\n--- LOGICAL OR(||) ---\n");
     printf("At least one number are positive: %d\n", num1 > 0 || num2 > 0);
     
     // NOT: Reverse the zero condition
     printf("\n--- LOGICAL NOT(!) ---\n");
     printf("First number is not zero: %d\n", !(num1 == 0));
     
     // Equality check
     printf("\n--- Comparison ---\n");
     printf("Both numbers are equal: %d\n", num1 == num2);
     return 0;
     }
 