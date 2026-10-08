#include <stdio.h>

int main()
{
    int n, i;

    printf("Enter a number: ");
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
        printf("Prime Number");
    }
    else
    {
        printf("Not Prime");
    }

    return 0;
}
