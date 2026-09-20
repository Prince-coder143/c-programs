#include <stdio.h>
int main()
{
// Rectangle calculation Area and perimeter
int length, width, area, perimeter;
printf("Enter length and perimeter: \n");
scanf("%d %d", &length, &width);
// Rectangle formulas
area = length * width;
perimeter = 2*(length + width);
printf("Area: %d\n",area);
printf("Perimeter: %d\n", perimeter);
return 0;
}