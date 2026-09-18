// Ek function square() banao jo ek number le aur uska square return kare.
#include <stdio.h>
int square(int n)
{

    int m = n * n;

    return m;
}
int main()
{
    int n;
    printf("Enter your number : ");
    scanf("%d", &n);
    square(n);
    int squrt = square(n);
    printf("%d ka square %d hai.\n", n, square(n));

    return 0;
}