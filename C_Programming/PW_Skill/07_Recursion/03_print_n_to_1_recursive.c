#include <stdio.h>
void hello(int n)
{
    if (n == 0)
        return;
    printf("%d\n",n);
    hello(n - 1);
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