#include <stdio.h>
int number(int n,int sum)
{
    
    if (n == 0)
    {
        return sum;
    }
    else
    {
     return number(n%10,sum+n)+number(n/10,sum);
        
    }
    
}
int main()
{
    int n;
    printf("Enter your number : ");
    scanf("%d", &n);
  int result = number(n,0);
  printf("%d",result);

    return 0;
}