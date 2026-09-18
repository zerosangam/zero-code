#include <stdio.h>
int main()
{
    int n;
    printf("Enter size of array : ");
    scanf("%d", &n);
    int arr[n];

    for (int i = 0; i <= n - 1; i++)
    {
        scanf("%d", &arr[i]);
    }
    int max = arr[0];
    for (int i = 0; i <= n - 1; i++)
    {
        if (max < arr[i]) //mexmume number
        // if (max > arr[i]) //minimume number
        {
            max = arr[i];
        }
    }
    printf("The grater then of arr is : %d ", max);

    return 0;
}