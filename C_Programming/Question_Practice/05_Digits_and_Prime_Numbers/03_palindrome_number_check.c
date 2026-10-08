#include <stdio.h>

int main()
{
    int n;
    int a = 0;
    int b = 0;
    int c = 0;

    printf("Enter your number: ");
    scanf("%d", &n);
    c = n;
    while (n > 0)
    {
        a = n % 10;
        b = (b * 10) + a;
        n = n / 10;
    }
    if (c == b)
    {
        printf("yes this is a Palindrome number");
    }
    else
    {
        printf("this is not a Palindrome number");
    }
    printf("\n");
    return 0;
}
