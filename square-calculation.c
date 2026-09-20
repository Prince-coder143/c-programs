#include <stdio.h>
int main()
{
// Square calculation area and perimeter
int side, area, perimeter;
printf("Enter side: \n");
scanf("%d", &side);
// Square formulas
area = side * side;
perimeter = 4 * side;
printf("Square area: %d \n", area);
printf("Square perimeter: %d \n", perimeter);
return 0;
}
