#include <stdio.h>
int main()
{
    int n;
    printf("Enter your number : ");
    scanf("%d", &n);
    int str = 1;
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= n - i; j++)
        {
            printf("   ");
        }
        for (int k = 1; k <= str; k++)
        {
            printf(" ^ ");
        }
        str = str + 2;
        printf("\n");
    }

    return 0;
}