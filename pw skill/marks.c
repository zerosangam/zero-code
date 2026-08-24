// Student के marks input लो और grade निकालो।
#include <stdio.h>

int main()
{
    int a, b, c, d, e;

    printf("Enter your mathematics number = ");
    scanf("%d", &a);

    printf("Enter your physics number = ");
    scanf("%d", &b);

    printf("Enter your chemistry number = ");
    scanf("%d", &c);

    printf("Enter your hindi number = ");
    scanf("%d", &d);

    printf("Enter your english number = ");
    scanf("%d", &e);

    float total = a + b + c + d + e;        // total marks (0-500)
    float percentage = (total / 500) * 100; // percentage (0-100)

    printf("Your total marks: %.2f\n", total);
    printf("Your percentage: %.2f%%\n", percentage);

    if (total >= 400 && total <= 500)
    {
        printf("Grade: A+ (Excellent)");
    }
    else if (total >= 350 && total < 400)
    {
        printf("Grade: A (Very Good)");
    }
    else if (total >= 300 && total < 350)
    {
        printf("Grade: B (Good)");
    }
    else if (total >= 250 && total < 300)
    {
        printf("Grade: C (Average)");
    }
    else if (total >= 200 && total < 250)
    {
        printf("Grade: D (Below Average)");
    }
    else
    {
        printf("Grade: F (Fail)");
    }

    return 0;
}