#include <stdio.h>
int main()
{
    int x = 10, y = 20;

    int max = (x > y) ? x : y;

    printf("The maximum number is: %d\n", max);

    return 0;
}
