// Assignment Operator - Hard Practice
#include <stdio.h>

int main(void)
{
    int a = 25, b = 6;
    
    a %= b;
    b += a;
    a *= 3;
    b -= 4;
    a += b;
    
    printf("a=%d b=%d", a, b);
    
    return 0;
}