#include <stdio.h>
void number(int n)
{
    if (n == 0)
    {
        return;
    }
    else
    {
        printf("%d\n",n);
        number(n - 1);
    }
}
int main()
{
    int n;
    printf("Enter your number : ");
    scanf("%d", &n);
    number(n);

    return 0;
}