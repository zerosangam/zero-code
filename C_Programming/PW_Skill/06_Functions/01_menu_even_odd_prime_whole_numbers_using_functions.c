#include <stdio.h>
void whole(int number, int lenth)
{
    switch (number)
    {
    case 4:
        for (int i = 0; i <= lenth; i++)
        {
            printf("%d ", i);
        }
        break; 

    default:
        break;
    }
    return;
}
void prime(int number, int lenth)
{

    switch (number)
    {
    case 3:
        for (int i = 2; i <= lenth; i++)
        {
            int isPrime = 1;

            for (int j = 2; j < i; j++)
            {
                if (i % j == 0)
                {
                    isPrime = 0;
                    break;
                }
            }

            if (isPrime == 1)
            {
                printf("%d ", i);
            }
        }
        default:
            break;
    }
    return;
}
void odd(int number, int lenth)
{
    switch (number)
    {

    case 2:
        for (int i = 1; i <= lenth; i++)
        {
            if (i % 2 != 0)
            {
                printf("%d ", i);
            }
        }
        break;

    default:
        break;
        return;
    }
}

void even(int number, int lenth)

{
    switch (number)
    {
    case 1:
        for (int i = 1; i <= lenth; i++)
        {
            if (i % 2 == 0)
            {
                printf("%d ", i);
            }
        }
        break;

    default:
        break;
    }

    return;
}
int main()
{
    int number, lenth;
    printf("1. one to n even number    : \n");
    printf("2. one to n odd number     : \n");
    printf("3. one to n prime number   : \n");
    printf("4. one to n whole number   : \n");
    printf("chose a number (ex-1,2,...): ");
    scanf("%d", &number);
    printf("Enter your higst lenth : ");
    scanf("%d", &lenth);
    even(number, lenth);
    odd(number, lenth);
    prime(number, lenth);
    whole(number, lenth);

    return 0;
}