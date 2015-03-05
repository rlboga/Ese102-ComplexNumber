#include <stdio.h>

int main()
{
    int a;
    while(a!=0)
    {
               scanf("%d", &a);
               if(a==5)
               {
                       a=0;
               }
               else
               {
                   if(a%2==0)
                   {
                            printf("Questo e' paro");
                   }
                   else
                   {
                       printf("Questo e' disparo");
                   }
               }
    }
printf("%d",a);
system("PAUSE");
return(0);
}
    
