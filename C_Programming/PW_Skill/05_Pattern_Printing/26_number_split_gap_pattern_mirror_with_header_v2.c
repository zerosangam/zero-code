#include <stdio.h>
int main()
{
    int n, nst, nsp = 1;
    printf("Enter your number : ");
    scanf("%d", &n);
    nst = n;
    int a = 1;
    for (int s = 1; s < (2 * n) + 2; s++)
    { 
        printf("%d", a);
        if (s <= n)
        {
            a++;
        }
        else
        {
            a--;
        }
        if (a ==0)
        {
            break;
        }
    }
    printf("\n");

    for (int i = 1; i <= n; i++)
    {

        for (int j = 1; j <= nst; j++)
        {
            printf("%d", j);
        }
        for (int k = 1; k <= nsp; k++)
        {
            printf(" ");
        }
        for (int k = nst; k; k--)
        {
            printf("%d", k);
        }

        nst--;
        nsp += 2;
        printf("\n");
    }

    return 0;
}