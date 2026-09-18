#include <stdio.h>
int main()
{
    int n,j;
    printf("Enter your number : ");
    scanf("%d", &n);
    int str = 1;
    for (int i = 1; i <= n; i++)
    {
        for (j = 1; j <= n - i; j++)
        {
            printf("   ");
        }
        for (int k = 1; k <= str; k++)
        {
            printf(" %d ",k);
        }
        str =str + 2;
        printf("\n");
    }

    return 0;
}