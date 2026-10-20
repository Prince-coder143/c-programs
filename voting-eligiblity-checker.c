/*Project: Voting Eligibilty Checker
 *Using if-else conditional statement */
 
 #include <stdio.h>
 
 int main(void)
 {
     //Input the value of the age from the user
     int age;
     
     printf("Enter age: ");
     scanf("%d", &age);
     
     if (age >= 18)
     {
         printf("Eligible");
     }
     
     else if (age < 0)
     {
         printf("Invalid age");
     }    
     
     else 
     {
         printf("Not Eligible");
     }
   
     return 0;
  }           