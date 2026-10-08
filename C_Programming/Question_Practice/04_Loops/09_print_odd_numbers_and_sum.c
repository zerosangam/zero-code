#include <stdio.h>
int main()
{
    int n, sum = 0;
    printf("Enter your number : ");
    scanf("%d", &n);

    for (int i = 1; i <= n; i++)
    {
        if (i % 2 != 0)
        {
            printf("%d\n", i);
            sum = sum + i;
        }
    }
    printf("sum of %d digit odd number :%d ", n, sum);
    return 0;
}