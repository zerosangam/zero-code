#include <stdio.h>
int main()
{
    int n, nst, nsp = 1;
    printf("Enter your number : ");
    scanf("%d", &n);
    nst = n;
    for (int s = 65; s < 2*(n+1)+64; s++)
    {
        printf("%c", s);
    }
    printf("\n");

    for (int i = 1; i <= n; i++)
    {
        int a = 65;
        for (int j = 1; j <= nst; j++)
        {
            printf("%c", a);
            a++;
        }
        for (int k = 1; k <= nsp; k++)
        {
            printf(" ");
            a++;
        }
        for (int k = 1; k <= nst; k++)
        {
            printf("%c", a);
            a++;
        }

        nst--;
        nsp += 2;
        printf("\n");
    }

    return 0;
}