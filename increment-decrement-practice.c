// Increment & Decrement Operators (Practice)
#include <stdio.h>

int main(void)
{
    int a = 12, b = 5, c = 3;
    
    b = a++;
    c = --b;
    a = c--;
    b = ++a;
    c++;
    a = b--;
    
    printf("a = %d b = %d c = %d", a, b, c);
    
    return 0;
 }   