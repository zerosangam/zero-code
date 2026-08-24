#include <stdio.h>

int main()
{
    int n;

    printf("Enter your row : ");
    scanf("%d", &n);

    if (n % 2 != 0)
    {
        for (int i = 1; i <= n; i++)
        {
            for (int j = 1; j <= n; j++)
            {
                if (i == 1 || i == n || j == 1 || j == n)
                {
                    printf("*  ");
                }
                else
                {
                    printf("   ");
                }
            }

            printf("\n");
        }
    }
    else
    {
        printf("Only use odd number, not an even number");
    }

    return 0;
}