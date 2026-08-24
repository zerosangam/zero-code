#include <stdio.h>

int main()
{
    int n;
    printf("Enter your number = ");
    scanf("%d", &n);

    int a = 0;
    int b = 1;
    int sum;
    int total = 0;

    for (int i = 0; i < n; i++)
    {
        printf("%d\n", a);

        total = total + a;

        sum = a + b;
        a = b;
        b = sum;
    }

    printf("Total sum of Fibonacci numbers = %d\n", total);

    return 0;
}