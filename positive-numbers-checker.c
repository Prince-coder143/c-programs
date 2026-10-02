/* Project: Positive numbers checker
 * Topic: Logical and relational operators
 */
 
 #include <stdio.h>
 int main(void)
 {
     // Numbers entered by the user
     int num1, num2;
     printf("====================================\n");
     printf("|---- Positive numbers checker ----|\n");
     printf("====================================\n");
     // Input
     printf("Enter two numbers: ");
     scanf("%d %d", &num1, &num2);
     // AND: Both numbers must be positive
     printf("Both numbers are positive: %d\n", num1 > 0 && num2 > 0);
     // OR: At least one number is negative
     printf("At least one number is negative: %d\n", num1 < 0 || num2 < 0);
     // Equality check 
     printf("Both numbers are equal: %d\n", num1 == num2);
     return 0;
}     