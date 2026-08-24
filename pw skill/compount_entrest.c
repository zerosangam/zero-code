#include <stdio.h>
#include <math.h>

int main()
{
  double p, r, t;
  printf("entear prinpal = ");
  scanf("%lf", &p);

  printf("enter rate = ");
  scanf("%lf", &r);

  printf("enter time = ");
  scanf("%lf", &t);

  double ci = p * pow(1 + (r / 100), t);
  printf("your CI = %lf", ci);

  return 0;
}