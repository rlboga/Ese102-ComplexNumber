#include <stdio.h>

int main()
{
      int a;
      int r;
      int i;
      
      printf("Inserisci numero ");
      scanf("%d", &a);
      if(a%2==0)
       {
         r=a/2;
       }
       else
       {
           r=(a*5)+10;
       }

  printf("%d",r);
  system("PAUSE");
  return(0);
}
