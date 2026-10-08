// 1 से n तक का sum निकालो।
#include <stdio.h>
int main()
{
    int n;
    int sum;
    printf("Enter your number = ");
    scanf("%d", &n);
    int a;
    a = (n + 1) * n / 2;
    printf("%d\n", a);
    return 0;
}