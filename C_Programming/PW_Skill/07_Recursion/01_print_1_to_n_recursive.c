#include <stdio.h>
void hello(int n)
{
    if (n == 0)
        return;
        hello(n - 1);
        printf("%d\n", n);
    return;
}
int main()
{
    int n;
    printf("Enter your number : ");
    scanf("%d", &n);
    hello(n);

    return 0;
}