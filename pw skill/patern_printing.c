#include <stdio.h>
int main()
{
    int n, b;
    printf("Enter your row : ");
    scanf("%d", &n);

    printf("Enter your cloumb : ");
    scanf("%d", &b);

    for (int i = 1; i <= n; i++)
    {
        for (int i = 1; i <= b; i++)
        {
            printf("*"); // har line me * ko print kerta hai
        }

        printf("\n"); // har line ke bat ak enter marna hai
    }
    return 0;
}