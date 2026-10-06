/* Program to Demonstrate Bitwise Shift Operators */

#include <stdio.h> 

int main(void)
{
    int number, shift_position;
    
    // Input Number
    printf("Enter number: ");
    scanf("%d", &number);
    
    // Input Shift
    printf("Enter Shift Position: ");
    scanf("%d", &shift_position);
    
    // Output Shift Numbers
    printf("Left Shift: %d\n", number << shift_position);
    printf("Right Shift: %d", number >> shift_position);
    
    return 0;
  }  