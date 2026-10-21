/*Project: Temperature status checker
 *Using if-else conditional statement */
 
 #include <stdio.h>
 
 int main(void)
 {
     //Input temperature from the user
     float temperature;
     
     printf("Enter the value of temperature: ");
     scanf("%f", &temperature);
     
     if (temperature < 0)
     {
        printf("Freezing below");
     }
     
     else if (temperature >= 0 && temperature <= 35)
     {
         printf("Normal range");
     }
     
     else 
     {
         printf("Hot");
     }
     
     return 0;
  }    
             