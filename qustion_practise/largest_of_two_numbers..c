#include <stdio.h>
int main()
{
    int r, a;
    printf("Enter 1 number : ");
    scanf("%d", &r);
    printf("Enter 2 number : ");
    scanf("%d", &a);
    if (r < a)
        printf("number %d is big number", a);
    else if (r == a)
    {
        printf("oo nooo! you number is a equal");
    }
    else
    {
        printf("number %d is big number", r);
    }
}
