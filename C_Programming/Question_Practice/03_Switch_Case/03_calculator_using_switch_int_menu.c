#include <stdio.h>
int main()
{
    int n, n1, oprater;
    printf("Enter your first number : ");
    scanf("%d", &n);
    printf("Enter your second number : ");
    scanf("%d", &n1);
    printf("1.addition : \n");
    printf("2.subtraction : \n");
    printf("3.multiplacition : \n");
    printf("4.reminter : \n");
    printf("5.dividing : \n");
    printf("Enter uper oprater : ");
    scanf("%d", &oprater);
    switch (oprater)
    {
    case 1:
        int sum = n + n1;
        printf("the sum of number %d amd %d ia : %d ", n, n1, sum);
        break;
    case 2:
        int subtraction = n - n1;
        printf("the subtractn of number %d amd %d ia : %d ", n, n1, subtraction);
        break;

    case 3:
        int multiplication = n * n1;
        printf("the multiplaction of number %d amd %d ia : %d ", n, n1, multiplication);
        break;
    case 4:
        int reminding = n % n1;
        printf("the reminder of number %d amd %d ia : %d ", n, n1, reminding);
        break;
    case 5:
        float dividing = (float)n / n1;
        printf("the dividing of number %d amd %d ia : %f ", n, n1, dividing);
        break;
    default:
        printf("invelid");
    }

    return 0;
}