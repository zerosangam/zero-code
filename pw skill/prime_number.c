#include <stdio.h>
int main()
{
    int n, i;
    printf("Enter your number :");
    scanf("%d", &n);

    for (i = 2; i < n; i++)
    {
        if (n % i == 0)
        {
            break;
        }
    }
    if (n > 1 && i == n)
    {
        printf("yes prime number");
    }
    else
    {
        printf("not prime number");
    }

    return 0;
}