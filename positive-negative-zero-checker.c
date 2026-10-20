/* Project: Positive, Negative Or Zero Checker 
 * Using if-else conditional statement */
 
 #include <stdio.h>
 
 int main(void)
 {
     // Take an integer input from the user
     int number;
    
    printf("Enter the number: ");
    scanf("%d", &number);
    
    if (number > 0)
    {
        printf("Positive\n");
    }
    
    else if (number == 0)
    {
        printf("Zero");
    }
    
    else 
    {
        printf("Negative");
    }
    
    return 0;            
 }   