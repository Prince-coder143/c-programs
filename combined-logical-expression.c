/* Project: Combined Logical Expression
 * Topic: &&, ||, ! and Comparisons
 */
 
 #include <stdio.h>
 
 int main(void)
 {
     int a = 15, b = 10, c = 20, d = 5;
     int result;
     
     // Evaluate the given logical expression
     result = !(a < b || c == d) && (a > d && b < c);
     
     printf("Values: a=%d b=%d c=%d d=%d\n", a, b, c, d);
     printf("Result: %d\n", result);
     
     return 0;
 }      