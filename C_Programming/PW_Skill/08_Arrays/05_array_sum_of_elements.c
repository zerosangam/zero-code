#include <stdio.h>
int main()
{
    int n,sum=0;
    printf("Enter size of array : ");
    scanf("%d", &n);
    int arr[n];
    for (int i = 0; i <= n - 1; i++)
    {
        scanf("%d", &arr[i]);
    }
    for (int i = 0; i <= n - 1; i++)
    {       sum= sum+arr[i];
    }
    printf("The sum of total arr is : %d ", sum);

    return 0;
}