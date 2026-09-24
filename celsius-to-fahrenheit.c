#include <stdio.h>
int main()
{
    // Calculation celsius to fahrenheit.
    float celsius, fahrenheit;
    // Input
    printf("Enter celsius: \n");
    scanf("%f", &celsius);
    // Calculation
    fahrenheit = celsius * 9/5 + 32;
    // Output
    printf("Celsius: %.2f°C\n", celsius);
    printf("Fahrenheit: %.2f°F\n", fahrenheit);
    return 0;
}    