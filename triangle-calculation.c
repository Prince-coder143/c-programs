#include <stdio.h>
int main()
{
    // Calculate triangle area 
    float base, height, area;
    //Input
    printf("Enter base and height: \n");
    scanf("%f %f", &base, &height);
    // Calculation
    area = (base * height)/2;
    // Output
    printf("Area: %.2f\n", area);
    return 0;
}    