// Ek int function banao jo 10 return kare. main() me us value ko ek variable me store karke print karo.
#include <stdio.h>
int zero()
{
    return 10;
}
int main()
{
    int result = zero();
    zero();
    printf("%d",result);
    return 0;
}