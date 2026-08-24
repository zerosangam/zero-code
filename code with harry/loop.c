#include <stdio.h>
int main()
{
    char n[50];

    char z[50];

    printf("Enter your first name (do not ex..Kumar) = ");

    scanf("%s", n);

    printf("Enter your title(ex..kumar) = ");

    scanf("%s", z);

    int a;

    printf("Enter your number = ");

    scanf("%d", &a);

    // for(int i=1;i<=a;i++)
    int i = 1;
    while (i <= a)
    {
        printf("%s %s\n", n, z);
        i--;
    }

    return 0;
}
