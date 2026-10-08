#include<stdio.h>
int main()
{

int n;
printf("Enter your number = ");
scanf("%d",&n);
int sum = 0;
for(int i=1;i<=n;i++){
//    if(i%2!=0) sum = sum + i;
//     else sum = sum -i;
//}
if(i%2==0) {
    sum = -n/2;
}else{
    sum = -n/2+n;
}
}
printf("thr sume is: %d\n",sum);

    return 0;
}