#include <stdio.h>
int main()
{
    int m;

    printf("Enter your total narks = ");
    scanf("%d", &m);

    if (m <= 100 && m >= 90)
    {
        printf("grade = a");
    }
    else if (m <= 90 && m >= 70)
    {
        printf("grade = B");
    }
    else if (m <= 70 && m >= 40)
    {
        printf("grade = C");
    }
    else if (m <= 40 && m >= 30)
    {
        printf("grade = D");
    }
    else
    {
        printf("grade = F");
    }

    return 0;
}