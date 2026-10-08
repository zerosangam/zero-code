#include <stdio.h>
int power(int b, int p)
{
    if (p == 0)
        return 1;

    int pow = b * power(b, p - 1);
    return pow;
}
int main()
{
    int b;
    printf("Enter your base : ");
    scanf("%d", &b);
    int p;
    printf("Enter your power : ");
    scanf("%d", &p);
    int pow = power(b, p);
    printf("your total velu of : %d",pow);

    return 0;
}