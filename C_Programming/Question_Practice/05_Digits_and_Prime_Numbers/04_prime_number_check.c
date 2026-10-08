#include <stdio.h>
int main()
{
    int n, i;
    printf("Enter you number : ");
    scanf("%d", &n);

    for (i = 2; i < n; i++)
    {
        if (n % i == 0)
        {
            break;
        }
    }
    if (i == n && n > 1)
    {
        printf("yes prime number");
    }
    else
    {
        printf("not prime number");
    }
    return 0;
}