#include <stdio.h>
int main()
{
    int n;
    printf("Enter your number : ");
    scanf("%d", &n);

    // for (int i = 1; i<=n; i++)           //strate trangal
    for (int i = n; i; i--) // revers trangal

    {
        for (int j = 1; j <= i; j++) // strate trangal
        //  for (int j = i; j; j--)     // revers trangal

        {
            printf("%d  ", j); // number printing
            // printf("*");          // har line me * ko print kerta hai
        }

        printf("\n"); // har line ke bat ak enter marna hai
    }
    return 0;
}