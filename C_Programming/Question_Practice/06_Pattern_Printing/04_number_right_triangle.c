#include <stdio.h>
int main()
{
    int n;
    printf("Enter your number : ");
    scanf("%d", &n);

    // nested look ka use kerna hai
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= i; j++)
        {
            printf("%d  ",j);
        }
        printf("\n");
    }

    return 0;
}