#include <stdio.h>
int number(int n)
{
    int sum = 0;
    // Reverse Counting: N से लेकर 1 तक उल्टी गिनती (जैसे 5, 4, 3, 2, 1) प्रिंट करें।
    if (n == 0)
    {
        return 0;
    }
    {
        int v = sum + number(n - 1);
        printf("%d\n", v);
    }
}
int main()
{
    int n;
    printf("Enter your number : ");
    scanf("%d", &n);
    number(n);

    return 0;
}