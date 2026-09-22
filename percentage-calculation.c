#include <stdio.h>
#define FULL_MARKS 500
int main()
{
    // Find the sum and percentage in five subject 
    int mathematics, physics, chemistry, hindi,
            english, total_marks;
    float percentage;
    // Input
    printf("Enter marks of 5 subjects(out of 100):\n");
    scanf("%d %d %d %d %d", &mathematics, &physics, 
    &chemistry, &hindi, &english);
    // Calculation
    total_marks= mathematics + physics + chemistry + hindi + english;
    percentage = (float)total_marks * 100/FULL_MARKS;
    // Output
    printf("Total_marks: %d\n", total_marks);
    printf("Percentage: %.2f%%\n", percentage);
    return 0;
}