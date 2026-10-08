#include <stdio.h>
// Ek recursive function banao jo check kare ki number even hai ya odd

int even(int n)
{
    if(n==0)
    return 0;
  int ev = even(n-2)

}
int main()
{
    int n;
    printf("Enter your base : ");
    scanf("%d", &n);
    even(n);
    
    
    return 0;
}