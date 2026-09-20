#include <stdio.h>
#define PI 3.14
int main()
{
    // Circle calculation Area and circumference
    float radius, area, circumference;
    // Input
    printf("Enter radius: \n");
    scanf("%f", &radius);
    // Circle formulas
    area = PI * radius * radius;
    circumference = 2 * PI * radius;
    // Output
    printf("Area: %.2f\n", area);
    printf("Circumference: %.2f\n", circumference);
    return 0;
}