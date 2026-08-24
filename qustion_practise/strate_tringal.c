#include <stdio.h>
int main()
{
    int n;
    printf("Enter your nuomber : ");
    scanf("%d", &n);
    for (int i = 1; i <= n; i++)
    {
        for (int j = i; j; j--)
        {
            printf("*");
        }
        printf("\n");
    }

    return 0;
}