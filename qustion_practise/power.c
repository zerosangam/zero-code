#include <stdio.h>

int power(int b, int e)
{
    int n = 1;
    for (int i = 1; i <= e; i++)
    {
        n =  n * b;
    }
    return n;
}
int main()
{
    int b, e;
    printf("Enter base number : ");
    scanf("%d", &b);
    printf("Enter exp number : ");
    scanf("%d", &e);
    int result = power(b, e);
    printf("power is : %d", result);
    return 0;
}
