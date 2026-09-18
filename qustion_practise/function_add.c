// add() naam ka function banao jo do numbers le aur unka sum return kare.
#include <stdio.h>
int add(int num1, int num2)
{
    int sum = num1 + num2;
    return sum;
}
int main()
{
    int num1, num2;
    printf("Enter your first number : ");
    scanf("%d", &num1);
    printf("Enter your second number : ");
    scanf("%d", &num2);
    int result = add(num1, num2);
    printf("the sum of number %d and %d is : %d", num1, num2, result);
    return 0;
}
