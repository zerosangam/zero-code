#include <stdio.h>
int main()
{
    int n;
    printf("enter your numert = ");
    scanf("%d", &n);

    if (n > 99 && n < 1000)
    {
        printf("it a 3 desite number");
    }
    else
    {
        printf("it is not a 3 desite number");
    }

    return 0;
}