#include <stdio.h>
int main()
{
    char ch;
    printf("Enter your alphabet : ");
    scanf("%c", &ch);

    if (ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u' ||
        ch == 'A' || ch == 'E' || ch == 'I' || ch == 'O' || ch == 'U')
    {
        printf("this alphabet is a vowel");
    }
    else
    {
        printf("this alphabet is a consonant");
    }
    return 0;
}
