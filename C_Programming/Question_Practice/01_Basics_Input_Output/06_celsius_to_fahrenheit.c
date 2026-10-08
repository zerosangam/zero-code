#include <stdio.h>
int main()
{
    int c;
    printf("Enter  Celsius  number : ");
    scanf("%d", &c);
    float f = (c * 1.8) + 32;
    printf("yout faranhite temprocher is : %f", f);
}
