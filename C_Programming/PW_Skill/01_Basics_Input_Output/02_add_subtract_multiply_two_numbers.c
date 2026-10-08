#include <stdio.h>
int main()
{
     double n, b;                                 

       printf("inter the your first number = ");

     scanf ("%lf" , &n);

     printf("inter the your second number = ");

      scanf ("%lf" , &b);

     double s = n * b;
   
      printf("your multiplactio (*) answear =  %lf\n" , s);  

      double k = n - b;

      printf("your minesg (-) answear =  %lf\n" , k);

       double q = n + b;

     printf("your pluse (+) answear = %lf\n" , q);  
    
     return 0;
}