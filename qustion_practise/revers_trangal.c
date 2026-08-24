#include <stdio.h>
int main()
{
    int n;
    printf("Enter your number : ");
    scanf("%d", &n);

    for (int i = n; i; i--)
    {
        for (int j = 1; j<=i; j++)
        {
            printf("*");
        }
        printf("\n");
    }

    return 0;
}