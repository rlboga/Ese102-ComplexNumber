#include <stdio.h>

int main()
{
      int a;
      int r;
      int i;
      
      printf("Inserisci un numero ");
      scanf("%d", &a);
      if(a%2==0)
      {
                r=a/2;
      }
      else
      {
          r=0;
          i=0;
          while(i<5)
          {
                    r=r+a;
                    i++;
                    a++;
          }
      }
printf("%d",r);
system("PAUSE");
return(0);

}
       
