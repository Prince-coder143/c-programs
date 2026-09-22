#include <stdio.h>
int main()
{
    // Swap two numbers and characters
    int first_number, second_number, temp1;
    char first_character, second_character, temp2;
    printf("Enter two numbers and character: \n");
    scanf("%d %d %c %c", &first_number, &second_number,
          &first_character, &second_character);
    printf("Before numbers: %d %d\n", first_number, 
           second_number);
    printf("Before characters:%c %c \n", first_character,
           second_character);
    // Numbers swap logic
    temp1 = first_number;
    first_number = second_number;
    second_number = temp1;
    // Characters swap logic 
    temp2 = first_character;
    first_character = second_character;
    second_character = temp2;
    // Output
    printf("After numbers: %d %d\n", first_number,
           second_number);
    printf("After characters: %c %c\n", first_character,
           second_character);
    return 0;
}