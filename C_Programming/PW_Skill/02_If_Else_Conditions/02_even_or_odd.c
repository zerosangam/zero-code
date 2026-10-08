//Check करो कि कोई number even है या odd।
#include<stdio.h>
int main()
{
int a;
printf("Enter your number  = ");
scanf("%d",&a);
if (a%2==0)
{
    printf("the number %d is a even",a);
}
else
{
printf("the number %d is a odd",a);
}



    return 0;
}