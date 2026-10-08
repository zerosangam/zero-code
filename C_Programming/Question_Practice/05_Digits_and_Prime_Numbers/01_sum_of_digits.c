#include <stdio.h>

int main()
{
    int n, a = 0, b = 0;
    printf("Enter your number: ");
    scanf("%d", &n);
    while (n > 0)
    {
        a = n % 10;
        b = b + a;
        n = n / 10;
    }
    printf("sum of all digite : %d", b);

  
    return 0;
}
