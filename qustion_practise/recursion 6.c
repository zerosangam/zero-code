#include <stdio.h>
void number(int n)
{ // Name Printer: एक ऐसा फंक्शन बनाइए जो आपका नाम N बार प्रिंट करे।
    if (n == 0)
    {
        return;
    }
    else
    {
        number(n - 1);
        printf("hello zero\n");
    }
}
int main()
{
    int n;
    printf("Enter your number : ");
    scanf("%d", &n);
    number(n);

    return 0;
}