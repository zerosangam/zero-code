#include <stdio.h>
int main()
{
    int arr[5];
    for (int i = 0; i <= 4; i++)
    {
        scanf("%d", &arr[i]);
    }
    for (int i = 4;i>=0; i--)
    {
        printf(" the velue of %d\n", arr[i]);
    }

    return 0;
}
