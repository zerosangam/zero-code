#include <stdio.h>
int main()
{
    int arr[8] = {1, 2, 3, 4, 5, 6, 7, 8, 9};
    int count;
    int number;
    printf("Enter your number : ");
    scanf("%d", &number);
    for (int i = 0; i <= 7; i++)
    {
        for (int j = i + 1; j <= 7; j++)
        {
            if (arr[i] + arr[j] == number)
            {
                count++;
                printf("(%d,%d)\n", arr[i], arr[j]);
            }
        }
    }
    printf("TOtal pair of number : %d", count);
    return 0;
}