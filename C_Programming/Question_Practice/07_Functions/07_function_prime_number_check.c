#include <stdio.h>

int prime(int n)
{
    int i;
    for (i = 2; i <= n; i++)
    {
        if (n % i == 0)
        {
            break;
        }
    }
    if (n > 1 && n == i)
    {
        printf("this number is a prime ");
    }
    else
    {
        printf("this number is not a prime");
    }
    return i;
}
int main()
{
    int n;
    printf("Enter your number : ");
    scanf("%d", &n);
    int result = prime(n);

    return 0;
}
