#include <stdio.h>
int main()
{
    int c;
    printf("Enter your age number : ");
    scanf("%d", &c);
    if (18 <= c)
    {
        printf("yes you are voting eliglbility");
    }
    else{
        printf("no you are not voting eliglbility");
    }
}
