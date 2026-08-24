#include <stdio.h>
int main()
{
  int l;

  printf("enter number = ");
  scanf("%d", &l);

  if (l / 3 && l / 5)
  {
    printf("yes this is a devagibal");
  }
  else
  {
    printf("this is a not a devagibal");
  }

  return 0;
}
