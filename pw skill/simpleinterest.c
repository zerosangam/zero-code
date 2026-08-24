#include<stdio.h>

int main()
{
    float p;

    printf("Enter principal amount: ");

    scanf("%f",&p);

    float r;

    printf("Enter rate of interest: ");
    
    scanf("%f",&r);

    float t;
    
    printf("Enter time (in years): ");

    scanf("%f",&t);

    float si;

    si = (p*r*t)/100;

    printf("your simple interest is: %f",si);

    return 0;
}