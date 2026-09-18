#include <stdio.h>
int main()
{
    int n; // 5
    printf("Enter your row : ");
    scanf("%d", &n); // 5^

    for (int i = 1; i <= n; i++) // n= 5
    {
        int a = 1;
        for (int j = 1; j <= i; j++)
        {
            int d = a + 64;
            char ch = (char)d;
            printf("%c ", ch);
            printf("%d  ", i);
            a++;
        }

        printf("\n");
    }
    return 0;
}