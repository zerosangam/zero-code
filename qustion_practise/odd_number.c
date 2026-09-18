#include <stdio.h>
int main()
{
    int n, i, sum = 1;
    printf("Enter your number : ");
    scanf("%d", &n);

    for (i = 1; i <= n; i++)
    {
        if (i == 50)
        {
            break;;
        }

        printf("%d\n", i);
        sum = sum + i;
    }
    printf("total even number sum of :%d", sum);

    return 0;
}