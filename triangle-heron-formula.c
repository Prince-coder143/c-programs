#include <stdio.h>
#include <math.h>
int main()
{
    // Calculation triangle area using heron's formula
    // Three side of triangle 
    float side_a, side_b, side_c;
    // triangle semi perimeter and area
    float semi_perimeter, area;
    // Input 
    printf("Enter the value three side of triangle: \n");
    scanf("%f %f %f", &side_a, &side_b, &side_c);
    // Calculation using heron's formula 
    semi_perimeter = (side_a + side_b + side_c) / 2;
    area = sqrt(semi_perimeter*(semi_perimeter - side_a)*
               (semi_perimeter - side_b)*
               (semi_perimeter - side_c));
    // Output
    printf("Area: %.2f\n", area);
    return 0;
}  