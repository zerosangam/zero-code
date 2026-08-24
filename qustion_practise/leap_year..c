#include <stdio.h>
int main()
{
    int a;
    printf("Enter year number(ex:2002,2004...etc) : ");
    scanf("%d", &a);
    if (a % 4 == 0)
    {
        printf("this is a leap year");
    }
    else
    {
        printf("this is not a leap year");
    }

    return 0;
}