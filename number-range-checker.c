/* Project: Number Range Checker
 * Topic: Relational and Logical Operators
 */
 
 #include <stdio.h>
 
 int main(void)
 {
     // Number Entered by the User
     int number;
     // Input
     printf("Enter number: ");
     scanf("%d", &number);
     
     // AND: Both Boundary Conditions Must be True
     printf("Inside (10,50): %d\n", number > 10 && number < 50);
     
     // OR: 10 or below or 50 or above
     printf("Outside (10,50): %d\n", number <= 10 || number >= 50);
     
     // NOT: Reverses the inside-range result
     printf("NOT Inside (10,50): %d\n", !(number > 10 && number < 50));
     
     return 0;
}     