#include <stdio.h>
int main()
{

    char operator;
    double num1, num2, a;

    
        printf("Enter a 1 number :");
        scanf("%lf", &num1);

        printf("Enter a 2 number :");
        scanf("%lf", &num2);

        printf("Enter a oprater :");
        scanf(" %c", &operator);

       
    
            switch (operator)
            {
            case '*':
                a = num1 * num2;
                printf("%2lf", a);
                break;

            case '-':
                a = num1 - num2;
                printf("%2lf", a);
                break;
            case '+':
                a = num1 + num2;
                printf("%2lf", a);
                break;

            case '/':
                a = num1 / num2;
                printf("%2lf", a);
                break;

            default:
                printf("Error! Invalid Operator. Try again.\n");
                break;
            }
        

        return 0;
}