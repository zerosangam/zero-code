#include <stdio.h>
// Ek recursive function banao jo 1 se N tak ka sum nikale.
int up_tp_n(int b, int a)
{
    if (b == 0)
        return a;
    return up_tp_n(b - 1, a + b);
}
int main()
{
    int b;
    printf("Enter your base : ");
    scanf("%d", &b);
    int result = up_tp_n(b, 0);
    printf("%d", result);

    return 0;
}