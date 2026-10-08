#include<stdio.h>
int main()
{
int a;

printf("Enter your year(ex-2026) = ");
scanf("%d",&a);

int y;
if(y = a%4==0)
{
    printf("yes %d is a lipe year",a);
}

else
{
   printf("%d not a lipe year",a);
}


    return 0;
}