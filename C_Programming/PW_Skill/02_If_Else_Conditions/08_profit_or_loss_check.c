#include<stdio.h>
int main()
{
     int cp;

     printf("inter cost prise = ");
        scanf("%d", &cp);
    

        int sp;

     printf("inter seling prise = ");
        scanf("%d", &sp);


     if(sp>cp)
       {
             printf("profit");
       }
    if(cp>sp)
       {
                printf("lose");
       }

       if(sp==cp)
       printf("moy moy");

     








    return 0; 
     
}
