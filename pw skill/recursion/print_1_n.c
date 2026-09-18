#include <stdio.h>
void incriging(int x, int n)
{
    if (x > n)
        return;
    printf("%d\n", x);
    incriging(x + 1, n);
    return;
}
int main()
{
    int n;
    printf("Enter your number : ");
    scanf("%d", &n);
    incriging(1, n);

    return 0;
}