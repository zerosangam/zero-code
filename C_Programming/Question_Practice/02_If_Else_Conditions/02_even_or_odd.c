#include <stdio.h>
int main()
{
    int r;
    printf("Enter number : ");
    scanf("%d", &r);
    if (r % 2 == 0)
        printf("this number id even");
    else
    {
        printf("this number is a odd");
    }
}
