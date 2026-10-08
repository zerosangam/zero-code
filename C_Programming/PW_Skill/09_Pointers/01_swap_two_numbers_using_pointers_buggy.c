#include <stdio.h>
void swap(int *x, int *y)
{
    int temp;
    temp = *x;
    *x=*y;
    *x =temp;
    return;
}
int main()
{
    int a = 2;
    int b = 1;
    swap(&a, &b);
    printf("rhe value of a is %d\n", a);
    printf("rhe value of b is %d\n", b);

    return 0;
}