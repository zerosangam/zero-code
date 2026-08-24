#include <stdio.h>
int main()
{
    // prime number find
    int n;
    printf("Enter your number : ");
    scanf("%d", &n);
    int i;
    for (i = 2; i < n; i++)
    {
        if (n % i == 0)
        {
            break;
        }
    }

    if (n == i && n > 1)
    {
        printf("prime number");
    }
    else
    {
        printf("not prime number");
    }

    return 0;
}