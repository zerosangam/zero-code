#include <stdio.h>
int main()
{
    int r;
    printf("Enter number : ");
    scanf("%d", &r);
    if (0 < r)
        printf("this number is a posative");
    else if (r == 0)
    {
        printf("oo nooo! you number is a zero");
    }
    else
    {
        printf("this number is a negative");
    }
}
