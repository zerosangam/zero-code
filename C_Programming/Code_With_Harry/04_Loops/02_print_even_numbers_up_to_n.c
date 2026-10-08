// 1 se 10 tak numbers print karo.
// 1 se N tak numbers print karo.
// N se 1 tak reverse print karo.
// 1 se 100 tak even numbers print karo.
// 1 se 100 tak odd numbers print karo.

// 1 se 10 tak numbers print karo.(1 se N tak numbers print karo.,N se 1 tak reverse print karo.)

#include <stdio.h>
int main()
{
    int a, b, c, d;
    printf("Ente your number = ");
    scanf("%d", &a);

    // for(int i=1;i<=a;i++)   // 1 se N tak numbers print karo.
    // for(int i=a;i;i--)     //N se 1 tak numbers print karo.
    for (int i = 1; i <= a; i++)
    {
        // if(i%2!=0)        //1 se 100 tak odd numbers print karo.
        if (i % 2 == 0) // 1 se 100 tak even numbers print karo.
            printf("%d\n", i);
    }

    return 0;
}