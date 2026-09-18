#include <stdio.h>
int main()
{
    int n, product = 1;
    printf("Enter size of array : ");
    scanf("%d", &n);
    int arr[n];
    for (int i = 0; i <= n - 1; i++)
    {
        scanf("%d", &arr[i]);
    }
    for (int i = 0; i <= n - 1; i++)
    {
        product = product * arr[i];
    }
    printf("The product of arr is : %d ", product);

    return 0;
}