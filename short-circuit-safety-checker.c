/* Project: Short circuit safety checker
 * Topic: Relational and Logical operators
 */
 
 #include <stdio.h>
 
 int main(void)
 {
     // Three integers variables
     int a = 0, b = 15, c = 5;
     int AND_result = a != 0 && b / a > 2;
     int OR_result = a == 0 || b / a > 2;
     int Combined_result = (a != 0 && b / a > 2) || (c > 3 && b > 10);
     
     // AND: Evaluate left side and skip divide expression evaluation
     printf("AND Short-circuit Conditions Check: %d\n", AND_result);
     
     // OR: Evaluate left side and skip divide expression evaluation
     printf("Or short-circuit Conditions Check: %d\n", OR_result);
     
     // Combined Expressions and skip divide expression Evaluations
     printf("Combined Expressions (&&,||): %d\n", Combined_result);
     
     return 0;
 }    