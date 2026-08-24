#include <stdio.h>
int main()
{
    int n;
    printf("Enter your number : ");
    scanf("%d", &n);

    // nested loop ka use kiya giya hai
    for (int i = n; i; i--)
    {
        for (int j = 1; j <= i; j++)
        {
            printf("%d  ", j);
        }printf("\n");
    }

    return 0;
}