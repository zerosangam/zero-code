#include <stdio.h>
int main()
{
    int n;
    printf("Enter your number 1 to 7 : ");
    scanf("%d", &n);
    switch (n)
    {
    case 1:
        printf("monday");
        break;
    case 2:
        printf("tuesday");
        break;

    case 3:
        printf("Wednesday");
        break;
    case 4:
        printf("therday");
        break;
    case 5:
        printf("fryday");
        break;
    case 6:
        printf("suterday");
        break;
    case 7:
        printf("sunday");
        break;
    default:
        printf("invelid");
    }

    return 0;
}