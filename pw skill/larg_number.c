#include<stdio.h>
int main()
{
    int a, b, c;

     printf("enter your first number = ");
      scanf("%d" , &a);

     printf("enter your second number = ");
      scanf("%d" , &b);

     printf("enter your therd number = ");
      scanf("%d" , &c);

    if(a>b && a>c)
    {
        printf("this number is big %d", a);
    }

    if(b>a && b>c)
    {
        printf("this number is big %d", b);
    }
  if(c>a && c>b)
    {
        printf("this number is big %d", c);
    }





return 0;
}