#include <stdio.h>
int main()
{
    int income;
    float tax = 0;
    printf("Enter your total encome = ");
    scanf("%d", &income);

    if (income <= 200000)
    {
        tax = 0;
    }
    else if (income <= 500000)
    {
        tax = 0.2 * (income - 200000);
    }
    else if (income <= 1000000)
    {
        tax = 0.2 * 200000 + 0.5 * (income - 500000);
    }
    printf("Tax = %f\n", tax);

    return 0;
}
