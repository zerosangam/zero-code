// User se ek number lo aur uska square root nikalo using sqrt().
#include <stdio.h>

int main()
{
    int n;
    double sq;
    printf("Enter your number : ");
    scanf("%d", &n);

    sq = sqrt(n);

    printf("%2lf", sq);

    return 0;
}