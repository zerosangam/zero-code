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
                int a = n / 2 + 1;
                if (j == a || i == a)
                {
                    printf("*  ");
                }
                else{printf("   ");}   //space hai
            } 

            printf("\n");
        }
    }
    else{
        printf("only use odd number not a even number");
    }
    return 0;
}