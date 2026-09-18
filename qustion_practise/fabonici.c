#include <stdio.h>
int fabonico(int n)
{
    if (n == 1)
        return 0;
    // f(n) =f(n-1) +f(n-2)
    int total = fabonico(n - 1) + fabonico(n - 2);
    return total;
}
int main()
{
    int n;
    printf("Enter your number : ");
    scanf("%d", &n);
    int result = fabonico(n);
    printf("%d", result);

    return 0;
}