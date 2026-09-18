#include <stdio.h>
long long factorial(int n)
{
    if (n == 1)
    {
        return 1;
    }
    else
    {
        return n * factorial(n - 1);
    }
}
int main()
{
    int n;
    printf("Enter your number : ");
    scanf("%d", &n);
    int result = factorial(n);
    printf("%d", result);
    return 0;
}