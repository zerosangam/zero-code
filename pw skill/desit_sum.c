#include<stdio.h>
int main()
{
int n;
printf("Enter your number = ");
scanf("%d",&n);
int sum =0;
int ld=0;
while (n!=0)
{
 //sum of all number
   ld = n%10;
    sum = sum + ld;  
    
     //only sum of even number
//    if(n%2==0)        
//    {sum = sum + ld;}

//only sum of odd number
//     if(n%2!=0)        
//     {sum = sum + ld;}
    n = n/10;
   
}
printf("the sum of total desit = %d",sum);
    return 0;
}