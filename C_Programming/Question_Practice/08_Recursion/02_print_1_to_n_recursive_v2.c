#include <stdio.h>
// Ek recursive function banao jo 1 se N tak ke numbers print kare.
int up_tp_n(int b)
{
    if (b == 0)
        return 0;
        up_tp_n(b - 1);
    printf("%d\n", b);
    return 0;
}
int main()
{
    int b;
    printf("Enter your base : ");
    scanf("%d", &b);
    int result = up_tp_n(b);

    return 0;
}