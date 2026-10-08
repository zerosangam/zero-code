#include <stdio.h>
// table likna ka code
int main()
{
    int n;
    printf("inter your number = ");
    scanf("%d", &n);

    for (int i = n; i <= n * 10; i = i + n)
    {
        printf("\n%d", i);
    }

    return 0;
}