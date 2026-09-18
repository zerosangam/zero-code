#include <stdio.h>
// Ek recursive function banao jo kisi number ke digits ka sum nikale.
int sum(int b)
{
    if (b == 0)
        return 0;;
    int reminder = b % 10;
    int shot = sum(b / 10);
    int total = reminder + shot;

    return total;
}
int main()
{
    int b;
    printf("Enter your base : ");
    scanf("%d", &b);
    int result = sum(b);
    printf("%d", result);

    return 0;
}