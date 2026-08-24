#include <stdio.h>
int main()
{
    int n;
    printf("Enter you number :");
    scanf("%d", &n);
    int a = 0, b = 1, sum = 0, total_sum_of_number = 0;
    for (int i = 0; i <= n; i++)
    {
        printf("%d\n", a);
        total_sum_of_number = total_sum_of_number + a;
        sum = a + b;
        a = b;
        b = sum;
    }
    printf("total sum of number : %d", total_sum_of_number);
    return 0;
}
