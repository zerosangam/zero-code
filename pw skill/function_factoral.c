#include <stdio.h>
int factorial(int n)
{
    if (n == 1 || n == 0)
    {
        return 1;
    }

    return factorial(n - 1) * n;
}
int main()
{
    int n;
    printf("Enter your number : ");
    scanf("%d", &n);

    printf("The factorial of number : %d", factorial(n));

    return 0;
}