// Assignment Operator - Advance Hard Practice
#include <stdio.h>

int main(void)
{
    int x = 20, y = 7, z = 3;
    
    x -= y;
    y *= z;
    x += y;
    z += x % y;
    x /= z;
    y -= x;
    z *= 2;
    x %= y;
    
    printf("x = %d y = %d z = %d", x, y, z);
    
    return 0;
 }