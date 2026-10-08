#include <stdio.h>
int main()
{
    int n, nst, nsp = 1;
    printf("Enter your number : ");
    scanf("%d", &n);
    nst = n;
    for (int i = 1; i <= n; i++)
    {
        int a = 1;
        for (int j = 1; j <= nst; j++)
        {
            printf("%d", a);
            a++;
        }
        for (int k = 2; k <= nsp; k++)
        {
            printf(" ");
            a++;
        }
        for (int k = 1; k <= nst; k++)
        {
            printf("%d", a);
            a++;
        }
        
        nst--;
        nsp += 2;
        printf("\n");
    }

    return 0;
}




