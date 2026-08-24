#include <stdio.h>
int main()
{
    int a, b, c;
    printf("Enter 1 number : ");
    scanf("%d", &a);

    printf("Enter 2 number : ");
    scanf("%d", &b);

    printf("Enter 3 number : ");
    scanf("%d", &c);
    
    if (a >= b && a >= c)
    {
        printf("number %d is big number", a);
    }
    else if (b >= a && b >= c)
    {
        printf("number %d is big number", b);
    }
    else
    {
        printf("number %d is big number", c);
    }
}
