/* Project: Age Condition Checker
 * Topic: Relational and Logical Operators
 */
 
#include <stdio.h>

int main(void)
{
    // Age entered by the user
    int age;
    printf("Enter age: ");
    scanf("%d", &age);
    
    // Check whether age is 18 or above
    printf("Age is 18 or above: %d\n", age >= 18);
    
    // Check whether age is below 18
    printf("Age is below 18: %d\n", age < 18);
    
    // NOT reverses the below-18 result
    printf("NOT (age is below 18): %d\n", !(age < 18));
    
    return 0;
}    