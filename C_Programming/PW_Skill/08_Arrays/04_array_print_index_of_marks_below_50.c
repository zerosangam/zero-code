#include <stdio.h>
int main()
{
    int marks[10] = {40, 65, 32, 43, 85, 97, 50, 42, 100, 20};
    for (int i = 0; i < 10; i++)
    {
        if (marks[i] < 50)
        {
            printf("%d\n",i);
        }
    }

    return 0;
}