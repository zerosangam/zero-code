#include <stdio.h>
int main()
{
    int arr[8] = {1, 2, 3, 4, 5, 6, 7, 8};
    int count;
    int number;
    printf("Enter your number : ");
    scanf("%d", &number);
    for (int i = 0; i <= 7; i++)
    {
        for (int j = i + 1; j <= 7; j++)
        {
            for (int k = j + 1; k <= 7; k++)
            {
                if (arr[i] + arr[j] + arr[k] == number)
                {
                    count++;
                    printf("(%d,%d,%d)\n", arr[i], arr[j], arr[k]);
                }
            }
        }
    }
    printf("Total pair of number : %d", count);
    return 0;
}