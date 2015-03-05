#include <stdio.h>
// Dati 10 numeri sommare quelli positivi //

main()
{
 int n;
 int i;
 int s;
 s==0;

for(i=0;i<10;i++)
 {
                    
                    scanf("%d", &n);
                    if(n>0)
                    {
                           s=s+n;
                    }
                    else
                    {
                        printf("Il numero inserito non è valido");
                    }
                    
 }
 printf("La somma dei numeri positivi e' ", s);
 system("PAUSE");
}

