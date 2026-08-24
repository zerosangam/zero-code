#include <stdio.h>

int main()
{
    int n, a = 0;
    printf("Enter your number: ");
    scanf("%d", &n);

    printf("Reversed digits:\n");
    while (n > 0)
    {
        a = n % 10;
        printf("%d", a);
        n = n / 10;
    }

    printf("\n");
    return 0;
}
