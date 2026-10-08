#include <stdio.h>
int main()
{
    int n, sum = 0;
    printf("Enter your number : ");
    scanf("%d", &n);

    for (int i = 1; i <= n; i++)
    {
        printf("%d\n", i);
        sum = sum + i;
    }
    printf("sum of all number : %d", sum);
    return 0;
}