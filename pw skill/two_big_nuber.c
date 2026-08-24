//दो numbers में बड़ा number find करो।

#include<stdio.h>
int main()
{
int a,b;
printf("enter you number first = ");
scanf("%d",&a);
printf("enter you number second  = ");
scanf("%d",&b);

if(a<b)
{
    printf("number %d is a big",b);

}
else
{
    printf("this number %d is a big",a);
}
    return 0;
}