#include <stdio.h>

int main()
{
    int a;
    int b;
    int r;
    int t;
    t=0;
    scanf("%d", &a);
    scanf("%d", &b);
    if(b>a)
    {
           t=a;
           a=b;
           b=a;
    }
    r=1;
    while(r!=0)
    {
      r=a%b;
      a==b;
      b=r;
    } 
    printf("%d", a);
    system("PAUSE");
    return(0);

}
 
    
