#include <stdio.h>
int main()
{
    int n;
    printf("Enter your number : ");
    scanf("%d", &n);
    int num = 1;
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= n - i; j++)
        {
            printf("   ");
        }
        for (int k = 65; k < 65 + i; k++)
        {
            printf(" %c ", k);
        }
        for (int q = i - 2; q >= 0; q--)
        {
            printf(" %c ", 65 + q);
        }
        printf("\n");
    }

    return 0;
}