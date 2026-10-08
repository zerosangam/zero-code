#include <stdio.h>
int main()
{
    int n, cube = 0;
    printf("Enter you number : ");
    scanf("%d", &n);

    cube = n * n * n;

    printf("%d of cube : %d", n, cube);

    return 0;
}