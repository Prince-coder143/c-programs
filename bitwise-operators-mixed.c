/* Program To Demonstrate Bitwise Mixed Operators (&, |, ^, ~, <<, >>). */

#include <stdio.h>

int main(void)
{
    int number1, number2, shift_position;
    printf("Enter First Number: ");
    scanf("%d", &number1);
    
    printf("Enter Second Number: ");
    scanf("%d", &number2);
    
    printf("Enter Shift Position: ");
    scanf("%d", &shift_position);
    
    printf("Bitwise AND: %d\n", number1 & number2);
    printf("Bitwise OR: %d\n", number1 | number2);
    printf("Bitwise XOR: %d\n", number1 ^ number2);
    printf("Bitwise 1st NOT: %d\n", ~number1);
    printf("Bitwise 2nd NOT: %d\n", ~number2);
    printf("Bitwise Left Shift: %d\n", number1 << shift_position);
    printf("Bitwise Right Shift: %d\n", number2 >> shift_position);
    
    return 0;
 }   