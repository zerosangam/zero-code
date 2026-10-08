#include <stdio.h>
int main()
{
  int n;
  printf("enter your number = ");
  scanf("%d", &n);
  if (n < 0)
  {
    n = n * (-1);
  }

  printf("the abslute velue = %d", n);

  return 0;
}