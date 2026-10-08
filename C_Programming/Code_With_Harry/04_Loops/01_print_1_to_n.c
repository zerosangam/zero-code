#include<stdio.h>
int main()
{
int a;
printf("Enter your number = ");
scanf("%d",&a);

for(int i=1;i<=a;i++)    //decraging
//for(int i=a;i;i--) //incriging
{
    printf("%d\n",i);
}


    return 0;
}