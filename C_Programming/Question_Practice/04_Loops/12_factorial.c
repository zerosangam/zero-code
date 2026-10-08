#include <stdio.h>
int main()
{
    int n, sum = 1;
    printf("Enter your number : ");
    scanf("%d", &n);
    for (int i = 1; i <= n; i++)
    {
        sum = sum * i;
    }
    printf("your factorialnumber is %d\n", sum);
    return 0;
}
