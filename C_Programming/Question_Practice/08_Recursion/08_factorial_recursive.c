#include <stdio.h>
// Ek recursive function banao jo kisi number ka factorial nikale.
int factorial(int b)
{
    if (b == 0)
        return 1;
    return b*factorial(b-1);
}
int main()
{
    int b;
    printf("Enter your base : ");
    scanf("%d", &b);
    int result = factorial(b);
    printf("%d", result);

    return 0;
}