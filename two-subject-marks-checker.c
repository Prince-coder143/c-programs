/* Project: Two-Subject Marks Checker
 * Topic: Relational and Logical Operators
 */
 
 #include <stdio.h>
 
 int main(void)
 {
     // Two subject marks entered by the user
     int subject1, subject2;
     // Input
     printf("Enter the two subject marks: ");
     scanf("%d %d", &subject1, &subject2);
     
     // AND: Both subjects have at least 33 marks
     printf("Pass threshold in both subjects: %d\n", subject1 >= 33 && subject2 >= 33);
     
     // OR: At least one subject is below 33
     printf("Below threshold in any subject: %d\n", subject1 < 33 || subject2 < 33);
     
     // Compare the two marks
     printf("Marks are equal: %d\n", subject1 == subject2);
     
     return 0;
}     