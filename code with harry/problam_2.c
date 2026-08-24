#include <stdio.h>
int main()
{
    int marks1, marks2, marks3;
    printf("Enter you number of subject = ");
    scanf("%d", &marks1);
    printf("Enter you number of subject = ");
    scanf("%d", &marks2);
    printf("Enter you number of subject = ");
    scanf("%d", &marks3);

    if (marks1 <= 33 || marks2 < 33 || marks3 < 33)
    {
        printf("your number is %d %d and %d you are frld in there are subject", marks1, marks2, marks3);
    }
    else if ((marks1 + marks2 + marks3) / 3 < 40)
    {
        printf("you are faild");
    }
    else
    {
        printf("your are passed");
    }

    return 0;
}